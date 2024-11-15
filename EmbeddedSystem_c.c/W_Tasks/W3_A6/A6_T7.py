import os

def rot13_cipher(text):
    result = []
    for char in text:
        if 'a' <= char <= 'z':
            result.append(chr((ord(char) - ord('a') + 13) % 26 + ord('a')))
        elif 'A' <= char <= 'Z':
            result.append(chr((ord(char) - ord('A') + 13) % 26 + ord('A')))
        else:
            result.append(char)
    return ''.join(result)

def load_player_progress():
    try:
        with open('player_progress.txt', 'r', encoding='utf-8') as file:
            lines = file.readlines()
            if len(lines) < 2:
                raise ValueError("Progress file is corrupted or incomplete.")
            progress_data = lines[-2].strip().split(';')
            if len(progress_data) != 3:
                raise ValueError("Progress data format is incorrect.")
            return int(progress_data[0]), int(progress_data[1]), progress_data[2]
    except FileNotFoundError:
        print("Progress file not found. Initializing new progress.")
        return 0, 1, "qvfpvcyvar"
    except ValueError as e:
        print(f"Error loading progress: {e}")
        return 0, 1, "qvfpvcyvar"

def update_player_progress(current_location, next_location, passphrase, message):
    with open('player_progress.txt', 'a', encoding='utf-8') as file:
        file.write(f"{current_location};{next_location};{passphrase}\n")
        file.write(f"{message}\n")

def read_message_file(location_id, passphrase):
    ciphered_filename = f"{location_id}_{passphrase}.gkg"
    try:
        with open(ciphered_filename, 'r', encoding='utf-8') as file:
            return file.readline().strip()
    except FileNotFoundError:
        print(f"Message file {ciphered_filename} not found.")
        return None

def save_deciphered_message(location_id, passphrase, message):
    plain_passphrase = rot13_cipher(passphrase)
    plain_filename = f"{location_id}-{plain_passphrase}.txt"
    with open(plain_filename, 'w', encoding='utf-8') as file:
        file.write(message)

def travel_to_next_location(current_location, next_location, passphrase):
    locations = ["home", "Galba's palace", "Otho's palace", "Vitellius' palace", "Vespasian's palace"]
    print(f"Currently at {locations[current_location]}.")
    print(f"Travelling to {locations[next_location]}...")
    print(f"...Arriving to the {locations[next_location]}.")
    plain_passphrase = rot13_cipher(passphrase)
    print(f"Passing the guard at the entrance.\n\"{plain_passphrase.capitalize()}!\"")
    ciphered_message = read_message_file(next_location, passphrase)
    if ciphered_message:
        print("Looking for the message in the palace...\nAh, there it is! Seems cryptic.")
        deciphered_message = rot13_cipher(ciphered_message)
        print("[Game] Progress autosaved!")
        print("Deciphering Emperor's message...")
        save_deciphered_message(next_location, passphrase, deciphered_message)
        update_player_progress(current_location, next_location, passphrase, deciphered_message)
    else:
        print("Failed to retrieve the message. Try again later.")
    print("Time to leave...")

def main():
    print("Travel starting.")
    current_location, next_location, passphrase = load_player_progress()
    travel_to_next_location(current_location, next_location, passphrase)
    print("Travel ending.")

if __name__ == "__main__":
    main()

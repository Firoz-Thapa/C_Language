import os

def apply_rot13_cipher(text):
    """Apply ROT13 cipher to the given text."""
    result = []
    for char in text:
        if 'a' <= char <= 'z':
            result.append(chr((ord(char) - ord('a') + 13) % 26 + ord('a')))
        elif 'A' <= char <= 'Z':
            result.append(chr((ord(char) - ord('A') + 13) % 26 + ord('A')))
        else:
            result.append(char)
    return ''.join(result)

def load_progress():
    """Load the player's progress from 'player_progress.txt'."""
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

def save_progress(current_location, next_location, passphrase, message):
    """Save the player's progress to 'player_progress.txt'."""
    with open('player_progress.txt', 'a', encoding='utf-8') as file:
        file.write(f"{next_location};{next_location + 1};{passphrase}\n")
        file.write(f"{message}\n")

def load_ciphered_message(location_id, passphrase):
    """Load the ciphered message from the file."""
    ciphered_filename = f"{location_id}_{passphrase}.gkg"
    try:
        with open(ciphered_filename, 'r', encoding='utf-8') as file:
            return file.readline().strip()
    except FileNotFoundError:
        print(f"Message file {ciphered_filename} not found.")
        return None

def store_deciphered_message(location_id, passphrase, message):
    """Store the deciphered message to a file."""
    plain_passphrase = apply_rot13_cipher(passphrase)
    plain_filename = f"{location_id}-{plain_passphrase}.txt"
    with open(plain_filename, 'w', encoding='utf-8') as file:
        file.write(message)

def navigate_to_next_location(current_location, next_location, passphrase):
    """Navigate to the next location and decipher the message."""
    locations = ["home", "Galba's palace", "Otho's palace", "Vitellius' palace", "Vespasian's palace"]
    
    # Validate location indices
    if current_location >= len(locations) or next_location >= len(locations):
        print("Invalid location index. Resetting progress.")
        current_location, next_location, passphrase = 0, 1, "qvfpvcyvar"

    print(f"Currently at {locations[current_location]}.")
    print(f"Travelling to {locations[next_location]}...")
    print(f"...Arriving to the {locations[next_location]}.")

    plain_passphrase = apply_rot13_cipher(passphrase)
    print(f"Passing the guard at the entrance.\n\"{plain_passphrase.capitalize()}!\"")

    ciphered_message = load_ciphered_message(next_location, passphrase)
    if ciphered_message:
        print("Looking for the message in the palace...\nAh, there it is! Seems cryptic.")
        deciphered_message = apply_rot13_cipher(ciphered_message)
        print("[Game] Progress autosaved!")
        print("Deciphering Emperor's message...")
        print("Looks like I've got now the plain version copy of the Emperor's message.")
        store_deciphered_message(next_location, passphrase, deciphered_message)
        save_progress(current_location, next_location, passphrase, deciphered_message)
    else:
        print("Failed to retrieve the message. Try again later.")

    print("Time to leave...")

def start_game_journey():
    """Main function to start the travel and message deciphering process."""
    print("Travel starting.")
    current_location, next_location, passphrase = load_progress()
    navigate_to_next_location(current_location, next_location, passphrase)
    print("Travel ending.")

if __name__ == "__main__":
    start_game_journey()

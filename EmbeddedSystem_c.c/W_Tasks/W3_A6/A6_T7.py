import os

def rot13_cipher(text):
    """Apply ROT13 cipher to the input text."""
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
    """Load the player's progress from the file."""
    try:
        with open('player_progress.txt', 'r', encoding='utf-8') as file:
            lines = file.readlines()
            header = lines[0].strip().split(';')
            progress_data = lines[-1].strip().split(';')
            return int(progress_data[0]), int(progress_data[1]), progress_data[2]
    except FileNotFoundError:
        print("Progress file not found. Initializing new progress.")
        return 0, 1, "qvfpvcyvar"  # Initial start: Home to Galba's palace with passphrase "discipline"

def update_player_progress(current_location, next_location, passphrase, message):
    """Update the player's progress in the progress file."""
    with open('player_progress.txt', 'a', encoding='utf-8') as file:
        file.write(f"{current_location};{next_location};{passphrase}\n")
        file.write(f"{message}\n")  # Append the deciphered message to the file

def read_message_file(location_id, passphrase):
    """Read and decipher the message file for the next location."""
    ciphered_filename = f"{location_id}_{passphrase}.gkg"
    try:
        with open(ciphered_filename, 'r', encoding='utf-8') as file:
            ciphered_message = file.readline().strip()
            return ciphered_message
    except FileNotFoundError:
        print(f"Message file {ciphered_filename} not found.")
        return None

def save_deciphered_message(location_id, passphrase, message):
    """Save the deciphered message to a plain text file."""
    plain_filename = f"{location_id}-{passphrase}.txt"
    with open(plain_filename, 'w', encoding='utf-8') as file:
        file.write(message)

def travel_to_next_location(current_location, next_location, passphrase):
    """Simulate traveling to the next location, decipher the message, and update progress."""
    locations = ["home", "Galba's palace", "Otho's palace", "Vitellius' palace", "Vespasian's palace"]
    print(f"Currently at {locations[current_location]}.")
    print(f"Travelling to {locations[next_location]}...")
    print(f"...Arriving to the {locations[next_location]}.")

    # Decipher passphrase and use it
    plain_passphrase = rot13_cipher(passphrase)
    print(f"Passing the guard at the entrance.\n\"{plain_passphrase.capitalize()}!\"")
    
    # Read and decipher the message
    ciphered_message = read_message_file(next_location, passphrase)
    if ciphered_message:
        print("Looking for the message in the palace...\nAh, there it is! Seems cryptic.")
        deciphered_message = rot13_cipher(ciphered_message)
        print("[Game] Progress autosaved!")
        print("Deciphering Emperor's message...")
        print(f"Deciphered message: {deciphered_message}")
        
        # Save deciphered message and update progress
        save_deciphered_message(next_location, plain_passphrase, deciphered_message)
        update_player_progress(current_location, next_location, passphrase, deciphered_message)
        print(f"Looks like I've got now the plain version copy of the Emperor's message saved as \"{next_location}-{plain_passphrase}.txt\".")
    else:
        print("Failed to retrieve the message. Try again later.")
    
    print("Time to leave...")

def main():
    print("Travel starting.")
    
    # Load the player's progress
    current_location, next_location, passphrase = load_player_progress()
    
    # Travel to the next location
    travel_to_next_location(current_location, next_location, passphrase)
    
    print("Travel ending.")

if __name__ == "__main__":
    main()

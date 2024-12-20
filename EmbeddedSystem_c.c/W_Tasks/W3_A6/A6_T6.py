def apply_rot13_cipher(text):
    """
    Apply ROT13 cipher to the given text.
    Rotates each letter by 13 positions in the alphabet.
    """
    result = []
    for char in text:
        if 'a' <= char <= 'z':
            result.append(chr((ord(char) - ord('a') + 13) % 26 + ord('a')))
        elif 'A' <= char <= 'Z':
            result.append(chr((ord(char) - ord('A') + 13) % 26 + ord('A')))
        else:
            result.append(char)
    return ''.join(result)

def collect_and_cipher_messages():
    """
    Collect rows of plain text, apply ROT13 cipher to each row, and save the result to a file.
    """
    print("Program starting.")
    print("\nCollecting plain text rows for ciphering.")
    
    # Collect rows of text from the user until an empty row is entered
    rows = []
    while True:
        row = input("Insert row(empty stops): ")
        if not row:
            break
        rows.append(row)

    # Apply ROT13 cipher to each row
    ciphered_rows = [apply_rot13_cipher(row) for row in rows]

    # Display the ciphered text
    print("\n#### Ciphered text ####")
    for row in ciphered_rows:
        print(row)
    print("\n#### Ciphered text ####")

    # Prompt the user to save the ciphered text to a file
    save_choice = input("Insert filename to save: ")
    if save_choice.strip():
        try:
            with open(save_choice, 'w', encoding='utf-8') as file:
                for row in ciphered_rows:
                    file.write(row + '\n')
            print("Ciphered text saved!")
        except Exception as e:
            print(f"An error occurred while saving: {e}")
    else:
        print("File name not defined.\nAborting save operation.")

    print("Program ending.")

def start_ciphering_program():
    """Main function to start the ciphering program."""
    collect_and_cipher_messages()
    return None

if __name__ == "__main__":
    start_ciphering_program()

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

def cipher_messages():
    print("Program starting.")
    print("Collecting plain text rows for ciphering.")
    
    rows = []
    while True:
        row = input("Insert row (empty stops): ")
        if not row:
            break
        rows.append(row)

    ciphered_rows = [rot13_cipher(row) for row in rows]

    print("\n#### Ciphered text ####")
    for row in ciphered_rows:
        print(row)
    
    save_choice = input("\nWould you like to save the ciphered text to a file? (y/n): ").lower()
    if save_choice == 'y':
        filename = input("Insert filename to save: ")
        with open(filename, 'w', encoding='utf-8') as file:
            for row in ciphered_rows:
                file.write(row + '\n')
        print("Ciphered text saved!")
    
    print("Program ending.")

if __name__ == "__main__":
    cipher_messages()

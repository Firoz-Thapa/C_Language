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
    print("\nCollecting plain text rows for ciphering.")
    rows = []
    while True:
        row = input("Insert row(empty stops): ")
        if not row:
            break
        rows.append(row)

    ciphered_rows = [rot13_cipher(row) for row in rows]

    print("\n#### Ciphered text ####")
    for row in ciphered_rows:
        print(row)

    print("\n#### Ciphered text ####")

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


def main() -> None:
    cipher_messages()
    return None
if __name__ == "__main__":
    main()

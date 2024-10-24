def write_text_file():
    print("Program starting.")
    first_name = input("Insert first name: ")
    last_name = input("Insert last name: ")
    filename = input("Insert filename: ")

    with open(filename, 'w', encoding='utf-8') as file:
        file.write(f"{first_name}\n{last_name}\n\n")
    
    print("Program ending.")

if __name__ == "__main__":
    write_text_file()

def read_text_file():
    print("Program starting.")
    print("This program can read a file.")
    filename = input("Insert filename: ")

    try:
        with open(filename, 'r', encoding='utf-8') as file:
            print(f"#### START \"{filename}\" ####")
            content = file.read()
            print(content)
            print(f"#### END \"{filename}\" ####")
    except FileNotFoundError:
        print(f"File {filename} not found.")
    
    print("Program ending.")

if __name__ == "__main__":
    read_text_file()

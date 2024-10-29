def main():
    print("Program starting.")
    print("This program can read a file.")
    filename = input("Insert filename: ")

    try:
        with open(filename, 'r', encoding='utf-8') as file:
            print(f"#### START \"{filename}\" ####")
            print(file.read())
            print(f"#### END \"{filename}\" ####")
    except FileNotFoundError:
        print(f"Error: File '{filename}' not found.")

    print("Program ending.")
    return None

if __name__ == "__main__":
    main()

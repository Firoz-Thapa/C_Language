def read_file_content():
    """Function to read and display the contents of a file."""
    print("Program starting.")
    print("This program can read a file.")
    
    # Prompt the user to input a filename
    filename = input("Insert filename: ")

    # Try opening the file and reading its content
    try:
        with open(filename, 'r', encoding='utf-8') as file:
            print(f"#### START \"{filename}\" ####")
            print(file.read())
            print(f"#### END \"{filename}\" ####")
    except FileNotFoundError:
        # Handle the case when the file is not found
        print(f"Error: File '{filename}' not found.")

    print("Program ending.")
    return None


if __name__ == "__main__":
    read_file_content()

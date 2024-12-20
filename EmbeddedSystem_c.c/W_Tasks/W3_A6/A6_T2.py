def write_names_to_file():
    """Function to write first and last name into a specified file."""
    print("Program starting.")
    
    # Collect first and last names from the user
    first_name = input("Insert first name: ")
    last_name = input("Insert last name: ")
    filename = input("Insert filename: ")

    # Write the names to the file
    with open(filename, 'w', encoding='utf-8') as file:
        file.write(f"{first_name}\n{last_name}\n")

    print("Program ending.")
    return None


if __name__ == "__main__":
    write_names_to_file()

def copy_file_content(src_filename, dest_filename):
    """Function to copy the content from the source file to the destination file."""
    try:
        # Read content from the source file
        with open(src_filename, 'r', encoding='utf-8') as src_file:
            print(f"Reading file '{src_filename}' content.")
            content = src_file.read()
            print("File content ready in memory.")

        # Write content to the destination file
        with open(dest_filename, 'w', encoding='utf-8') as dest_file:
            print(f"Writing content into file '{dest_filename}'.")
            dest_file.write(content)

        print("Copying operation complete.")
    except FileNotFoundError:
        # Handle file not found error
        print(f"Error: The file '{src_filename}' was not found.")
    except IOError as e:
        # Handle I/O errors
        print(f"An I/O error occurred: {e}")
    except Exception as e:
        # Handle unexpected errors
        print(f"An unexpected error occurred: {e}")


def start_file_copy_process():
    """Main function to initiate the file copying process."""
    print("Program starting.")
    print("This program can copy a file.")
    
    # Get source and destination filenames from the user
    src_filename = input("Insert source filename: ")
    dest_filename = input("Insert destination filename: ")
    copy_file_content(src_filename, dest_filename)

    print("Program ending.")
    return None


if __name__ == "__main__":
    start_file_copy_process()

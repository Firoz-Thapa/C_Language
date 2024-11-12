def main():
    print("Program starting.")
    print("This program can copy a file.")
    
 
    src_filename = input("Insert source filename: ")
    dest_filename = input("Insert destination filename: ")

    try:

        with open(src_filename, 'r', encoding='utf-8') as src_file:
            print(f"Reading file '{src_filename}' content.")
            content = src_file.read()
            print("File content ready in memory.")
        

        with open(dest_filename, 'w', encoding='utf-8') as dest_file:
            print(f"Writing content into file '{dest_filename}'.")
            dest_file.write(content)
        
        print("Copying operation complete.")
    except FileNotFoundError:
        print(f"File {src_filename} not found.")
    
    print("Program ending.")


if __name__ == "__main__":
    main()

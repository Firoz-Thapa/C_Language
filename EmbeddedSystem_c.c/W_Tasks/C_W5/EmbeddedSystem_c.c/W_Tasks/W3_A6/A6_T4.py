def string_analytics():

    print("Program starting.")
    print("This program analyses a list of names from a file.")
    filename = input("Insert filename to read: ")

    try:
        with open(filename, 'r', encoding='utf-8') as file:
            print(f"Reading names from \"{filename}\".")
            content = file.read().replace('\n', ';')  
            names = [name.strip() for name in content.split(';') if name.strip()]  
            print("Analysing names...")

            if names:
                name_count = len(names)
                shortest_name = min(names, key=len)
                longest_name = max(names, key=len)
                avg_length = sum(len(name) for name in names) / name_count
                
                print("Analysis complete!")
                print("#### REPORT BEGIN ####")
                print(f"Name count - {name_count}")
                print(f"Shortest name - {len(shortest_name)} chars")
                print(f"Longest name - {len(longest_name)} chars")
                print(f"Average name - {avg_length:.2f} chars")
                print("#### REPORT END ####")
            else:
                print("No names found in the file.")
    except FileNotFoundError:
        print(f"File {filename} not found.")

    print("Program ending.")


def main() -> None:

    string_analytics()
    return None


if __name__ == "__main__":
    main()

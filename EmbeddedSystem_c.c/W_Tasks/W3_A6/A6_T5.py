def analyze_numbers_in_file():
    """Function to analyze numbers from a file."""
    print("Program starting.")

    # Prompt the user to input the filename
    filename = input("Insert filename: ")

    try:
        # Read numbers from the file
        with open(filename, 'r', encoding='utf-8') as file:
            numbers = [int(line.strip()) for line in file.readlines()]
            
            # Perform analysis on the numbers
            count = len(numbers)
            total_sum = sum(numbers)
            greatest = max(numbers)
            average = total_sum / count

            # Display analysis results
            print("#### Number analysis - START ####")
            print(f"File \"{filename}\" results:")
            print("Count;Sum;Greatest;Average")
            print(f"{count};{total_sum};{greatest};{average:.2f}")
            print()
            print("#### Number analysis - END ####")
    except FileNotFoundError:
        # Handle the case when the file is not found
        print(f"File {filename} not found.")

    print("Program ending.")


def start_number_analysis():
    """Main function to start the number analysis process."""
    analyze_numbers_in_file()
    return None


if __name__ == "__main__":
    start_number_analysis()

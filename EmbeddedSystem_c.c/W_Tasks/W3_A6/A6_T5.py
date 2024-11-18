def number_analytics():

    print("Program starting.")
    filename = input("Insert filename: ")

    try:
        with open(filename, 'r', encoding='utf-8') as file:
            numbers = [int(line.strip()) for line in file.readlines()]            
            count = len(numbers)
            total_sum = sum(numbers)
            greatest = max(numbers)
            average = total_sum / count
            print("#### Number analysis - START ####")
            print(f"File \"{filename}\" results:")
            print("Count;Sum;Greatest;Average")
            print(f"{count};{total_sum};{greatest};{average:.2f}")
            print()
            print("#### Number analysis - END ####")
    except FileNotFoundError:
        print(f"File {filename} not found.")

    print("Program ending.")


def main() -> None:
    number_analytics()
    return None


if __name__ == "__main__":
    main()

def main():
    print("=" * 60)
    print("         MUNICIPAL FINANCIAL MANAGEMENT SYSTEM")
    print("=" * 60)
    print("\n         Welcome to Windhoek Municipality")
    print("-" * 60)
    print("\nPlease enter the following municipal details:\n")
    municipality_name = input("Municipality Name: ")
    mayor_name = input("Mayor's Name: ")
    while True:
        try:
            population = int(input("Population: "))
            break
        except ValueError:
            print("Error: Please enter a valid number for population.")
    print("\n" + "=" * 60)
    print("         MUNICIPAL INFORMATION REPORT")
    print("=" * 60)
    print(f"\n{'Municipality Name:':<25} {municipality_name}")
    print(f"{'Mayor\'s Name:':<25} {mayor_name}")
    print(f"{'Population:':<25} {population:,}")
    print("\n" + "-" * 60)
    print("         End of Report")
    print("=" * 60)

if __name__ == "__main__":
    main()
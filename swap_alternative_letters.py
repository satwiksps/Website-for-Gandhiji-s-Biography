
def swap_letters_alternative(name, positions):
    name_list = list(name)
    
    for pos1, pos2 in positions:
        if pos1 >= len(name) or pos2 >= len(name) or pos1 < 0 or pos2 < 0:
            raise ValueError("Position values must be within the length of the name.")
        
        name_list[pos1], name_list[pos2] = name_list[pos2], name_list[pos1]
    
    return ''.join(name_list)

if __name__ == "__main__":
    # Example usage
    print("Enter a name:")
    name = input().strip()
    
    try:
        print("Enter number of swaps:")
        num_swaps = int(input())
        positions = []
        
        for _ in range(num_swaps):
            print("Enter two positions to swap (0-based indexing):")
            pos1 = int(input("Position 1: "))
            pos2 = int(input("Position 2: "))
            positions.append((pos1, pos2))
        
        swapped_name = swap_letters_alternative(name, positions)
        print(f"Name after swapping: {swapped_name}")
    except ValueError as e:
        print(f"Error: {e}")

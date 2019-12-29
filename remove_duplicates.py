
def remove_duplicates(lst):
    return list(set(lst))

nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("After removing duplicates:", remove_duplicates(nums))

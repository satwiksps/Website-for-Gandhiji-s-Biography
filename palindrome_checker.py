
# Python program to check if a string is a palindrome

def is_palindrome(s):
    return s == s[::-1]

string = input("Enter a string: ")
print(f"The string '{string}' is a palindrome." if is_palindrome(string) else f"The string '{string}' is not a palindrome.")

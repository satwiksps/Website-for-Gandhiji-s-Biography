
def is_palindrome(n):
    return str(n) == str(n)[::-1]

number = int(input("Enter a number: "))
print("Palindrome" if is_palindrome(number) else "Not a palindrome")


def is_armstrong(number):
    digits = list(map(int, str(number)))
    power = len(digits)
    return sum(d**power for d in digits) == number

n = int(input("Enter a number: "))
print("Armstrong number" if is_armstrong(n) else "Not an Armstrong number")

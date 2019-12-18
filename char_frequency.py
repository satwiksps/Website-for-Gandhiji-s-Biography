
from collections import Counter

text = input("Enter a string: ")
frequency = Counter(text)
print("Character frequencies:", dict(frequency))

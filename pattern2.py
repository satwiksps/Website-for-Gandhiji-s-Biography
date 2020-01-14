
# Number Triangle Pattern
rows = 5
for i in range(1, rows + 1):
    print(" " * (rows - i) + " ".join(str(j) for j in range(1, i + 1)))

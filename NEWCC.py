# Input
# RED HAT LOGIN AND WRITING
X, Y = map(int, input().split())

# Compare runtimes and print the result
if X < Y:
    print("Old")
elif X > Y:
    print("New")
else:
    print("Same")


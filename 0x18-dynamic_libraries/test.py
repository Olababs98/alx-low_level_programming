import ctypes

# Load the shared library
mylib = ctypes.CDLL('./100-operations.so')

# Call the multiply function
result = mylib.multiply(2, 3)

print(result)  # Output: 6

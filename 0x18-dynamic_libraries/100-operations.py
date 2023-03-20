import ctypes

# Load the shared library
100-operations = ctypes.CDLL('./100-operations.so')

# Call the add_numbers function
result = 100-operations.add_numbers(2, 3)

print(result)  # Output: 5

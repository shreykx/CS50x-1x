import ctypes

# Load DLL
mylib = ctypes.CDLL('./mylib.dll')

# Call the C function
mylib.hello()

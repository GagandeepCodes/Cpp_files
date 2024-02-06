import numpy as np
import concurrent.futures
import time

# Define the 4x4 matrices A and B
A = np.array([[1, 2, 3, 4],
              [5, 6, 7, 8],
              [9, 10, 11, 12],
              [13, 14, 15, 16]])

B = np.array([[17, 18, 19, 20],
              [21, 22, 23, 24],
              [25, 26, 27, 28],
              [29, 30, 31, 32]])

# Function to perform matrix multiplication for a given row
def multiply_row(row):
    return np.dot(A[row, :], B)

# Define the number of threads in the thread pool
num_threads = 4  # Change this to the desired number of threads

# Create a thread pool executor
with concurrent.futures.ThreadPoolExecutor(max_workers=num_threads) as executor:
    start_time = time.time()

    # Calculate the product matrix C row by row using the thread pool
    results = list(executor.map(multiply_row, range(4)))

    end_time = time.time()

# Combine the row results to get the final product matrix C
C = np.vstack(results)

# Calculate the time taken for matrix multiplication
elapsed_time = end_time - start_time

# Print the time taken and the result matrix
print(f"Matrix multiplication completed in {elapsed_time:.2f} seconds")
print("Resulting matrix C:")
print(C)

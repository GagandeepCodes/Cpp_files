import threading
import time
import numpy as np

def multiply_row(row_A, matrix_B, result, row_idx):
    for j in range(len(matrix_B[0])):
        result[row_idx][j] = sum(row_A[k] * matrix_B[k][j] for k in range(len(matrix_B)))

def parallel_matrix_multiply(A, B, num_threads):
    if len(A[0]) != len(B):
        raise ValueError("Matrix dimensions do not match for multiplication")

    result = [[0 for _ in range(len(B[0]))] for _ in range(len(A))]
    threads = []

    for i in range(len(A)):
        thread = threading.Thread(target=multiply_row, args=(A[i], B, result, i))
        threads.append(thread)
        thread.start()

    for thread in threads:
        thread.join()

    return result

# Example usage
matrix_A = [[1,2,3,4,5], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]]
matrix_B = [[1,2,3,4,5], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]]
num_threads = 2  # You can adjust the number of threads
# result = parallel_matrix_multiply(matrix_A, matrix_B, num_threads)
# Add timing code
start_time = time.time()
# result = parallel_matrix_multiply(matrix_A, matrix_B, num_threads)
A = np.array([[1,2,3,4,5], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]])
B = np.array([[1,2,3,4,5], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]])
C = np.dot(A,B)
end_time = time.time()

# Calculate the elapsed time
elapsed_time = end_time - start_time

print("Result:")
for row in C:
    print(row)

print(f"Elapsed Time with threads: {elapsed_time:.10f} seconds")
# Elapsed Time: 0.0000219345 seconds // without threads
# Elapsed Time: 0.0004 seconds // with threads
# Elapsed Time: 0.0000071526 seconds // Numpy
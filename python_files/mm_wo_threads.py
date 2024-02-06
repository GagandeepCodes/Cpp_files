import time

def matrix_multiply(A, B):
    if len(A[0]) != len(B):
        raise ValueError("Matrix dimensions do not match for multiplication")

    result = [[0 for _ in range(len(B[0]))] for _ in range(len(A))]

    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j]

    return result

# Example usage
matrix_A = [[1,2,3,4,5], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]]
matrix_B = [[1,2,3,4,5], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]]
start_time = time.time()
result = matrix_multiply(matrix_A, matrix_B)
# for i in result:
#     print(i)
# result = parallel_matrix_multiply(matrix_A, matrix_B, num_threads)
end_time = time.time()

# Calculate the elapsed time
elapsed_time = end_time - start_time

print("Result:")
for row in result:
    print(row)

print(f"Elapsed Time: {elapsed_time:.10f} seconds")
# Elapsed Time: 0.0000219345 seconds

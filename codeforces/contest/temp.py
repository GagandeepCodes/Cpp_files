def f(A,B):
  n = len(B)
  mat = [row_A + [B[i]] for i, row_A in enumerate(A)]

  for i in range(n):
    div = mat[i][i]
    for j in range(i,n+1):
      mat[i][j]/=div
    for k in range(i+1,n):
      factor = mat[k][i]
      for j in range(i,n+1):
        mat[k][j] -= factor*mat[i][j]
  X = [0] * n
  for i in range(n-1,-1,-1):
    X[i] = mat[i][n]
    for j in range(i+1,n):
      X[i]-=mat[i][j]*X[j]
  return X

  A = [[1,0,10],[1,9,1],[6,7,0],[2,1,2]]
  b = [2,1,2]
  X = f(A,B)
  print("Solution : ",X)
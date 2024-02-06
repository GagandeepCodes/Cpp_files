import numpy as np 
import matplotlib.pyplot as plt 
# Input data 
xData = np.array([1.0, 2.0, 3.0, 4.0, 5.0]) 
yData = np.array([0.0, 1.0, 0.0, 1.0, 0.0]) 
def neville(xData,yData,x): 
m = len(xData) # number of data points 
y = yData.copy() 
for k in range(1,m): 
y[0:m-k] = ((x - xData[k:m])*y[0:m-k] + (xData[0:m-k] - x)*y[1:m-k+1])/ (xData[0:m-k] - xData[k:m]) 
# print(y[0]) 
return y[0] 
def LUdecomp3(c,d,e): 
n = len(d) 
for k in range(1,n): 
lam = c[k-1]/d[k-1] 
d[k] = d[k] - lam*e[k-1] 
c[k-1] = lam 
return c,d,e 
def LUsolve3(c,d,e,b): 
n = len(d) 
for k in range(1,n): 
b[k] = b[k] - c[k-1]*b[k-1] 
b[n-1] = b[n-1]/d[n-1] 
for k in range(n-2,-1,-1): 
b[k] = (b[k] - e[k]*b[k+1])/d[k]
return b 
def curvatures(xData,yData): 
n = len(xData) - 1 
c = np.zeros(n) 
d = np.ones(n+1) 
e = np.zeros(n) 
k = np.zeros(n+1) 
c[0:n-1] = xData[0:n-1] - xData[1:n] 
d[1:n] = 2.0*(xData[0:n-1] - xData[2:n+1]) 
e[1:n] = xData[1:n] - xData[2:n+1] 
k[1:n] =6.0*(yData[0:n-1] - yData[1:n]) /(xData[0:n-1] - xData[1:n]) -6.0*(yData[1:n] - yData[2:n+1]) /(xData[1:n] - xData[2:n+1]) LUdecomp3(c,d,e) 
LUsolve3(c,d,e,k) 
return k 
def evalSpline(xData,yData,k,x): 
def findSegment(xData, x): 
for i in range(len(xData) - 1): 
if xData[i] <= x <= xData[i + 1]: 
return i 
return -1 
i = findSegment(xData, x) 
if i == -1: 
return None 
h = xData[i] - xData[i + 1] 
y = ((x - xData[i + 1])**3 / h - (x - xData[i + 1]) * h) * k[i] / 6.0 - ((x - xData[i])**3 / h - (x - xData[i]) * h) * k[i + 1] / 6.0 + (yData[i] * (x - xData[i + 1]) - yData[i + 1] * (x - xData[i])) / h return y 
# Define the range for plotting 
x_range = np.linspace(min(xData), max(xData), 100) 
# Compute the interpolated values using Neville's method y_neville = [neville(xData, yData, xi) for xi in x_range]
k = curvatures(xData,yData) 
y_cubic_spline = [evalSpline(xData,yData,k,xi) for xi in x_range] plt.scatter(xData, yData, label="Data Points") 
# Plot the results of Neville's method and Cubic Spline method plt.plot(x_range, y_neville, label="Neville's Method") 
plt.plot(x_range, y_cubic_spline, label="Cubic Spline") 
plt.xlabel("x") 
plt.ylabel("y") 
plt.legend() 
plt.title("Neville's Method and Cubic Spline Interpolation") plt.grid(True) 
plt.show()
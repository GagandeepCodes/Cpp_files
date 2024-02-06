import cv2
import numpy as np

# Load the image
image = cv2.imread('sample_img.png')

# Convert the image to grayscale
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Apply Canny edge detection
edges = cv2.Canny(gray, threshold1=30, threshold2=100)

# Display the original image and the Canny edges
cv2.imshow('Original Image', image)
cv2.imshow('Canny Edges', edges)

# Wait for a key press and then close the windows
cv2.waitKey(0)
cv2.destroyAllWindows()

import cv2
import numpy as np

# Read the image (replace 'your_image.png' with the actual file path)
image = cv2.imread('sample_tilted.png')

# Convert to grayscale
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Apply Canny edge detector or other preprocessing techniques
edges = cv2.Canny(gray, 50, 150, apertureSize=3)

# Find contours
contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

print("Number of contours:", len(contours))
for contour in contours:
    area = cv2.contourArea(contour)
    print("Contour Area:", area)


# List to store images of detected cropped pictures
detected_cropped_pictures = []

# Set a threshold for the area of the contour to filter small objects
area_threshold = 500  # Adjust as needed

# Iterate through contours
for contour in contours:
    # Calculate the area of the contour
    area = cv2.contourArea(contour)

    # Check if the contour area is above the threshold
    if area > area_threshold:
        # Extract the bounding rectangle
        x, y, w, h = cv2.boundingRect(contour)

        # Draw a rectangle around the detected object
        cv2.rectangle(image, (x, y), (x + w, y + h), (0, 255, 0), 2)

        # Extract the region of interest (cropped picture)
        cropped_picture = image[y:y + h, x:x + w]

        # Save the detected cropped picture image
        detected_cropped_pictures.append(cropped_picture)

# Display the result with bounding rectangles
cv2.imshow('Detected Cropped Pictures', image)
cv2.waitKey(0)
cv2.destroyAllWindows()

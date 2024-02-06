import cv2
import numpy as np
image = cv2.imread('Table_Sample.png')
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
edges = cv2.Canny(gray, 50, 150, apertureSize=3)
contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

# List to store images of detected tables
detected_tables = []

# Iterate through contours
for contour in contours:
    # Approximate the contour to a polygon
    epsilon = 0.02 * cv2.arcLength(contour, True)
    approx = cv2.approxPolyDP(contour, epsilon, True)

    # Check if the polygon is a Rectangle
    if len(approx) == 4:
        # Fit a rotated bounding rectangle
        rect = cv2.minAreaRect(contour)
        box = cv2.boxPoints(rect)
        box = np.int0(box)

        # Extract rotation angle
        angle = rect[-1]

        # Validate and draw the rotated rectangle
        if angle < -45:
            angle += 90
        cv2.drawContours(image, [box], 0, (0, 255, 0), 2)

        # Extract the region of interest (table)
        x, y, w, h = cv2.boundingRect(contour)
        table_region = image[y:y + h, x:x + w]

        # Save the detected table image
        detected_tables.append(table_region)

# Save each detected table as a separate image
for i, table_img in enumerate(detected_tables):
    cv2.imwrite(f'detected_table_{i+1}.png', table_img)

# Display the result
cv2.imshow('Rotated Table Detection', image)
cv2.waitKey(0)
cv2.destroyAllWindows()

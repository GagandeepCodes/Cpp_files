import cv2
from PIL import Image
import pytesseract

# Load the image using OpenCV
image = cv2.imread('table2.png')

# Convert the image to grayscale for better text extraction
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Apply thresholding or other preprocessing methods to highlight the table and text
# For example, you can use adaptive thresholding:
thresh = cv2.adaptiveThreshold(gray, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 11, 2)

# Find contours to locate the table in the image
contours, _ = cv2.findContours(thresh, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

# Iterate through the detected contours
for contour in contours:
    x, y, w, h = cv2.boundingRect(contour)
    
    # Define a minimum size to filter out small contours that are not part of the table
    min_contour_area = 1000
    
    if w * h > min_contour_area:
        # Crop the table region
        table_region = image[y:y+h, x:x+w]

        # Use pytesseract to extract text from the cropped table region
        table_text = pytesseract.image_to_string(Image.fromarray(table_region))

        # Print the extracted text for this table region
        print(table_text)
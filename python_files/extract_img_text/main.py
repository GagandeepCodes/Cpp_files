# import cv2
# from PIL import Image
# import pytesseract

# # Load the PNG image using OpenCV
# image = cv2.imread('sample_of_3.png')
# text = pytesseract.image_to_string(image)

# # Convert the image to grayscale for text extraction
# gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# # Apply text detection using pytesseract
# text = pytesseract.image_to_string(Image.fromarray(gray))

# # Use OpenCV to detect edges and shapes in the image
# edges = cv2.Canny(gray, threshold1=30, threshold2=100)
# contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
# detected_text = []
# detected_images = []
# min_image_area = 10000

# for contour in contours:
#     x, y, w, h = cv2.boundingRect(contour)
#     if w * h > min_image_area:
#         image_region = image[y:y+h, x:x+w]
#         detected_images.append(image_region)
#     # else:
#     #     # Assume the region contains text
#     #     detected_text.append(text)

# # Print the detected text
# # for text_region in detected_text:
# #     print("Detected Text:")
# #     print(text_region)

# print("Detected Text : ")
# print(text)
# for i, image_region in enumerate(detected_images):
#     cv2.imwrite(f'detected_image_{i}.png', image_region)


import cv2
import pytesseract

# Load the PNG image using OpenCV
image = cv2.imread('sample_of_3.png')

# Convert the image to grayscale for text extraction
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Apply text detection using pytesseract
text = pytesseract.image_to_string(gray)

# Use OpenCV to detect edges and shapes in the image
edges = cv2.Canny(gray, threshold1=30, threshold2=100)
contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
detected_images = []
min_image_area = 10000

for contour in contours:
    x, y, w, h = cv2.boundingRect(contour)
    if w * h > min_image_area:
        image_region = image[y:y+h, x:x+w]
        detected_images.append(image_region)

# Print the detected text
print("Detected Text : ")
print(text)

for i, image_region in enumerate(detected_images):
    cv2.imwrite(f'detected_image_{i}.png', image_region)


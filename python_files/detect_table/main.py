import cv2
import numpy as np
import pytesseract
image = cv2.imread('table_sample2.png')

gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
_, binary = cv2.threshold(gray, 128, 255, cv2.THRESH_BINARY)
binary = cv2.bitwise_not(binary)
contours, _ = cv2.findContours(binary, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
for contour in contours:
    x, y, w, h = cv2.boundingRect(contour)
    table_roi = image[y:y+h, x:x+w]
    table_text = pytesseract.image_to_string(table_roi)
    if table_text.strip():
        print(table_text)

cv2.imshow('Table Detection', image)
cv2.waitKey(0)
cv2.destroyAllWindows()

'''
    findcontours : 3 values
    1st :  list of all values
    2nd : order of all the values
    3rd : bounding rectangles of the values
    
'''
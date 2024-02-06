import pytesseract
import cv2

img = cv2.imread("Purchase_Order.png")
d = pytesseract.image_to_data(img, output_type=pytesseract.Output.DICT)
n_boxes = len(d['level'])
for i in range(n_boxes):
    (x, y, w, h) = (d['left'][i], d['top'][i], d['width'][i], d['height'][i])    
    img = cv2.rectangle(img, (x, y), (x + w, y + h), (0, 0, 255), 3)

cv2.imshow('img', img)
cv2.waitKey(0)
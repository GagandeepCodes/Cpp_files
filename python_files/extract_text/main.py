from PIL import Image
import pytesseract

# Open the image using PIL (Python Imaging Library)
image = Image.open('GDSC_10.png')

# Use pytesseract to extract text from the image
text = pytesseract.image_to_string(image)

# Print the extracted text
print(text)


from PIL import ImageFont, ImageDraw, Image

def find_font_size(text, font, image, target_width_ratio):
    tested_font_size = 100
    tested_font = ImageFont.truetype(font, tested_font_size)
    observed_width = get_text_width(text, image, tested_font)
    estimated_font_size = tested_font_size / (observed_width / image.width) * target_width_ratio
    return round(estimated_font_size)

def get_text_width(text, image, font):
    draw = ImageDraw.Draw(image)
    text_bbox = draw.textbbox((0, 0), text, font=font)
    text_width = text_bbox[2] - text_bbox[0]
    return text_width

width_ratio = 0.1
font_family = "arial1.ttf"
text = "Hello World"

image = Image.open("gdsc.png")
editable_image = ImageDraw.Draw(image)
font_size = find_font_size(text, font_family, image, width_ratio)
font = ImageFont.truetype(font_family, font_size)
print(f"Font size found = {font_size} \nTarget ratio = {width_ratio} \nMeasured ratio = {get_text_width(text, image, font) / image.width}")

editable_image.text((10, 10), text, font=font)
image.save('output.png')
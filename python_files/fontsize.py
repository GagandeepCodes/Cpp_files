from PIL import Image, ImageFont, ImageDraw

def find_font_size(text, font_family, image, width_ratio):
    min_font_size = 1
    max_font_size = 1000

    while min_font_size < max_font_size - 1:
        tested_font_size = (min_font_size + max_font_size) // 2
        tested_font = ImageFont.truetype(font_family, tested_font_size)
        
        observed_width = get_text_width(text, image, tested_font)
        
        if observed_width > width_ratio * image.width:
            max_font_size = tested_font_size
        else:
            min_font_size = tested_font_size
            
    return min_font_size

def get_text_width(text, image, font):
    draw = ImageDraw.Draw(image)
    text_bbox = draw.textbbox((0, 0), text, font=font)
    text_width = text_bbox[2] - text_bbox[0]
    return text_width

# Usage
font_family = "LegioSabinaTitle-WyxaA.ttf"
image = Image.new("RGB", (800, 600), "white")
text = "Sample Text"
width_ratio = 0.5  # Adjust as needed

font_size = find_font_size(text, font_family, image, width_ratio)

print(f"Font Size: {font_size}")

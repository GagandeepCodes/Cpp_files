# import cv2

# img = cv2.imread("gdsc.png")

# if img is not None:
#     imgGray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
#     cv2.imshow("Gray Image", imgGray)
#     cv2.waitKey(0)
# else:
#     print("error")

import cv2
import os

current_dir = os.getcwd()
image_path = os.path.join(current_dir, "instagram_post.png")
print(image_path)
img = cv2.imread(image_path)

if img is not None:
    imgGray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    cv2.imshow("Gray Image", imgGray)
    cv2.waitKey(0)
else:
    print("error")

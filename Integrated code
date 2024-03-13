import cv2
import serial
import numpy as np


font = cv2.FONT_HERSHEY_COMPLEX
key = cv2. waitKey(0)
webcam = cv2.VideoCapture(0)
ser = serial.Serial('COM6', 9600)

while True:
    try:
        check, frame = webcam.read()
        # print(check) #prints true as long as the webcam is running
        # print(frame) #prints matrix values of each framecd
        cv2.imshow("Capturing", frame)
        key = cv2.waitKey(0)
        if key == ord('s'):
            cv2.imwrite(filename='saved_img_new.jpg', img=frame)
            webcam.release()
            img_new = cv2.imread('saved_img_new.jpg', cv2.IMREAD_GRAYSCALE)
            img_new = cv2.imshow("Captured Image", img_new)
            cv2.waitKey(1650)
            cv2.destroyAllWindows()
            break
        elif key == ord('q'):
            print("Turning off camera.")
            webcam.release()
            print("Camera off.")
            print("Program ended.")
            cv2.destroyAllWindows()
            break

    except (KeyboardInterrupt):
        print("Turning off camera.")
        webcam.release()
        print("Camera off.")
        print("Program ended.")
        cv2.destroyAllWindows()
        break


img_new = cv2.imread("saved_img_new.jpg", cv2.IMREAD_GRAYSCALE)

_, threshold = cv2.threshold(img_new, 100, 255, cv2.THRESH_BINARY)

contours, _ = cv2.findContours(
    threshold, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
height = img_new.shape[0]
width = img_new.shape[1]
area = height*width

nzCount = -cv2.countNonZero(threshold) + area
print(nzCount)

for cnt in contours:
    approx = cv2.approxPolyDP(cnt, 0.01*cv2.arcLength(cnt, True), True)
    cv2.drawContours(img_new, [approx], 0, (0), 5)
    x = approx.ravel()[0]
    y = approx.ravel()[1]
    if len(approx) == 3:
        cv2.putText(img_new, "Triangle", (x, y), font, 1, (0))
        #print("Triangle")
    elif len(approx) == 4:
        cv2.putText(img_new, "Rectangle", (x, y), font, 1, (0))
        #print("Rectangle")
    elif len(approx) == 5:
        cv2.putText(img_new, "Pentagon", (x, y), font, 1, (0))
        #print("Pentagon")
    elif 6 < len(approx) < 15:
        cv2.putText(img_new, "Ellipse", (x, y), font, 1, (0))
        #print("Ellipse")
    else:
        cv2.putText(img_new, "Circle", (x, y), font, 1, (0))
        #print("Circle")

cv2.imshow("shapes", img_new)
cv2.imshow("Threshold", threshold)


def dis():
    while True:
        distance = (ser.readline())
        # print("byte: ", distance)
        hel = distance.strip().decode()
        # print("string: ", hel)
        # print(type(hel))
        h = float(hel)
        hght = 67-h
        # print(type(d))
        area = ((h*h*nzCount*0.000123)/100)-10
        volweight = (h*h*nzCount*0.000123*hght)/6000
        
    
        print("actual area: ",area)
        print("volumetric weight:",volweight)
        print("dead weight:")
            #print("height: ",h)


t = dis()

cv2.waitKey(0)
cv2.destroyAllWindows()

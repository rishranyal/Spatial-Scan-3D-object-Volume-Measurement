# Import required libraries
import cv2
import numpy as np
import serial
import time

# Set up serial connection to Arduino
ser = serial.Serial('COM6', 9600)
time.sleep(2)

# Read distance from ultrasonic sensor
def read_distance():
    ser.write(b'g')
    
    
    

# Capture video from camera
cap = cv2.VideoCapture(1)

# Main loop
while True:
    # Read frame from camera
    ret, frame = cap.read()
    
    # Get distance from ultrasonic sensor
    distance = ser.readline().decode().strip()


    
    # Display distance on frame
    font = cv2.FONT_HERSHEY_SIMPLEX
    text = "Distance: " + str(distance) + " cm"
    cv2.putText(frame, text, (10,30), font, 1, (0,255,0), 2, cv2.LINE_AA)
    
    # Show frame
    cv2.imshow("Frame", frame)
# Release resources
cap.release()
cv2.destroyAllWindows()

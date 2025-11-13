# Computer Vision-based 3D Object Measurement System using one conventional camera

## Overview
SpatialScan is an advanced real-time 3D object volume and weight measurement system developed for the Inter IIT Tech-Meet 11.0 in India. The project seamlessly integrates Computer Vision techniques with a dynamic Arduino-based hardware set-up, providing accurate and efficient measurements.

### Key Features
- **Real-time Measurement:** Obtain instant and accurate volume and weight measurements of 3D objects.
  <img width="1383" height="630" alt="image" src="https://github.com/user-attachments/assets/dbf395dd-c2ca-4d05-bc10-abe980748c62" />

- **Computer Vision Integration:** Utilizes advanced OpenCV algorithms for object recognition, segmentation, and measurement.
- **Dynamic Hardware Set-up:** The system incorporates a dynamic Arduino-based hardware configuration to adapt to different object shapes and sizes.
- **Efficient Frame Rate:** Achieved an efficient average frame rate of 30 frames per second for webcam frame processing.
- **Load Cell and Ultrasonic Sensor Integration:** Utilizes a load cell with an HX711 module for weight measurement and an ultrasonic sensor for height measurement.
- **Custom Pixel-Height Relationship:** Implemented a custom Pixel-Height relationship derived from a Regression model to compute the volume of various regular-shaped objects accurately.

## Project Components
- **Computer Vision Module:** The core of the system responsible for object recognition and segmentation is OpenCV.
- **Arduino-based Hardware Set-up:** Dynamic hardware configuration including sensors (load cell, ultrasonic) and actuators for precise measurements.
- **User Interface:** An interactive interface for users to initiate measurements and view results in real-time.

## Getting Started
Follow the instructions in the repository to set up the SpatialScan 3D Object Measurement System. The provided code, schematics, and documentation will guide you through the process, allowing you to adapt the system to your specific use case.

## Usage
1. **Set up Arduino UNO Hardware:** Ensure the dynamic Arduino-based hardware configuration is properly set up including camera,Load cells and Ultrasonic sensor.
2. **Run Integrated code:** Initiate the Integrated code after making changes of port number and set up height.
3. **Start Measurement:** Use the user-friendly interface on Arduino IDE to start real-time measurements.
4. **View Results:** Instantly view accurate volume and weight measurements of the 3D object.

## Contributing
We welcome contributions to enhance the capabilities and features of the SpatialScan 3D Object Measurement System. Feel free to submit issues or pull requests to contribute to the project's development.



---



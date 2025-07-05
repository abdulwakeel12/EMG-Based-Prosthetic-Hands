# 🤖 EMG-Based Prosthetic Hands  
**7th Semester Project**  
**Duration:** August 2023 – January 2024  
**Institution:** Sukkur IBA University  
**Department:** Electrical Engineering  
**Course:** Introduction to Robotics  
**Instructor:** Dr. Afaque Manzoor Soomro

---

## 👥 Group Members

- Wakeel Ahmed (CMS ID: 033-19-0026)  
- Muhammad Qasim (CMS ID: 033-20-0009)  
- Habib Ullah (CMS ID: 033-20-0026)  

---

## 📄 Abstract

This project focuses on the design and development of **EMG-based prosthetic hands** that interpret muscle-generated electrical signals to control hand movements. The aim is to develop a natural-feeling, intelligent prosthetic solution that improves the quality of life for people with limb loss. Using an **Arduino Uno**, **EMG sensor**, and **servo motor**, the system responds to muscle contractions with precise motion control.

---

## 📚 Table of Contents
1. [Introduction](#introduction)
2. [Components Required](#components-required)
3. [Schematic](#schematic)
4. [Working Principle](#working-principle)
5. [Code](#code)
6. [Conclusion](#conclusion)
7. [References](#references)

---

## 🧠 Introduction

The future of prosthetics lies in responsiveness and intuitiveness. This project integrates **engineering, robotics, and biomedical principles** to build a prosthetic hand controlled by muscle signals. The EMG sensors detect real-time muscle activity and translate it into physical hand movement via servo motors—emulating the feel and function of a real hand.

---

## 🔧 Components Required

| Component                            | Quantity | Price (PKR) | Link |
|-------------------------------------|----------|-------------|------|
| Arduino Uno                         | 01       | Rs. 1,900   | [Buy Now](https://digilog.pk/products/arduino-cable?variant=44491093606678) |
| Muscle Sensor Module                | 01       | Rs. 3,300   | [Buy Now](https://digilog.pk/products/muscle-sensor-module-for-arduino-specially-designed-for-microcontrollers) |
| Camelion 9V Battery (Super Duty)    | 02       | Rs. 500     | [Buy Now](https://digilog.pk/products/camelion-6f22-9v-battery-super-heavy-duty) |
| Towerpro SG90 Servo Motor (180°)    | 01       | Rs. 280     | [Buy Now](https://digilog.pk/products/towerpro-sg90-sg-90-180-degree-degree-servo-motor-in-pakistan) |
| 9V Battery Snap Connector           | 02       | Rs. 50      | [Buy Now](https://digilog.pk/products/9-volt-battery-snap-connector) |
| Jumper Wires                        | As Req.  | Rs. 140     | [Buy Now](https://digilog.pk/products/10cm-pin-to-hole-jumper-wire-dupont-line-40-pin-male-to-female-arduino-jumper-wires-in-pakistan) |

---

## 🔌 Schematic

> **Note:** Upload schematic images to the `images/` folder and embed them like below:
>  
> `![Schematic](images/emg-schematic.png)`

![Schematic Example](images/emg-schematic.png)

---

## ⚙️ Working Principle

When you flex your muscles, tiny electrical signals are generated. These are detected using EMG sensors placed on the skin. The signals are fed to an **Arduino Uno**, which processes them and controls a **servo motor** that moves the prosthetic hand. The system mimics natural hand movement by interpreting muscle tension as commands.

---

## 💻 Code

```cpp
#include <Servo.h>

// Define the pin for the EMG module input
#define EMG_PIN A1

// Create a Servo object
Servo myservo;

// Define the threshold for muscle activity
#define ACTIVITY_THRESHOLD 121

void setup() {
  // Attach the servo to pin 3
  myservo.attach(3);

  // Set up serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the EMG module input
  int emgValue = analogRead(EMG_PIN);

  // If muscle activity is detected
  if (emgValue > ACTIVITY_THRESHOLD) {
    myservo.write(90); // Close hand
  } else {
    myservo.write(0);  // Open hand
  }

  // Debug EMG value
  Serial.print("EMG Value: ");
  Serial.println(emgValue);

  delay(500);
}
```

---

## ✅ Conclusion

EMG-based prosthetics represent a huge advancement in assistive technology. Our system allows intuitive control of a prosthetic hand using the user's own muscle signals. The implementation demonstrated successful detection and translation of muscle contractions into real-time movement—providing a path toward more adaptive and user-friendly prosthetic devices.

---

## 🔗 References

- https://www.tutorialspoint.com/arduino/arduino_dc_motor.htm  
- https://www.slideshare.net/mafazahmed/speed-control-of-dc-motor  
- https://www.electronicshub.org/speed-and-direction-control-of-dc-motor-using-arduino/  

---

## 📁 Folder Structure Suggestion

```
EMG-Prosthetic-Hand/
├── README.md
├── images/
│   ├── emg-schematic.png
│   ├── emg-demo.png
├── code/
│   └── emg_control.ino
└── documents/
    └── EMG_Report.pdf
```

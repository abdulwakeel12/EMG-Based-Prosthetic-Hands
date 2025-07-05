#include <Servo.h>

// Define the pin for the EMG module input
#define EMG_PIN A1

// Create a Servo object
Servo myservo;

// Define the threshold for muscle activity
#define ACTIVITY_THRESHOLD 121

void setup() {
  // Attach the servo to pin 9
  myservo.attach(3);

  // Set up the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the EMG module input
  int emgValue = analogRead(EMG_PIN);

  // Check if muscle activity is detected
  if (emgValue > ACTIVITY_THRESHOLD) {
    // Muscle activity detected, change direction
    myservo.write(90);
  } else {
    // No muscle activity, return to the original position (0 degrees)
    myservo.write(0);
  }

  // Print EMG value for debugging
  Serial.print("EMG Value: ");
  Serial.println(emgValue);

  // Add a small delay to avoid excessive readings
  delay(500);
}

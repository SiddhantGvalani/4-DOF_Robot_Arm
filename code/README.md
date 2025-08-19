# Wiring
This project controls a 4-degrees-of-freedom (DOF) robot arm using an Arduino and an analog joystick. Each servo controls a joint of the arm (Base, Shoulder, Elbow, Wrist), allowing for intuitive manual control.
We attach 4 servo pins to pin 3,5,6 & 9. These each represet one part of the robot arm. pin 3 controls the robot's base. pin 5 controls the robot's shoulder. Pin 6 controls robot's elbow, and finally pin 9 controls robot's wrist. Make sure to send each servo's power pin to a common 5V rail in the breadboard and each servo's
ground pin to a common 0V rail in the breadboard. The joystick's 'Rx' pin will be connected to 'A0' and 'Ry' pin will be connected to 'A1', which we will write an analog power input to controlling the joystick;s 




##  Hardware 

- Arduino Uno / Nano / Mega
- 4x Servo Motors (e.g., MG996R or SG90)
- 1x Analog Joystick Module (2-axis)
- External 5V power supply for servos
- Breadboard and jumper wires



## ⚙️ Servo 

 Joint      | Servo Pin 
 Base       | D3        
 Shoulder   | D5        
 Elbow      | D6        
 Wrist      | D9        

---

##  Joystick Connections

 Joystick Pin | Arduino Pin 

 VCC          | 5V          
 GND          | GND         
 VRx (X)      | A0          
 VRy (Y)      | A1          
 SW (button)  | D2 *(optional)* 




# INTRODUCTION
Welcome to this repository! Industrial Automation is taking over the manafacturing business & it is increasingly inportant to know the basics of automating devices. One such device is an autonomous robot arm. A robot arm is a machine capable of performing human tasks with greater efficiency as compared to humans ourselves. The usage of a robot arm is several. It is used in object detection & placement, transport, drill, etc.  I will be displaying 2 key aspects of robot arm design: mechanical sketch, and software control. 
# DESCRIPTION
The platform used to sketch our robot arm is SolidWorks. We will be using common techniques such as sketch, smart dimensions, extrude/revolce base, extrude cut, mirror/cut/trim/convert entities, etc. It is imperative to understand why certain actions are taken in the overall design of the arm. Essentially, ask yourself as to why we are performing this action. Why are we extruding mid-section? Why is the dimension of this part of the link so and so...
Additionally, to control the robot arm we will use the Arduino uno via joysticks. We will be writing code in C++ to interface with our said microcontroller.

# INSTALLATION
Insatalling SolidWorks may be a problem for non-students. However, for students, institutions do provide software such as the "SolidWorks Student Software edition". Find more information in the link below
````bash
https://www.solidworks.com/product/solidworks-3d-cad
````

Installing Arduino IDE or VS code is straightforward. 
Ardunio IDE Installation: 
````bash
https://www.arduino.cc/en/software/
````
OR 

VS Code Installation:
````bash
https://code.visualstudio.com/download
````
We could interface with our robot arm using any of the foresaid IDE Platform. Keep in mind VS Code would require additional setups such as installing Platfrom IO, but it might be worth the extra steps because of VS Code's extra function-call options

# Touchless-Water-Dispenser
**by Jayvind Baghel.**

Lots of water is wasted due to its improper use for washing hands. This adds up to a considerable amount in public place like hospitals, airports, railway stations, hostels, and restaurants.
Generally, people do not rub their hands with soap for the required 20 seconds before washing them with running water. Or they leave the tap running also while they are rubbing their hands with soap. This proposed system can help solve both these problems.
In addition, touching of the water tap by different people can spread the germs. So, this touchless water tap will take care of that as well.

# Bill of Materials
-> ESP 32

-> 12V, 1A adaptor

-> Ultrasonic sensor HC-SR04

-> Transistor BC547

-> Buzzer

-> Water pump 12V

-> 1k resistor

-> LED

# 🔁 Workflow Logic

1. **User Detection**.
   
Condition: Distance detected by the ultrasonic sensor is less than 0.6 meters.

Action: Sensor detects the presence of a user.


2. **Initial Water Rinse**.
   
Action: LED turns ON and pump motor turns ON to pour water for 3 seconds.

Purpose: Allows the user to wet their hands.


3. **Hand Rub Timer**.
   
Action: Pump turns OFF and LED will remain ON for 20 sec.

Purpose: Allows the user to rub hands with soap.


4. **Final Water Rinse**.
   
Action: Pump turns ON again.

Duration: Water flows for 5 seconds.


5. **Completion Alert**.
    
Action: LED turns OFF.

Action: Buzzer turns ON for 2 seconds to indicate completion of hand washing.


# Circuit Diagram

<img src="https://github.com/user-attachments/assets/f5d83c6e-bb3a-4c73-b93f-568c519afaa0" alt="Circuit Diagram" width="500"/>

# PCB Design

<img src="https://github.com/user-attachments/assets/00bfeba8-d56e-457e-9c45-e0723f7d9d04" alt="PCB Design 1" width="400"/>

<br>

<img src="https://github.com/user-attachments/assets/6aebbd05-3e04-4cbc-8fd0-1fa70e0733a0" alt="PCB Design 2" width="400"/>

# Final Product.

<img src="https://github.com/user-attachments/assets/510582bf-b70d-4e42-9451-1e492c6f65b0" alt="PCB Design 1" width="400"/>

<br>

<img src="https://github.com/user-attachments/assets/b64c0861-9e59-44e3-8240-f4db3412031c" alt="PCB Design 2" width="400"/>



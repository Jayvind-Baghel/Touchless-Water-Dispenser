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

-> Water pump

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




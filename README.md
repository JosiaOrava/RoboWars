# RoboWars
This repository showcases our teams contribution to a [RoboWars event](https://robosota.fi/en/). The project involves building a combat robot designed for to compete in a robot combat arena. The robot utilized a 3D-printed custom-designed case and wheels. As its weapon it used a vertically spinning shuriken to flip opponents and make them unstable from the impact.

This readme file showcases the key aspects but there is full 45 page project report available for reading in this repo titled "Project Report".

---
## Features

- **Weapon System:** A vertically spinning shurigane (shuriken-inspired weapon) for flipping and damaging opponents.
- **Mobility:** Custom 3D-printed wheels for enhanced maneuverability on various surfaces.
- **Control System:** Remote-controlled via an ESP32 microcontroller and PS4 DualShock Controller.
- **Power System:** 12.6V Battery to supply power for ESP32 and other components.
- **Power Switch:** 3D printed power switch controlled via two bolts and a screw.
---
## Components

- **Controller:** ESP32
- **Weapon Motor:** Turnigy Aerodrive SK3 - 2826-1130kv Brushless Outrunner Motor.
- **Motor Driver:** Turnigy Plush-32 30A Brushless Speed Controller w/BEC (Rev1.1.0).
- **Wheel Motor:** DC20 400rpm Brushless Motor.
- **Wheel Motor Controller:** L9110S Driver for 2 motors.
- **Voltage Regulator:** Regulator for 5V output.
- **LED:** Two LEDs to indicate power and bluetooth connection .
---
## Technical Highlights  
- **Weight:** 447g  
- **Dimensions:** 18 x 14 x 4 cm  
- **Weapon Tip Speed:** 27 m/s at 12,800 RPM (3.5 kg-force)  
- **Top Speed:** 1.2 m/s  
- **Materials:** TPU, PLA, PLA-CF, laser-cut steel  
- **Battery:** 12.6V Li-Po 500mAh  
- **Controller:** PS4 DualShock via Bluetooth  
---
## Frame Design
The majority of the robot, outside of electronics and the weapon, was
manufactured with 3D printing technology. The design process of the main frame was multifaceted, as there were many competition rules to be followed and design features to be implemented, some of which provided unique challenges in the process.

- **Material:** TPU (shore hardness 95A) for shock absorption.  
- **Design:**  
  - Angled walls (110° and 135°) to deflect attacks.  
  - Compact size for optimal weight distribution.  
- **Wheels:**  
  - 3D-printed using PLA-CF filament.  
  - Tires made from basic rubber bands for friction.  
<img src="https://github.com/JosiaOrava/RoboWars/blob/main/Images/Case3D.jpg" width="400px">

---
## Schematic
The schematics for the robot were done using KiCad, an open-source electronic design automation (EDA) software. In the schematic the ESP32 can be seen as the brains, there’s a voltage regulator that will drop 12V to 5V for the ESP32 and the L9110S motor driver. To the ESP32 there are also two LEDs connected to give a small user interface. The red LED was used to indicate power on and the blue LED was used to indicate bluetooth connection status.
<img src="https://github.com/JosiaOrava/RoboWars/blob/main/Images/Schematic.png" width="500px">

---
## Development Process  
- **Framework:** SCRUM methodology, managed via Miro boards.  
- **Tools Used:**  
	- FreeCAD for 3D modeling.  
	- KiCad for electronics design.  
	- Bambu Lab X1 Carbon and Ultimaker S5 for 3D printing.  
- **Code:**
	 - C++
	 - Arduino Framework
	 - PlatformIO
	 - VS Code

### Challenges:  
1. **Material Issues:** Damp TPU filament caused print failures.    
2. **Weapon Performance:** Adjusted gear ratio from 3:1 to 1:1 for increased power.  
3. **Bluetooth Connectivity Issues:** Initially faced problems with pairing the PS4 controller to the ESP32. Resolved by identifying the correct MAC address and reconfiguring the controller using SixaxisPairTool.
4. **Driver Failures:** During stress tests, seven L9110S motor drivers were damaged due to current spikes when the wheels were manually stalled. While not critical for competition, this highlighted the importance of testing components under extreme conditions.
5. **Voltage Regulator Heat Dissipation:** The voltage regulator overheated during prolonged testing. Adding a heatsink resolved the issue, but this required additional design adjustments to ensure airflow and mounting stability.
6. **Printer Limitations:** The Ultimaker printers initially lacked features such as pausing prints mid-layer, complicating designs that required embedded parts. Switching to the Bambu Lab X1 Carbon resolved problems because it supported pausing mid layers.

---

## Results  
- **Competition Performance:**  
  - Finished 2nd in the 450g weight class.  
  - Robot demonstrated reliability and resilience in all matches.  
- **Outreach:** By request from teacher we presented our project to embedded systems students at Metropolia University.  

<img src="https://github.com/JosiaOrava/RoboWars/blob/main/Images/AssembledRobot.jpg" width="500px">

---
## Credits
Our team that worked on this project:
* [Josia Orava](https://github.com/JosiaOrava)
* [Miro Tuovinen](https://github.com/1UPNuke)
* [Jori Anola-Pukkila](https://github.com/JoriAP)
* Eetu Vehnämäki

---
title: "KB75"
author: "Aahil"
description: "A 75% mechanical hotswap keyboard with cool stuff"
created_at: "2025-06-12"
---

# June 12th: The beginning of a new project......

Today I took the first steps of this project, I made the layout in KLE (Haven't tried Ergogen yet) and started with the schematic, most of the time was spent in making the layout so I didn't do much in the schematic, like I was only able to make a few sheets and add in a Pi Pico. I also decided the features and hardware to use.
I decided:
- Hardware:
    - Raspberry Pi Pico or Orpheus Pico.
    - MX-Style Hotswap Sockets.
    - SK6812MINI-E RGB LEDs and all the stuff for that like decoupling capacitors and logic level shifter.
    - EC11 Rotary Encoder with switch.
    - If GPIO isn't enough, I'll need to add in an MCP23017.
    - Maybe Type-C PD will be added so all the ICs and port for that.
    - The rest will be decided as we go on
- Features:
    - Hotswappable MX Switches
    - A rotary encoder
    - Per-key RGB
    - Customizable firmware
    - Compact board (hopefully)

 And that's all that I did today; KLE, Planning, A little bit of the schematic.

![keyboard-layout](https://github.com/user-attachments/assets/d0c03b79-9d64-4abb-84ac-26976ad79f7c)
![image](https://github.com/user-attachments/assets/481afb8f-1bab-49a4-8e27-c78268a186cd)
![image](https://github.com/user-attachments/assets/11656e81-6ee1-47f5-9c43-f3877cdc8a9e)

 **Total time spent: 3hrs**

# June 15th: The Matrix

This is my 2nd Day of working on this project. I made the matrix and decided to mae everything in one sheet with boxes and not seperate sheets, this is bc like I will need to go through different sheets just to see what nets go to what and it'll be a little more time taking. Anyways, I worked on the schematic and added all the keys, I still need to wire it all up but I decided to log rn so I dont forget, I will still work rn tho, btw I started at 1AM lol so yeah I haven't slept :(.
![image](https://github.com/user-attachments/assets/317da8b9-bf26-45cf-ba87-7c9fb4c9cfa3)
![image](https://github.com/user-attachments/assets/157af02d-fad2-474a-9e68-1906e1ec2fc9)

**Total time spent: 4.5ish hours**

# June 18th - Log 2: Next Step - The PCB

I was finally able to finish my entire schematic, I added the RGB LEDs, Capacitors, and I thought of adding Type-C but the Pi Pico dosen't have any USB pins proken out, not that I know of. So I finished the wiring of the matrix, capacitors, and LEDs. So now I'll start the PCB and update then. Oh and I also added a rotary encoder w/ switch.
![image](https://github.com/user-attachments/assets/d4771dae-4cad-40f2-95c3-29abeb6d920c)
![image](https://github.com/user-attachments/assets/389ec836-0589-4872-bc26-2cf47997ab9f)
![image](https://github.com/user-attachments/assets/1e47e696-ea9e-4dd3-85bd-d255894640d9)
![image](https://github.com/user-attachments/assets/babf7ec4-75be-433e-854f-468cfa62ccb3)

**Total time spent: 2.5hrs**

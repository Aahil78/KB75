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

# June 15th - Log 2: Next Step - The PCB

I was finally able to finish my entire schematic, I added the RGB LEDs, Capacitors, and I thought of adding Type-C but the Pi Pico dosen't have any USB pins proken out, not that I know of. So I finished the wiring of the matrix, capacitors, and LEDs. So now I'll start the PCB and update then. Oh and I also added a rotary encoder w/ switch.
![image](https://github.com/user-attachments/assets/d4771dae-4cad-40f2-95c3-29abeb6d920c)
![image](https://github.com/user-attachments/assets/389ec836-0589-4872-bc26-2cf47997ab9f)
![image](https://github.com/user-attachments/assets/1e47e696-ea9e-4dd3-85bd-d255894640d9)
![image](https://github.com/user-attachments/assets/babf7ec4-75be-433e-854f-468cfa62ccb3)

**Total time spent: 2.5hrs**

# June 15th - Log 3: The PCB Layout

Now that I was done with my schematic, I finally decided to make the PCB, so I used kbplacer - a KiCad plugin that converts ur KLE JSON or Ergogen layout and places all the diodes, switches, and LEDs automatically according to ur layout. Once I did that, I decided where the Pi Pico should go, there was no space in the middle or anywhere so I added it on the right side, but this forced me to make the board larger, leaving some extra space on the bottom. So I added in a 0.91" OLED vertically, this minimized the empty sapce. I still haven't routed the board yet but it took me a long time to come up with multiple itterations, deciding where the Pico should go, doing multiple attempts on the board outline, and other stuff. I also rearranged the schematic a bit, I also made use of the ADC pins for i2c of the OLED and for the rotary encoders switch pin 1.

![image](https://github.com/user-attachments/assets/3510f678-3912-42c6-b52a-2edccb3f8bc9)
![image](https://github.com/user-attachments/assets/650606c4-6272-4dba-aceb-9ccf0a23be55)
![image](https://github.com/user-attachments/assets/c1e5242a-cb5e-462e-9bc5-870e9f5aa79a)
![image](https://github.com/user-attachments/assets/d7729aa8-ae92-4e73-9bd9-f6f40d68b696)
![image](https://github.com/user-attachments/assets/8e03e949-35ec-4323-b7ac-d58c50bf8804)
![image](https://github.com/user-attachments/assets/94c73f89-794d-4c82-af51-2190c69ce6a7)

**Total time spent: 2-3hrs**

# June 15th - Log 4: The end of the PCB

Another update: I'm finally done with my PCB!!! I dont even know how long it took me to route everything, but its finally done!!!!!! Now I need to make the plate and bottom which I'm thinking of doing using another 2 PCBs, bc like moddeling will take too long. But, if I have time and all then I might just make a 3D Printed case for it too so if anyone wants to make it they won't need to pay for 3 PCBs, I don't have a printer which is another reason why im thinking of making a PCB and I can maybe do some silkscreen art on the PCB too. Next update will hopefully be for when I'm done with the other 2 PCBs. PS: I dont know how muc time I worked for but I think it's well over 5-5.5hrs in total from since the last updates so 5.25hrs is the avg ig.

![image](https://github.com/user-attachments/assets/7d586e3a-1665-4772-ba09-a3e87a266d44)
![image](https://github.com/user-attachments/assets/c59140be-ec14-4dbe-b93b-ea4e12e7fb48)
![image](https://github.com/user-attachments/assets/ad84f048-93e9-40df-bd6f-d3790d7a145c)

Also I didn't run DRC yet so I gotta do that too.

**Total time spent: 5.25hrs**

# June 16th: Completion of the plate!

Hi! I'm finally done with my PCB-Plate, I was thinking of making a 3D Printable one but I'm too burned out from making this pcb based plate. Anyways, I'm finally done with it but I still need to make cutouts for the stabs and need to add stabilizers in the PCB too, otherwise Im done. Took me a long time to make this.

![image](https://github.com/user-attachments/assets/02aa2c8f-b81e-4b47-a8e7-89b6662e8c99)

I'm gonna add some silkscreen later, like imma add in multi color silkscreen so for that I'll have to take this to EasyEDA once I'm done. The next update will be me done with the stabs and stuff hopefully.

**Total time spent: 4-5hrs**

# June 16th - Log 2: Square one
AGHHHHHHH. I had to make my entire PCB again, because I had too many errors in that one, and I had to addin stabs but the wires were underneath the holes bc I added them AFTER routing everything, so I deleted the PCB and used [this tool](https://keyboard-tools.xyz/) to make a new PCB, I then took my previous designed plate and placed it over the new PCB so I can make the same board outline again, I also added my OLED, Pi Pico, and encoder from the plate alignment. I also added in my LEDs one by one, now I need to add in the decoupling capacitors one by one aghhhhhh. This is gonna be hard........

![image](https://github.com/user-attachments/assets/2ce033c9-2cc6-443a-8da8-a641fbb2a5f3)
![image](https://github.com/user-attachments/assets/1fb77c14-bc63-4aa7-801a-250dd2291406)

**Total time spent: 4.5hrs**

# June 17th (Midnight of June 16th): Routing, again
New update! I was finally able to precisely align all the decoupling caps, now I need to route all of this sadly. I def deserve at least 8 points for all my work lol.

![image](https://github.com/user-attachments/assets/2159edcf-8726-45b6-8711-4ad5f35f6a3d)
![image](https://github.com/user-attachments/assets/ce26cdc0-cdd9-4a19-9dae-91bac727bbfc)
![image](https://github.com/user-attachments/assets/acc3500d-b110-406b-a630-c32dd51aaa80)

PS: I'm not using blue switches, and uhhh I'm running out of ways to start a log, so I think there are gonna be bad intros bc this is getting awkward.

# KB75 -- A open-source 75% Keyboard
This is a 75% mechanical keyboard that has per-key rgb, hotswappable keys, an OLED, and a rotary encoder. It's based on the Raspberry Pi Pico so it supports QMK and KMK.

## Features:
- Open Source
- Hotswappable
- Per-key SK6812MINI-E RGB Backlight
- A rotary encoder
- 75% Layout
- 0.91" Vertical OLED
- Easy to program (depends from person to person)
- QMK and KMK both are supported
- 3D Printed / CNC Case and plate

# Images:

## Schematic:
![image](https://github.com/user-attachments/assets/8f9fbddf-f599-4532-8b07-f3fd0e9e2acc)
![image](https://github.com/user-attachments/assets/65755e5e-9f7b-4e59-bf23-cc4ad8f4f99c)
![image](https://github.com/user-attachments/assets/df5bc66d-f5ec-4af1-a6f9-a0fd519aaadf)
![image](https://github.com/user-attachments/assets/1e7413e0-e535-4f00-9800-271be43dfc32)
![image](https://github.com/user-attachments/assets/1c719356-ee8c-4351-86d6-308cb0b51cb2)

## PCB:
![image](https://github.com/user-attachments/assets/a401b351-bad8-4a59-9d6a-2a9a9aa4cd20)
![image](https://github.com/user-attachments/assets/5a96142f-f472-45b7-b496-eda47d46aaef)

## Case and Plate:
![image](https://github.com/user-attachments/assets/f8777c07-0f29-49c0-ac6b-cd7815fed17c)
![image](https://github.com/user-attachments/assets/33a885f4-abac-4eb6-9522-66822cb0bcca)
![image](https://github.com/user-attachments/assets/b522e70e-c108-41a9-8228-edf0e8de5088)
![image](https://github.com/user-attachments/assets/864dc1ef-8118-4bdb-a05b-5af3d1dc271e)
![image](https://github.com/user-attachments/assets/dd6a3568-84c5-4c85-8ecf-e7fdb112501c)
![image](https://github.com/user-attachments/assets/979b6574-06b5-48f7-a6d6-333a6c9c4e90)

# Bill Of Materials

Here's my BOM:

| Item                   | Quantity | MOQ            | LCSC #                                                                                                                    |Price |
|------------------------|----------|----------------|---------------------------------------------------------------------------------------------------------------------------|------|
| 0805 Capacitors 100nf  | 82       | 100            | [C49678](https://lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_YAGEO-CC0805KRX7R9BB104_C49678.html) |$0.44 |
| 0805 Resistors 10K ohm | 2        | 100            | [C84376](https://lcsc.com/product-detail/Chip-Resistor-Surface-Mount_YAGEO-RC0805FR-0710KL_C84376.html)                   |$0.19 |
| 0805 Diodes            | 83       | Multiples of 5 | [C143773](https://lcsc.com/product-detail/Schottky-Diodes_Kyocera-AVX-SD0805S020S1R0_C143773.html)                        |$16.39|
| Kailh MX Sockets       | 82       | Multiples of 10, 30, 70, or 110 | [CPG151101S11](https://www.aliexpress.com/item/1005007476614771.html)                                    |$9.15 |
| Raspberry Pi Pico      | 1        | 1              | [C7203003](https://lcsc.com/product-detail/Raspberry-Pi_Raspberry-Pi-PICO-W_C7203003.html)                                |$10.54|
| SK6812MINI-E           | 82       | Multiples of 5 | [C5149201](https://www.lcsc.com/product-detail/RGB-LEDs-Built-in-IC_OPSCO-Optoelectronics-SK6812MINI-E_C5149201.html)     |$5.02 |
| MX Style Stabilizers   | 1 Kit    | -              | [Gateron Stabs](https://www.aliexpress.com/item/1005005389406072.html)                                                    |$11.21|
| 0.91" OLED White       | 1        | 5              | [0.91" OLED](https://www.aliexpress.com/item/1005007038294972.html)                                                       |$8.86 |
| Si2318CDS-T1-GE3       | 1        | 5              | [C14498](https://lcsc.com/product-detail/MOSFETs_Vishay-Intertech-Si2318CDS-T1-GE3_C14498.html)                           |$0.56 |
| MX Style Keycaps       | 1 Set    | -              | [Keycaps](https://www.aliexpress.com/item/1005007730150989.html)                                                          |$11.85|
| MX Switches            | 82       | Multiples of 10| [Switches](https://www.aliexpress.com/item/1005006528632637.html)                                                         |$41.99|
| EC11 Encoder           | 1        | 5              | [Encoder](https://www.aliexpress.com/item/32976046900.html)                                                               |$3.06 |
| EC11 Encoder Knob      | 1        | 1              | [Knob](https://www.aliexpress.com/item/1005007576522714.html)                                                             |$1.18 |

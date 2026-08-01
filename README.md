
## Bill of Materials
### Required
 - 1x Seeed Studio XIAO RP2040
 - 6x MX hotswap sockets
 - 7x 1N4148 small signal diodes
 - 1x EC11 rotary encoder with push button
 - 4x M3x12 screws (support M3x8 - M3x14) 
 
## Assembly Instructions 

1. 3D print the top case, bottom case, and knob. For the best results, print the top case and bottom case with 100% infill.
2. Solder the hotswap sockets and diodes, taking note of the polarity. 
3. Solder the microcontroller, using pin headers to align the pads but not soldering the pin headers.
4. Solder the rotary encoder on the opposite side of the board as the rest of the components.
5. Press and hold the BOOT button on the microcontroller. Then, while still holding the button, plug in the microcontroller to a computer. The microcontroller should appear as a virtual USB storage device.
6. Upload the .uf2 firmware file to the microcontroller. The virtual USB storage device should disconnect once flashed.
7. Unplug and replug the USB cable.
8. Test that the keys work by inserting switches into the hotswap sockets and depressing them. The keys should type the numbers 1-6 by default.
9. Test that the rotary encoder works by rotating it and pressing it. The encoder should control volume when rotated and type the number 7 when pressed.
10. Unplug the USB cable.
11. Insert the completed PCB into the bottom case, slotting in the USB conector first.
12. Place the top case on top of the bottom case.
13. Secure the bottom case to the top case with the M3x12 screws or the printable pegs/rivets.
14. Insert the switches into the top case. The switches should securely slot into the hotswap sockets.
15. Attach the keycaps and knob to the key switches and rotary encoder.
16. Connect the USB cable.
17. Open the [VIA app](https://www.usevia.app/).
18. Go to the "Settings" tab and enable "Show Design tab".
19. Go to the "Design" tab and upload the .json file.
20. Go to the "Configure" tab. After authorizing the device, the macropad is now configurable!


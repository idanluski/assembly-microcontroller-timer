# assembly-microcontroller-timer

The buttons 0PB 1,PB are required to be connected to the controller legs 2.0P 2.1,P respectively.
 The LCD screen is required to be connected to port 1P for 0D7-D and the three control lines to legs 2.5P 2.6,P 2.7,P
Note: LCD reference material is under the 3LAB tab.
 The software architecture of the system is required to be based on FSM Simple (as described in the preparatory report, Section 4, E)
which performs one of four operations given an external interrupt request of pressing a button out of the three buttons.
 The system code is required to be divided into layers
Writing the driver functions of the LCD should be located in HAL while a function for writing a string
based on them should be located in the API layer
**(0=idle=state):**
The controller is in/returns to sleep mode (Sleep Mode).
By pressing the 0PB button (1=state):
It is required to make a two-minute warning clock on the LCD screen in a fraction of a second (the initial state when entering the state).
(is 00:00), pay attention to the accuracy level of the stock and the position of the stock on the LCD screen as shown in the following figure:\
<img width="234" alt="image" src="https://github.com/idanluski/assembly-microcontroller-timer/assets/129895992/e698ea09-8e24-48ee-a143-433de011633e">

**By pressing the 1PB button (2=state):**
It is required to implement a cycle counter based on the input capture feature to measure the running time of a given code section in advance.
For this purpose it is necessary to define two functions in the APP layer named toc, tic which use functions from the
HAL that generate an internal event (using the GND, VCC options of the timer channel in capture input mode) and return
The capture value of a timer core for that event (the capture mode is set to be both on - increase and decrease).
The tic function samples a relative initial value of the clock and the toc function samples a relative final value of the clock and includes
20 including the printout of the measured running time to the LCD screen in [cycle] units of the clock 2
.\

<img width="195" alt="image" src="https://github.com/idanluski/assembly-microcontroller-timer/assets/129895992/cb540537-3e84-4f8a-afbe-d77fd896b308">\

<img width="519" alt="image" src="https://github.com/idanluski/GPIO-interrupts-LPM/assets/129895992/1b132d6d-f88c-439b-993c-a0ced69bec36">\
<img width="539" alt="image" src="https://github.com/idanluski/GPIO-interrupts-LPM/assets/129895992/a243cda3-0d6b-461a-b812-1f9227f58619">/
<img width="246" alt="image" src="https://github.com/idanluski/GPIO-interrupts-LPM/assets/129895992/6742e3ec-477b-434f-ac71-619cd5162213">\
<img width="169" alt="image" src="https://github.com/idanluski/GPIO-interrupts-LPM/assets/129895992/a82d617c-094f-4957-a7b6-ebe693a1b530">



https://github.com/idanluski/assembly-microcontroller-timer/assets/129895992/374d7c52-9c72-4185-987f-8d933a3c5e08






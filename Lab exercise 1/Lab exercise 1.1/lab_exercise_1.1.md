<img width="735" height="485" alt="image" src="https://github.com/user-attachments/assets/6271586d-abcc-4bdb-a23a-fe651ca884bb" />
This experiment involves designing and programming a circuit that controls eleven LEDs connected to an Arduino Uno. Each LED is wired in series with a resistor to prevent excessive current flow, and the Arduino’s digital pins are used to send signals that determine the lighting sequence. The program is structured to illuminate the LEDs one after another from left to right, and then reverse the sequence from right to left, creating a continuous back‑and‑forth motion.

The circuit demonstrates several important principles in electronics and programming:

Digital Output Control: Each LED represents a digital output device. By assigning pins and writing code to toggle them HIGH or LOW, the Arduino acts as a precise controller of external components.

Iteration and Loops: The left‑to‑right and right‑to‑left motion is achieved using loops in the program. These loops iterate through the LED pins, turning them on and off in sequence. This reinforces the importance of iteration in programming for automation and repetitive tasks.

Timing and Synchronization: Delays are introduced between each LED activation to create a visible pattern. This highlights how timing functions in microcontrollers can be used to synchronize hardware actions with human perception.

Practical Applications: While this experiment is simple, the concept is widely used in real‑world systems. Sequential lighting patterns are applied in traffic signals, running lights on vehicles, decorative displays, and even in robotics for signaling or animation.

From a learning perspective, this exercise strengthens the understanding of how software interacts with hardware. It shows how a microcontroller can manage multiple outputs simultaneously and how logical structures in code translate into physical behavior in a circuit. The project also encourages problem‑solving, as students must carefully plan pin assignments, wiring, and code structure to achieve the desired effect.

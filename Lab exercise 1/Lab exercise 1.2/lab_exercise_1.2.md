<img width="631" height="415" alt="image" src="https://github.com/user-attachments/assets/05ffd144-1200-49cd-891e-f60787155045" />

### Circuit Operation and Animation Breakdown

This circuit is designed around an Arduino Uno controlling 11 independent LEDs, mapped to digital pins 2 through 12, with their cathodes tied to a common ground rail. Because 11 is an odd number, the setup is perfectly symmetrical: Pin 7 acts as the absolute center point, leaving five LEDs on the left side (Pins 2 to 6) and five on the right side (Pins 8 to 12).

The programmatic logic utilizes simultaneous index manipulation inside structured `for` loops to execute a continuous visual "bounce" or "wave" effect, which operates in two primary phases:

* **The Inward Convergence Phase:** The animation initializes at the outermost boundaries of the array. The code calculates opposing pin positions concurrently—starting at the left extreme (Pin 2) and the right extreme (Pin 12). With each iteration of the loop, the active pin indexes increment inward (e.g., Pins 3 and 11, then 4 and 10) until both tracking variables converge on the shared central node at Pin 7. A brief delay holds the center illumination to signify the meeting point.
* **The Outward Divergence Phase:** Instead of resetting instantly, a secondary loop reverses the index propagation. The active signals step backward from the center boundary (Pins 6 and 8) and expand outward until they reach the perimeter nodes (Pins 2 and 12).

Once the outward execution finishes, the Arduino's primary execution cycle resets, creating a seamless, looping kinetic wave where the light continuously compresses into the center and bounces back out to the edges indefinitely.

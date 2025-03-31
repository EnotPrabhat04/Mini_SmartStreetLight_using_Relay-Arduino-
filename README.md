**Mini Project: Light-Dependent Relay Control using Arduino.**

This project involves controlling a relay using a Light Dependent Resistor (LDR) and an Arduino. The system detects the ambient light intensity using the LDR sensor. Based on the detected light level, the relay will be switched ON or OFF. This setup is ideal for applications such as automatic street lights, garden lights, or any other system requiring automated light control.

**Components Used:-**
Arduino Board,LDR Sensor,Relay Module,Connecting Wires,Power Supply,LED or Electrical Load (optional)

**Working Principle:-**

**1.LDR Sensing:** The LDR sensor detects the light intensity and provides a digital HIGH or LOW output.

**2.Relay Control:** When the light level falls below a threshold (LDR gives a HIGH output), the relay is turned ON to control a connected load.

**3.Serial Monitoring:** The Arduino reads the LDR's output using digitalRead() and displays the sensor value on the Serial Monitor.

**Explanation of the Code**

**Initialization:** The LDR is connected to pin 8, and the relay to pin 13. The serial monitor is initialized at 9600 baud rate.

**Reading LDR:** Using digitalRead(), the system reads the state of the LDR.

**Relay Activation:** If the LDR detects darkness (x == 1), the relay is turned ON by setting pin 13 HIGH. If the light level increases (x == 0), the relay is turned OFF.

**Delay:** A delay of 300 ms is added to prevent rapid relay switching.

**Conclusion**
This mini project is a simple yet effective demonstration of how LDR sensors and relays can be used for automated lighting control.
It is ideal for beginners in electronics and Arduino programming. With further adjustments, the system can be integrated with multiple sensors for enhanced functionality, such as smart home automation or energy-saving systems.


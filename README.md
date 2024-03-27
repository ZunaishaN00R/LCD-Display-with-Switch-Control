# LCD Display with Switch Control

## Description

This code utilizes an LCD display and two switches to control the displayed content. Here's a breakdown of the code:

- Library Inclusion: The LiquidCrystal library is included for interfacing with the LCD display.

- LCD Initialization: The LCD display is initialized with the specified pins in the `setup()` function.

- Switch Configuration: Two switches (`swth` and `swth1`) are defined with their respective pin numbers.

- Main Loop: In the `loop()` function:
  - The states of the switches are read using `digitalRead()` and stored in variables `data` and `data1`.
  - If `data` is HIGH, "Zunaisha Noor" is displayed on the first row of the LCD.
  - If `data` is LOW, "Switch OFF" is displayed on the first row of the LCD.
  - If `data1` is HIGH, "Biet-f21-049" is displayed on the second row of the LCD.
  - If `data1` is LOW, "Switch OFF" is displayed on the second row of the LCD.
  - A delay of 100 milliseconds is applied after each LCD update.

This code allows for switching between different text displays on the LCD based on the states of the connected switches.


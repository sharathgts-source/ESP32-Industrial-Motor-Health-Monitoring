# Working Principle

## ESP32-Based Industrial Motor Health Monitoring System

### 1. Temperature Monitoring
The DS18B20 digital temperature sensor measures temperature and sends the readings to the ESP32 through its digital data connection.

### 2. Vibration Monitoring
The MPU6050 accelerometer and gyroscope measures acceleration along the X, Y and Z axes. The ESP32 reads these values through the I²C communication protocol.

### 3. UART Communication
UART is used for serial communication between the ESP32 and the computer. It helps monitor received and transmitted data through the serial monitor.

### 4. I²C Communication
The I²C protocol is used to communicate with the OLED display and MPU6050 sensor using SDA and SCL lines.

### 5. SPI Communication
The SPI protocol is used to communicate with the ST7735 TFT display using SCLK, MOSI, CS and DC signals.

### 6. Display and Monitoring
The ESP32 processes the available sensor readings and displays information on the OLED and TFT displays.

### Development Status
The UART, OLED I²C and TFT SPI tests have been completed. Basic temperature and vibration sensor readings have also been tested in the simulation environment.

# ESP32 Project – Pin Connections

## 1. OLED Display (I²C – SSD1306)

| OLED Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

## 2. TFT Display (SPI – ST7735)

| TFT Pin | ESP32 Pin |
|---|---|
| VCC | As required by module |
| GND | GND |
| SCLK | GPIO 18 |
| MOSI | GPIO 23 |
| CS | GPIO 5 |
| DC | GPIO 2 |
| RST | GPIO 4 |
| LED | 3.3V (as tested) |

## 3. Shared I²C Connections

The OLED display and MPU6050 sensor use the same I²C bus.

| MPU6050 Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

## 4. DS18B20 Temperature Sensor

| DS18B20 Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 27 |

A 4.7 kΩ pull-up resistor between DATA and 3.3V is generally required for a bare DS18B20 sensor if the module does not already include one.

## 5. DS18B20 Temperature Sensor

| DS18B20 Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 27 |

## 6. Vibration Monitoring – MPU6050

| MPU6050 Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

The MPU6050 measures acceleration along three axes (X, Y and Z), which is used for vibration monitoring.

**Note:** These are the project connections used or planned in our BenchTwin setup. Sensor integration and buzzer operation should be documented as tested only after their individual verification.

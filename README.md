# ESP32-Based Industrial Motor Health Monitoring System

## 📌 Project Overview
An ESP32-based industrial motor health monitoring system designed to monitor motor temperature and vibration. The system uses three communication protocols — UART, I²C, and SPI — to communicate with sensors and display modules.

Sensor readings are displayed on OLED and TFT displays. A buzzer provides an alert when abnormal operating conditions are detected.

## 🎯 Objectives
- Monitor motor temperature using DS18B20.
- Measure acceleration and vibration using MPU6050.
- Understand and implement UART, I²C, and SPI protocols.
- Display real-time sensor readings.
- Generate alerts during abnormal conditions.

## 🔧 Components Used
- ESP32 DevKit
- DS18B20 Temperature Sensor
- MPU6050 Accelerometer and Gyroscope
- OLED Display (SSD1306)
- TFT Display (ST7735)
- Buzzer

## 🔌 Communication Protocols

| Protocol | Application |
|---|---|
| UART | Serial communication and data monitoring |
| I²C | OLED and MPU6050 communication |
| SPI | TFT display communication |

## 💻 Software and Tools
- Arduino IDE
- BenchTwin Simulation Platform
- Embedded C/C++

## ⚙️ Working Principle
1. The DS18B20 measures temperature.
2. The MPU6050 measures acceleration for vibration monitoring.
3. The ESP32 processes the sensor readings.
4. Sensor information is displayed on the OLED and TFT displays.
5. The buzzer alerts the user when configured abnormal-condition thresholds are exceeded.

## 🧪 Project Development Status
- [x] UART communication testing
- [x] OLED display using I²C
- [x] TFT display using SPI
- [x] Basic sensor integration
- [ ] Improved vibration calculation
- [ ] Buzzer alert testing
- [ ] Final integrated testing

## 🏭 Applications
- Industrial motor condition monitoring
- Predictive maintenance prototypes
- Embedded systems learning
- Multi-protocol communication demonstrations

## 🚀 Future Improvements
- CAN communication integration
- Wireless monitoring dashboard
- Data logging and analysis
- Advanced fault detection

## 👨‍💻 Project Note
This project is being developed and tested using the BenchTwin simulation environment. Simulation results are not equivalent to real-world motor validation.

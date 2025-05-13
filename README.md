# Wireless Measurement of Soil Humidity Using LoRa Network

This project involves the design and implementation of a wireless soil humidity monitoring system using LoRa technology. It is targeted at improving agricultural productivity by providing real-time soil moisture data over long distances with minimal power consumption.

## 📘 Project Overview

The system consists of multiple soil humidity sensors connected to microcontrollers (ATmega328P) and SX1278 LoRa modules. The data is transmitted wirelessly to a central receiver that aggregates and displays the information.

## 🎯 Objectives

- Develop a low-cost, low-power, long-range soil moisture monitoring system.
- Enable accurate measurement and reporting of soil humidity.
- Make use of readily available and accessible components.
- Promote sustainable agriculture by optimizing water usage.

## 🧠 Key Technologies

- **LoRa (SX1278)**: For long-range, low-power data transmission.
- **Capacitive Soil Moisture Sensors**: For reliable moisture detection.
- **ATmega328P Microcontroller**: Main processing unit.
- **OLED Display**: For local visual output.
- **Arduino IDE**: For programming the microcontroller.

## 📐 Methodology

The system consists of:
- **Two transmitting nodes** that collect soil humidity data.
- **One receiving node** that aggregates data and displays it via OLED.
- **Communication** between nodes is established using SX1278 LoRa modules.

---

## 📊 Soil Humidity Calibration
Sensor Range: 745 (wet) to 915 (dry) bits  
Humidity (%) = (100 / -170) × (SensorValue - 915)

## 📦 Components Used

| Component                   | Quantity | Notes                        |
|----------------------------|----------|------------------------------|
| SX1278 LoRa Module         | 4        | 433 MHz                      |
| ATmega328P Microcontroller | 1        | Arduino-compatible           |
| Capacitive Moisture Sensor | 1        | Analog output                |
| OLED Display (0.96")       | 1        | I2C                          |
| Antenna (SMA)              | 3        | External RP-SMA connector    |
| Crystal Oscillator (16 MHz)| 1        | With 22pF capacitors         |
| Power Supply Module        | 1        | 3.3V/5V dual output          |
| 9V Battery                 | 1        | Power source                 |
| Assorted Resistors         | -        | 10Ω, 1kΩ, 82kΩ               |
| Capacitors                 | -        | 22pF, 100nF                  |
| Breadboard & Wires         | -        | For prototyping              |

## 📈 Results

The device successfully monitored soil humidity and transmitted the data wirelessly over long distances. The system showed reliability and low power consumption, making it suitable for rural and large-scale agricultural applications.

## 💡 Significance

- Enables farmers to respond quickly to moisture and nutrient changes.
- Improves water conservation and crop yield.
- Wireless, easy to install and maintain.

## ✅ Conclusion

This project demonstrates how LoRa communication and simple microcontrollers can be used effectively in precision agriculture. It offers a scalable, affordable, and easy-to-maintain solution for farmers.

## 📚 References

- LoRa Alliance (https://lora-alliance.org)
- Semtech LoRa Documentation
- Arduino Platform (https://arduino.cc)

## 👥 Project Contributor

- Odejobi Olurinre Ayinde Odelami – EEG/2017/076  

## 📅 Date

June, 2021  
Obafemi Awolowo University, Ile-Ife, Nigeria

# 📡 PIC16F877A ADC Data Acquisition using USART

<p align="center">

![Language](https://img.shields.io/badge/Language-Embedded%20C-blue)
![Microcontroller](https://img.shields.io/badge/Microcontroller-PIC16F877A-orange)
![USART](https://img.shields.io/badge/Protocol-USART-green)
![ADC](https://img.shields.io/badge/Peripheral-ADC-red)
![LCD](https://img.shields.io/badge/Display-16x2%20LCD-blueviolet)
![Firmware](https://img.shields.io/badge/Firmware-Register%20Level-success)

</p>

---

## 📖 Project Overview

This project demonstrates **real-time ADC data acquisition and USART communication** using the **PIC16F877A** microcontroller.

The internal ADC converts analog input into digital values, which are transmitted using the **USART peripheral**. The received ADC value is displayed on a **16×2 LCD**, enabling real-time monitoring of analog signals.

---

## ✨ Features

* Internal ADC Interfacing
* USART Communication
* Real-Time ADC Transmission
* 16×2 LCD Display
* Register-Level Embedded C Programming
* PIC16F877A Firmware Development

---

## 🛠 Hardware Requirements

* PIC16F877A
* Potentiometer / Analog Sensor
* 16×2 LCD
* 20 MHz Crystal Oscillator
* Power Supply (5V)

---

## ⚙️ System Architecture

```text
Analog Input
      │
      ▼
 PIC16F877A ADC
      │
      ▼
USART Transmission
      │
      ▼
USART Reception
      │
      ▼
16×2 LCD Display
```

---

## 📌 ADC Registers Used

| Register | Function                                        |
| -------- | ----------------------------------------------- |
| ADCON0   | ADC Enable, Channel Selection, Start Conversion |
| ADCON1   | Analog Pin Configuration                        |
| ADRESH   | ADC Result High Byte                            |
| ADRESL   | ADC Result Low Byte                             |

---

## 📌 USART Registers Used

| Register | Function                  |
| -------- | ------------------------- |
| TXSTA    | Transmitter Configuration |
| RCSTA    | Receiver Configuration    |
| SPBRG    | Baud Rate Generator       |
| TXREG    | Transmit Register         |
| RCREG    | Receive Register          |

---

## 📂 Project Structure

```text
PIC16F877A-ADC-USART
│
├── README.md
├── main.c
├── adc.c
├── adc.h
├── usart.c
└── usart.h
```

---

## 🚀 Working Principle

1. Read analog input using the internal ADC.
2. Convert the analog signal into digital data.
3. Transmit the ADC value using USART.
4. Receive the transmitted data.
5. Display the received ADC value on the 16×2 LCD.
6. Repeat continuously for real-time monitoring.

---

## 🎯 Skills Demonstrated

* Embedded C
* PIC16F877A Programming
* ADC Interfacing
* USART Communication
* LCD Interfacing
* Register-Level Programming
* Firmware Development

---

## 📈 Expected Output

* ADC continuously reads the analog input.
* USART transmits the converted digital value.
* The received ADC value is displayed on the LCD.
* LCD updates in real time as the analog input changes.

---

## 👨‍💻 Author

**Sarthak Pampattiwar**

**Technical Skills:** Embedded C • PIC16F877A • 8051 • ARM7 LPC2148 • UART • USART • SPI • I²C • ADC • PWM • GPIO • Timers • Interrupts

---

⭐ **If you found this project useful, consider giving it a Star!**

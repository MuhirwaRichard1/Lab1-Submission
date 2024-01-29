# README for PIC Microcontroller Programs

## Overview

This repository contains two C programs designed for PIC microcontrollers. Both programs are examples of basic digital IO operations - one for blinking multiple LEDs and another for toggling an LED using a pushbutton.
## File Descriptions

   ### Blinking LED.c
        **Author:** Richard Muhirwa
        **ID:**muhirwar
        **Description:** This program sequentially turns on five LEDs connected to different ports (RA3, RB0, RC1, RD2, RE0), keeps them **on** for 500 ms, and then turns them **off** for 500 ms in a continuous loop.

   ### PushButton.c
        **Author:** Richard Muhirwa
        **ID:**muhirwar
        **Description:** This program toggles the state of an LED connected to RD0 based on the input from a pushbutton connected to RB0. The LED's state changes on each button press.

## Hardware Requirements

    A PIC microcontroller PIC16F877A.
    LEDs. 
    A pushbutton for the second program.
    A 4 MHz crystal oscillator or an equivalent clock source.

## Software Requirements

    XC8 Compiler. 
    MPLAB X IDE. 
    Proeus Simulator.

## Setup and Configuration

    Connect the LEDs to the specified GPIO pins on the microcontroller.
    Connect the pushbutton to RB0 for the second program.
    Ensure that the microcontroller is programmed with the correct configuration bits as specified in each program.

## Compiling and Running

    Open the program in MPLAB X IDE.
    Compile the program using the XC8 Compiler.
    Upload the compiled program to your PIC microcontroller/ Proteus Simulator.
    
## Note
    The __delay_ms function is used for creating delays. It relies on **_XTAL_FREQ** to generate accurate timing, so ensure this is set correctly for your system's clock frequency.

    

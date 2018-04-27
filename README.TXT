---------------------------- SOUND PROJECT ------------------------------

This project is meant to collect some level at a proximity of a Raspberry
Pi device. The RPi is equipped with a USB sound card (C-Media Electronics,
Inc.Audio Adapter) and a microphone. The sound is recorded at 16000 Hz
sample rate and every second will produce 80 pieces of RMS value as a bar-
diagram...



TABLE OF CONTENTS

-----------------


1. Configuration
2. Installation
3. Operation
4. Manifest (list of files and short description of their roles)
5. License
6. Contact information



CONFIGURATION

-------------


 * raspi-config
        - Enable features such as the camera and change your specific set
          -tings such as keyboard layout.

 * Audio Config
        - Switch your audio output etween HDMI and the 3.5mm jack.

 * External Storage Config
        - Mounting and setting up external storage on a Raspberry Pi.

 * Localisation
		- Setting up your Pi to work in your local language/timzone.



INSTALLATION

------------


 * To get started with Raspberry Pi, you need an operating system. NOOBS
   (New Out Of Box Software) is an easy operating system install manager
   for the Raspberry Pi.

 * For NOOBS setup, a preinstalled micro SD card (for Pi Zero, A+, B+, Pi
   2 and Pi 3), USB sound card, audio device, an Ethernet and micro USB c
   -able are required. Visit https://www.raspberrypi.org/help/noobs-setup
   /2/ or file RPi3boot on Vamk moodle for more information.

 * In this project, PuTTy is used as graphical user interface.

 
 
OPERATION

---------


 * A file named "Rpi3boot" is posted on VAMK moodle by Dr. Gao Chao as
   instruction.

 * Setting up

        - Step 1: Apply sound card to USB port and audio device to jack
                  port.

        - Step 2: Power up your Raspberry Pi and, once it has booted, op
                  -en PuTTy terminal app. Run command line "lsusb" to che
                  -ck if your USB sound card is mounted.

        - Step 3: Use "sudo nano /etc/asound.conf" command and add conten
                  -t as in Rpi3boot to the file. Go to home d
                  -irectory, use "nano .asoundrc" command and put the sam
				  -e content to the file.

        - Step 4: Run "alsamixer" to display various information regardin
                  -g the current audio device.

 * Testing audio

        - Follow step 1 to 8 in "Fix the Bug of arecord" part in Rpi3boot
          file.

 * Adjusting volumn

        - To start it, simply enter the name in the command line "alsamix
          -er".

        - Using the arrow keys on your keyboard, select the volumn column
          and adjust the volumn higher or lower.

		  
MANIFEST

--------


 * makefile
		- Created to tell make how to compile, link a program or
          run miscellaneous commands when explicitly asked. Use
          command "make" to process the file.

 * main.c
		- This file contains the main program/function of the project.
        - The command line arguments are processed here and other functio
          -n are called to perform subtasks.

 * comm.c
		- Transfer data from/to a server.

 * comm.h
		- Header file for processing comm file.

 * README.md
		- Used to generate HTML's github summary

 * sound.c
		- Displays the bar, information and set colors.

 * sound.h
		- Header file for processing sound (WAV) file.

 * screen.c
		- Includes screen manipulation functions to adjust what you want
          to see on display screen.

 * screen.h
	    - Header file for processing screen file.



LICENSE

-------


 * Raspberry Pi Documentation by the Raspberry Pi Foundation is licensed
   under a Creative Commons Attribution 4.0 International Licence. Based
   on a work at https://github.com/raspberrypi/documentation.

 * Copyright (C) <2018>  <Nguyen My Huyen>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.
	
 * Instruction by Dr. Gao Chao
   University of Applied Sciences
   School of Technology



CONTACT INFORMATION
-------------------


   Nguyen My Huyen
   Student ID: 1700701
   Group I - IT - 1N3
   Vaasa University of Applied Sciences
   Wolffintie 30, 65200 VAASA
   Phone: +358 41 489 1573
   Email: e1700701@edu.vamk.fi

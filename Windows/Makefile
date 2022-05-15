default: build

build:
	avr-gcc -mmcu=atmega328p main.c -o main

burn: build
	avr-objcopy -O ihex -R .eeprom main main.hex

	avrdude -F -V -c arduino -p m328p -P /dev/tty.usbmodem1422301 -b 115200 -U flash:w:main.hex
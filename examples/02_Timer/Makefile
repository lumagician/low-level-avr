default: build

build:
	avr-gcc -mmcu=atmega328p main.c timer.c -o main

burn: build
	avr-objcopy -O ihex -R .eeprom main main.hex

	avrdude -F -V -c arduino -p m328p -P /dev/ttyUSB0 -b 115200 -U flash:w:main.hex
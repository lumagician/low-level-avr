# Low Level AVR Toolchains
Einfache toolchains für low level AVR programmierung. Da ich persönlich nicht besonders begeistert bin von der Arduino IDE und Atmel Studio habe ich meine eigene Lösung gesucht. Ich empfehle eine Einwicklungsumgebung in einer Virtuellen Maschine mit z.B. Debian um eine universelle Bedienung zu erreichen, da eine Debian VM auf MacOS wie auch Windows mit den gleichen Dependencies läuft. Wer nciht eine VM einrichten will kann auch direkt auf windows arbeiten. Als Editor benutze ich VS Code.

## MacOS/Linux

1. Dependencies installieren (MacOS)

    Brew installieren (packetmanager)
    ```bash
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
    ```
    avrdude installieren
     ```bash
    brew install avrdude
    ```

    avr-gcc installieren
     ```bash
    brew install avr-gcc
    ```

    avr-binutils installieren
     ```bash
    brew install avr-binutils
    ```
2. Makefile
3. Build & Flash


## Windows

Unter Windows funktionieren Tools wie make, avr-gcc oder cmake nicht standardmässig, darum muss man auf WinAVR zurückgreifen. WinAVR ist eine Windows Portierung der Tools, die für die AVR Entwicklung nötig sind. Da diese Tools ursprünglich nicht für Windows ausgelegt wurden ist die installation auch etwas komplizierter, wer das nicht will kann wie oben schon erwähnt eine Linux VM aufsetzen und.

1. Dependencies installieren
2. Build
3. Flash
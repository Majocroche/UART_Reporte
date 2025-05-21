# UART Reporte

#### Integrantes: 
* Pablo Armando MacBeath Milián
* Ximena Ortíz Gómez
* María José Croche Álvarez

---
En esta práctica se observó como funciona la comunicación UART, para ello utilizamos la Raspberry y un Arduino UNO, que se conectaron por medio de USB. El propósito de esta actividad es comprender como se puede establecer una comunicación entre ambos dispositivos de manera eficiente mediante el protocolo UART.

Para ello se configurará uno de los puertos USB de la Raspberry Pi como receptor UART. Esto se realiza primero subiendo el código Arduino de transmisión de datos al Arduino y posteriormente conectando por medio de USB el Arduino y la Raspberry. El Arduino actuará como emisor y enviará 7 mensajes diferentes a través del puerto UART. Cada 5 segundos la Raspberry Pi recibirá los datos y los imprimirá en la terminal.

---
#### Herramientas empleadas:
* Raspberry Pi
* Arduino Uno
* Arduino IDE
* Lenguaje de programación Python
---

#### Elementos que garantizan los resultados esperados
* Código funcional de Arduino que transmita los mensajes esperados en el adecuado formato.
* Código en la Raspberry que lea los datos recibidos y los muestre en terminal.

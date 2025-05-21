//se hace PB0 salida y PB1 entrada
//PB0 tiene un LED y PB1 un push button

void setup() 
{
  // put your setup code here, to run once:
  DDRD = DDRD | 0b10000000; //PD7 salida (pin 7 Arduino UNO)
  DDRB = DDRB & 0b11111101; //PB1 entrada (pin 9 Arduino UNO)

}

void loop() 
{
  //se lee PB1 y se actúa en PD7
  if(PINB & 0b00000010) 
  {
    //PB1 es uno, haz PD7 uno
    PORTD = PORTD | 0b10000000;
  }
  else
  {
    //PB1 es cero, PD7 se hace cero
    PORTD = PORTD & 0b01111111;  
  }

}

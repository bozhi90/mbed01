#include "mbed.h"

DigitalOut myled(LED1);
DigitalOut myled3(LED3);

int main()
{
   myled = 0;
   myled3 = 0;
   while (1)
   {
      for (int i = 0; i < 6; i++) {
          myled = !myled;
          ThisThread::sleep_for(500ms);
      }
      for (int i = 0; i < 4; i++) {
          myled3 = !myled3;
          ThisThread::sleep_for(500ms);
      }
   }
}
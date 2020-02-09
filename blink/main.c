// gcc -o blink main.c -l wiringPi
#include <wiringPi.h>
#define GPIO14 14

int main(void) {
  if(wiringPiSetupGpio() == -1) {
    return -1;
  }
  pinMode(GPIO14, OUTPUT);
  for(;;) {
    digitalWrite(GPIO14, 1);
    delay(500);
    digitalWrite(GPIO14, 0);
    delay(500);
  }
}

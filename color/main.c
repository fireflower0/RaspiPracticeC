// gcc -o blink main.c -l wiringPi
#include <wiringPi.h>

#define RED_GPIO17 17
#define BLUE_GPIO22 22
#define GREEN_GPIO27 27

int main(void) {
  if(wiringPiSetupGpio() == -1) {
    return -1;
  }
  pinMode(RED_GPIO17, OUTPUT);
  pinMode(BLUE_GPIO22, OUTPUT);
  pinMode(GREEN_GPIO27, OUTPUT);
  for(;;) {
    digitalWrite(RED_GPIO17, 0);
    digitalWrite(BLUE_GPIO22, 0);
    digitalWrite(GREEN_GPIO27, 0);
    delay(500);
    digitalWrite(RED_GPIO17, 1);
    digitalWrite(BLUE_GPIO22, 0);
    digitalWrite(GREEN_GPIO27, 0);
    delay(500);
    digitalWrite(RED_GPIO17, 0);
    digitalWrite(BLUE_GPIO22, 1);
    digitalWrite(GREEN_GPIO27, 0);
    delay(500);
    digitalWrite(RED_GPIO17, 0);
    digitalWrite(BLUE_GPIO22, 0);
    digitalWrite(GREEN_GPIO27, 1);
    delay(500);
    digitalWrite(RED_GPIO17, 1);
    digitalWrite(BLUE_GPIO22, 1);
    digitalWrite(GREEN_GPIO27, 1);
    delay(500);
  }
}

// gcc -o button main.c -l wiringPi
#include <stdio.h>
#include <wiringPi.h>

#define GPIO25 25

int main(void) {
  if(wiringPiSetupGpio() == -1) {
    return -1;
  }

  pinMode(GPIO25, INPUT);
  pullUpDnControl(GPIO25, PUD_UP);

  while(1) {
    if(digitalRead(GPIO25) == 0) {
      printf("Switch ON\n");
    } else {
      printf("Switch OFF\n");
    }
    delay(500);
  }
}

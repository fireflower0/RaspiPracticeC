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
    if(digitalRead(GPIO25) == 0){
      printf("Button Pressed\n");
    }
    delay(300);
  }
}

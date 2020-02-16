// gcc -o button main.c -l wiringPi
#include <wiringPi.h>

#define GPIO14 14
#define GPIO25 25

int main(void) {
  if(wiringPiSetupGpio() == -1) {
    return -1;
  }
  pinMode(GPIO14, OUTPUT);
  pinMode(GPIO25, INPUT);
  pullUpDnControl(GPIO25, PUD_UP);

  while(1) {
    if(digitalRead(GPIO25) == 0){
      digitalWrite(GPIO14, 1);
    } else {
      digitalWrite(GPIO14, 0);
    }
    delay(500);
  }
}

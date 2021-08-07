//www.elegoo.com
//2016.12.08

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 150;

int ranNum;
 
void setup() {
  randomSeed(analogRead(0));
}
 
void loop() {

  ranNum = random(6);

  if(ranNum == 0)
  {
    tone(8, melody[0], duration);
  }
  else if(ranNum == 1)
  {
    tone(8, melody[1], duration);
  }
  else if(ranNum == 2)
  {
    tone(8, melody[3], duration);
  }
  else if(ranNum == 3)
  {
    tone(8, melody[4], duration);
  }
  else if(ranNum == 4)
  {
    tone(8, melody[5], duration);
  }
  else
  {
    tone(8, melody[7], duration);
  }

  ranNum = random(4);

  if(ranNum == 0)
  {
    delay(150);
  }
  else if(ranNum == 1)
  {
    delay(600);
  }
  else
  {
    delay(300);
  }
}

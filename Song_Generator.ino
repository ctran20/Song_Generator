//www.elegoo.com
//2016.12.08

#include "pitches.h"

// notes in the melody:
int major[] = {
  NOTE_G4, NOTE_C5, NOTE_D5, NOTE_F5,
  NOTE_G5, NOTE_A5, NOTE_C6, NOTE_D6};

int minor[] = {
  NOTE_GS4, NOTE_C5, NOTE_D5, NOTE_F5,
  NOTE_G5, NOTE_GS5, NOTE_C6, NOTE_D6};

int duration;
int randNote;
int randDur;
int songFlow = 0;
 
void setup() {
  randomSeed(analogRead(0));
}
 
void loop() {
  randNote = random(8);
  randDur = random(8);
  songFlow += randDur;

  if(songFlow > 350){
    songFlow = 0;
  }
  
  if(randDur < 2 || songFlow > 150){
    duration = 180;
  }
  else if(randDur == 2){
    duration = 720;
  }
  else{
    duration = 360;
  }
  
  tone(8, minor[randNote], duration == 180 ? 180 : 360);
  delay(duration);
}

void minorSwitch(){
  
}

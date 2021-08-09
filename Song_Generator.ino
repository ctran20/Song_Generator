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

int durMaj = 160;
int durMin = 180;
int duration;
int randNote;
int randDur;
int songFlow = 0;

char key = 'a';
 
void setup() {
  randomSeed(analogRead(0));
}
 
void loop() {
  randNote = random(8);
  randDur = random(8);
  songFlow += randDur;
  
  duration = (key == 'a' ? durMaj : durMin) 
  * (songFlow < 200 ? random(3)+1 : 1);
  
  if(songFlow > 350){
    songFlow = 0;
  }

  if(key == 'a'){
    tone(8, major[randNote], duration > durMaj ?  durMin*2 : durMaj);
  }else{
    tone(8, minor[randNote], duration > durMin ?  durMin*2 : durMin);
  }
  delay(duration);
}

void minorSwitch(){
  if(key == 'a'){
    key == 'i';
  }else{
    key == 'a';
  }
}

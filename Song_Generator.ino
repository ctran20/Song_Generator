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
int bars;

int verseNote[8];
int verse[8];
int verseEnd;

char key = 'a';
 
void setup() {
  randomSeed(analogRead(0));
}
 
void loop() {
  randNote = random(8);
  randDur = random(8);
  bars = 0;
  verseEnd = 0;
  songFlow += randDur;

  for(int i = 0; i < 8; i++){
    duration = (key == 'a' ? durMaj : durMin)  * 2;
    verseEnd = i;
    verseNote[i] = random(8);
    
    if(bars + duration == 1,280){
      verse[i] = duration;
      break;
    }else if(bars + duration > 1,280){
      verse[i] = 1,280 - bars;
      break;
    }
    
    verse[i] = duration;
    
  }

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < verseEnd+1; j++){
      tone(8, major[verseNote[j]], verse[j]/2 > durMaj ?  durMin*2 : durMaj);
      delay(verse[j]);
    }
  }

}

void minorSwitch(){
  if(key == 'a'){
    key == 'i';
  }else{
    key == 'a';
  }
}

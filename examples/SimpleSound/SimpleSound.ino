#include "SimpleSound.h"

/*macro definition of Speaker pin*/
#define SPEAKER 3
//#define SPEAKER 5

SimpleSound ss(SPEAKER, SIMPLE_SOUND_TYPE_PULL_UP);

int BassTab[]={SIMPLE_SOUND_C,SIMPLE_SOUND_D,SIMPLE_SOUND_E,SIMPLE_SOUND_F,SIMPLE_SOUND_G,SIMPLE_SOUND_A,SIMPLE_SOUND_B};
int durations[]={100,100,100,100,100,100,100};

int intervals[]={500,500,500,500,500,500,500};

void playSound(){
  for (int i=0; i< 7; i++) {
    ss.play(BassTab[i], durations[i]);
    delay(intervals[i]);
  }
}

void setup()
{
  ss.begin();
  playSound();
}

void loop()
{
}

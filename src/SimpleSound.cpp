
#include "SimpleSound.h"

SimpleSound::SimpleSound(uint8_t pin, SimpleSoundType type):
  _pin(pin),
  _type(type)
{}

void SimpleSound::begin(void) {
  pinMode(_pin, OUTPUT);
  off();
}

void SimpleSound::on(void) {
  if (_type == SIMPLE_SOUND_TYPE_PULL_UP) {
    digitalWrite(_pin, HIGH);
  } else {
    digitalWrite(_pin, LOW);
  }
}

void SimpleSound::off(void) {
  if (_type == SIMPLE_SOUND_TYPE_PULL_UP) {
    digitalWrite(_pin, LOW);
  } else {
    digitalWrite(_pin, HIGH);
  }
}

void SimpleSound::play(int bass, int duration) {
  for(int i=0;i<duration;i++) {
    on();
    delayMicroseconds(bass);
    off();
    delayMicroseconds(bass);
  }
}

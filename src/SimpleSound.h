#ifndef __SIMPLE_SOUND_HAL_H__

#include <stdint.h>
#include <Arduino.h>

enum SimpleSoundType {
  SIMPLE_SOUND_TYPE_PULL_UP = 1,
  SIMPLE_SOUND_TYPE_PULL_DOWN
};

enum SimpleSoundFunctionReturnValue {
  FUNCTION_UNSUPPORTED = 1,
  FUNCTION_SUCCESS,
  FUNCTION_FAIL
};

class SimpleSound {
public:
  SimpleSound(uint8_t pin, SimpleSoundType type = SIMPLE_SOUND_TYPE_PULL_UP);
  void begin(void);
  void on(void);
  void off(void);
  void play(int bass, int duration);
protected:
  uint8_t _pin;
  SimpleSoundType _type;
};

#define SIMPLE_SOUND_C 1911
#define SIMPLE_SOUND_D 1702
#define SIMPLE_SOUND_E 1516
#define SIMPLE_SOUND_F 1431
#define SIMPLE_SOUND_G 1275
#define SIMPLE_SOUND_A 1136
#define SIMPLE_SOUND_B 1012

#endif /* __SIMPLE_SOUND_HAL_H__ */
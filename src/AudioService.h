#ifndef AudioService_h
#define AudioService_h

#include <Arduino.h>

#include "AudioAdapter.h"
#include "Service.h"
/*!
 * @brief 音频服务器
 */
class AudioService : public Service {
public:
  AudioService(AudioAdapter* audioAdapter);
  bool setVolume(int8_t volume);
  int8_t getVolume();

protected:
  AudioAdapter* audioAdapter;
  int8_t volume;
};

#include "AudioService.inl"
#endif // AudioService_h

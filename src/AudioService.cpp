#include "AudioService.h"

AudioService::AudioService(AudioAdapter* audioAdapter) : Service(AUDIO_SERVICE){
  this->audioAdapter = audioAdapter;
}

/*!
 *    @brief  设置音量
 *    @param  volume 要设置的音量。音量最大为 100， 最小为 0 （静音）
 *    @return 成功设置音量则返回 true
 */
bool AudioService::setVolume(int8_t volume) {
  if(volume > 100){
    volume = 100;
  } else if(volume < 0) {
    volume = 0;
  }
  this->volume = volume;
  this->audioAdapter->setVolume(volume);
  return true;
}

/*!
 *    @brief  获得当前音量
 *    @return 当前音量
 */
int8_t AudioService::getVolume() {
  return this->volume;
}

AudioAdapter* AudioService::getAudioAdpater(){
  return this->audioAdapter;
}
#ifndef AudioService_h
#define AudioService_h

#include <Arduino.h>

//Depends on https://github.com/ticosx/TicosHwBase
#include "AudioAdapter.h"
#include "Service.h"
/*!
 * @brief 音频服务器
 */
class AudioService : public Service {
public:
  AudioService(AudioAdapter* audioAdapter);

/*!
 *    @brief  设置音量
 *    @param  volume 要设置的音量。音量最大为 100， 最小为 0 （静音）
 *    @return 成功设置音量则返回 true
 */
  virtual bool setVolume(int8_t volume);
/*!
 *    @brief  获得当前音量
 *    @return 当前音量
 */
  virtual int8_t getVolume();
/*!
 *    @brief  获得音频适配器
 *    @return 初始化成功则返回 音频适配器指针
 */
  virtual AudioAdapter* getAudioAdpater();

protected:
  AudioAdapter* audioAdapter;
  int8_t volume;
};

// #include "AudioService.inl"
#endif // AudioService_h

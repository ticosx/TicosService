#ifndef DisplayService_h
#define DisplayService_h

#include <Arduino.h>
#include "Service.h"
#include "XRender.h"
/*!
 * @brief 显示服务器
 */

class DisplayService : public Service {
public:
  DisplayService();
  virtual ~DisplayService(){};
/*!
 *    @brief  设置亮度
 *    @param  light 要设置的亮度值。最亮为 100， 最小为 0
 *    @return 设置成功则返回 true
 */
  virtual bool setLight(uint8_t light) {return true;}
};

#endif // DisplayService_h

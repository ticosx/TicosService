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
  DisplayService(XRenderer* renderer);
  XRenderer* getRenderer();

protected:
  XRenderer* renderer;
};

// #include "DisplayService.inl"
#endif // DisplayService_h

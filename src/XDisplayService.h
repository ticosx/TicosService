#ifndef XDisplayService_h
#define XDisplayService_h

#include <Arduino.h>
#include "Service.h"
#include "DisplayService.h"
#include "XRender.h"
/*!
 * @brief 基于 ArduinoGraphics 的显示服务器
 */

class XDisplayService : public DisplayService {
public:
  XDisplayService(XRenderer* renderer);
  virtual ~XDisplayService() override {};
  XRenderer* getRenderer();

protected:
  XRenderer* renderer;
};

#endif // XDisplayService_h

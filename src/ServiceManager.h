#ifndef EventManager_h
#define EventManager_h
#include <Arduino.h>

#include "Service.h"
/*!
 * @brief 负责收发事件的总线类
 */

class ServiceManager {

public:
  static void registerService(Service* service);
  static void unregisterService(Service* service);
  static Service* getService(ServiceType type);
  static ServiceManager* getInstance();
  void init();

private:
  static ServiceManager* serviceManager;
  Service* services[SERVICE_COUNT];
  bool initialized = false;
  
  ServiceManager();
};

// #include "ServiceManager.inl"
#endif // ServiceManager_h

#include <stdexcept>
#include "Log.h"

using namespace std;

ServiceManager* ServiceManager::serviceManager = NULL;
  
ServiceManager::ServiceManager(){
  for(int i = 0; i < SERVICE_COUNT; i++){
    services[i] = NULL;
  }
}
/**
 * @brief 注册服务
 *
 * @param service: 待注册的服务
 */
void ServiceManager::registerService(Service* service) {
  ServiceType type = service->getType();
  debug("ServiceManager", "Register service %p type %d", service, type);
  if(type<0 || type>=SERVICE_COUNT){
    error("ServiceManager", "Invalid service type %d", type);
    throw std::invalid_argument("Invalid service type");
  }
  getInstance()->services[type] = service;
}

/**
 * @brief 取消注册服务
 *
 * @param service: 待取消注册的服务
 */
void ServiceManager::unregisterService(Service* service) {
  ServiceType type = service->getType();
  if(type<0 || type>=SERVICE_COUNT){
    error("ServiceManager", "Invalid service type %d", type);
    throw std::invalid_argument("Invalid service type");
  }
  getInstance()->services[type] = NULL;
}

/**
 * @brief 获取服务管理器实例
 *
 * @return 指向服务管理器的指针
 */
ServiceManager* ServiceManager::getInstance() {
  if(serviceManager == NULL){
    serviceManager = new ServiceManager();
  }
  return serviceManager;
}

/**
 * @brief 初始化服务管理器
 */
void ServiceManager::init() {
  initialized = true;
}

/**
 * @brief 获取服务
 *
 * @param type: 待获得服务的类型
 * @return 指向服务的指针
 */
Service* ServiceManager::getService(ServiceType type) {

  if(type<0 || type>=SERVICE_COUNT){
    error("ServiceManager", "Invalid service type %d", type);
    throw std::invalid_argument("Invalid service type");
  }
  Service* svc = getInstance()->services[type];
  debug("ServiceManager", "Get service: %d %p", (int)type, svc);
  return svc;
}
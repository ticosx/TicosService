/*!
 *    @brief  创建一个服务
 *    @param  type 服务类型
 */
Service::Service(ServiceType type) {
  this->type = type;
}

/*!
 *    @brief  获得事件类型
 *    @return 事件类型
 */
ServiceType Service::getType() {
  return type;
}
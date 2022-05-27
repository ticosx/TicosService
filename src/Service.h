#ifndef Service_h
#define Service_h

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    DISPLAY_SERVICE = 0,
    AUDIO_SERVICE,
    KEY_SERVICE,
    SERVICE_COUNT
} ServiceType;

#ifdef __cplusplus
}
#endif
/*!
 * @brief 服务类
 */
class Service {
public:
  Service(ServiceType type);
  virtual ~Service(){};
  ServiceType getType();

protected:

  ServiceType type;
};

// #include "Service.inl"
#endif // Service_h

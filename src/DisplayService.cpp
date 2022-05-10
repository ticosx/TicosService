#include "DisplayService.h"

DisplayService::DisplayService(XRenderer* renderer) : Service(DISPLAY_SERVICE){
  this->renderer = renderer;
}

XRenderer* DisplayService::getRenderer(){
  return renderer;
}
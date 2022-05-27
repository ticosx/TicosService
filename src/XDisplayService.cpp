#include "XDisplayService.h"

XDisplayService::XDisplayService(XRenderer* renderer){
  this->renderer = renderer;
}

XRenderer* XDisplayService::getRenderer(){
  return renderer;
}
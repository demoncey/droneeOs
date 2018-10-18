#include "kernel.h"

Kernel& Kernel::getInstance(){
  static Kernel instance;
  return instance;
}


void Kernel::initialize(){
  if(Serial){
    Serial.begin(9600);
  }
}

Kernel::Kernel(){

}


void Kernel::sayHello(){
  if(Serial){
    Serial.println(String((uint16_t)&getInstance(),HEX));
  }
}



void Kernel::sayHelloOnInterrupt(){
  if(Serial){
    Serial.println("hello timer interrupt\n");
  }
}

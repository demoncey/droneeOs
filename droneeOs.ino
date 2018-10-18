#include "kernel.h"


void setup() {
  // put your setup code here, to run once:
  Kernel::initialize();
  Kernel::getInstance().sayHello();

}

void loop() {
  // put your main code here, to run repeatedly:
  Kernel::getInstance().sayHello();
  delay(1000);
}

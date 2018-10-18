#ifndef KERNEL_H_
#define KERNEL_H_
#include <Arduino.h>
class Kernel
{
  private:
    Kernel();
  public:
    
    static Kernel &getInstance();
    static void initialize();
    Kernel(Kernel const&)= delete;
    void operator=(Kernel const&)  = delete;
    void sayHello();
    void sayHelloOnInterrupt();
};
#endif /* KERNEL__ */

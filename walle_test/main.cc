#include <iostream>
#include "main.h"
#include "test/test.h"

char* MainClass::DoTest() {
  std::cout << __FILE__ << "Hello" << std::endl;
  test my_test;
  my_test.DoTest();
  return "hello,world";
}

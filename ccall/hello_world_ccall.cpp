#include <iostream>
#include <emscripten/emscripten.h>

const char* hello="hello,world!";
#ifdef __cplusplus
extern "C" {
#endif
const char* EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
  std::cout << "walle: my function called" << std::endl;
  return hello;
}
#ifdef __cplusplus
}
#endif

#include <iostream>
#include <emscripten/emscripten.h>

#ifdef __cplusplus
extern "C" {
#endif
char* EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
  std::cout << "walle: my function called" << std::endl;
  return "hello,world!";
}
#ifdef __cplusplus
}
#endif

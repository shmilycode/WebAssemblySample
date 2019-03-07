const char* hello="hello,world!";
#ifdef __cplusplus
extern "C" {
#endif
const char* myFunction() {
  return hello;
}
#ifdef __cplusplus
}
#endif

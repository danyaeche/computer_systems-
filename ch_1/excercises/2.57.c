/* show_bytes.c
This is code for excercises 2.56 2.57
*/

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
  int i;
  for (i = 0; i < len; i++){
    printf(" %.2x", start[i]);
  printf("\n");
 }
}

void show_int(int x){
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_short(short x) {
  show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {
  show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x) {
  show_bytes((byte_pointer) &x, sizeof(double));
}

int main(int argc, char** argv){
  int a = atoi(argv[1]);
  show_int(a);
  float b = atof(argv[2]);
  show_float(b);
  void * c = atoi(argv[3]);
  show_pointer(c);
  short d = atoi(argv[4]);
  show_short(d);
  long e = atol(argv[5]);
  show_long(e);
  double f = atof(argv[6]);
  show_double(f);


  return 0;
}

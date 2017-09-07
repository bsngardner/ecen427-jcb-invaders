#include <stdio.h>
#include "platform.h"

int fibonacci(int n, int* buf){
  buf[0] = 1;
  buf[1] = 1;
  
  for(int i=2;i<n;i++){
    buf[n] = buf[n-1] + buf[n-2];
  }
  return 0;
}

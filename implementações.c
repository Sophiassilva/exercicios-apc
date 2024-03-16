#include <stdio.h>

size_t strlen_(const char s[]) {
  size_t i = 0;
  for (; s[i]; i++);
  return i;
}
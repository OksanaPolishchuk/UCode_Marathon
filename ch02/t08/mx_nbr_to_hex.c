#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

static char *mx_strnew(const int size) {
    char *str = NULL;
    int i = 0;

    if (size < 0 || !(str = (char *)malloc((size + 1) * sizeof(char))))
	    return NULL;
    while (i < size + 1) 
	    str[i++] = '\0';
    return str;
}

char *mx_nbr_to_hex(unsigned long nbr) {
  unsigned long x = 1;
  int y = 1;
  unsigned long z = nbr;
  char *s = 0;

  while (x * 16 <= nbr) {
    x = 16 * x;
    y++;
  }
  s = mx_strnew(y);
  for (int i = 0; i < y; i++) {
    z = nbr / x;
    nbr = nbr - (z * x);
    x = x / 16;
    s[i] = z < 10 ? z + '0' : z + 'a' - 10;
  }
  return s;
}

#include "libft.h"

int calculate_num(int n) {
  int len = 0;

  if(n <= 0) {
    len++;
  }
  while(n != 0) {
    n = n  / 10;
    len++;
  }

  return len;
}

char *ft_itoa(int n) {
   char *str;

   int i = calculate_num(n);
   str = (char *)malloc(sizeof(char) * (i + 1));
   
   if(!str)
    return NULL;

   if(n < 0) {
    str[0] = '-';
   }

   str[i--] = '\0';

   if(n == 0) {
    str[i] = '0';
    return str;
   }

   while (n != 0) {
    if(str[0] == '-') {
        str[i] =  -(n % 10) + '0';
    } else {
        str[i] = (n % 10) + '0';
    }
    n /= 10;
    i--;
   }

  return str;
}
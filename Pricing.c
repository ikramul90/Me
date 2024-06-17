#include <stdio.h>

int main(){
  int items = 10;
  float price_per_items = 2.2;
  float price = items*price_per_items;
  char sign = '$';

  printf("number of items = %d\n", items);
  printf("price per items = %.1f %c\n", price_per_items, sign);
  printf("total price = %.2f %c", price, sign);
  return 0;
}

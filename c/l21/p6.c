#include <stdio.h>

#define secs_per_min 60
#define secs_per_hour 3600

unsigned seconds, minutes, hours, secs_left, min_left;
int main(){
  printf("Ingresa el numero de segundo (<6500)");
  scanf(" %d", &seconds);

  hours = seconds / secs_per_hour;
  minutes = seconds / secs_per_min;
  min_left = minutes % secs_per_min;
  secs_left = seconds % secs_per_min;
  printf("%u segundos es igual a ", seconds);
  printf("%u h, %u m, y %u s\n", hours, min_left, secs_left);

  return 0;
}

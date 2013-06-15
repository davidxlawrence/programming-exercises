#include <stdio.h>

typedef struct 
{ 
  int x,y,width,height; 
} Rectangle; 

int overlap(Rectangle *a, Rectangle *b) {
  if (a->x <= (b->x + b->width) && (a->x + a->width) >= b->x && a->y <= (b->y + b->height) && (a->y + a->height) >= b->y) {
    return 1;
  }
  
  return 0;
}

int main(void) {
  Rectangle a = {.x = 0, .y = 0, .width = 50, .height = 50};
  Rectangle *a_ptr = &a;
  
  Rectangle b = {.x = 25, .y = 25, .width = 50, .height = 50};
  Rectangle *b_ptr = &b;
  
  printf("%d\n", overlap(a_ptr, b_ptr));
}
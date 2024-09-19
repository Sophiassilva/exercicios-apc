#include <stdio.h> 

int main ()
{ 
  int a, b, c, e;
  scanf("%d %d %d %d", &a, &b, &c, &e); 
  
  if (a >= b && a >= c && a >= e)
  {
    printf("%d", a);
  }
  else if (c >= a && c >= b && c >= e)
  {
    printf("%d", c); 
  }
  else if (b >= a && b>=c && b >= e )
  {
    printf("%d", b);
  }
  else 
  {
    printf("%d", e);
  }
  
  return 0;
}
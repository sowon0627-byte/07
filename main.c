#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
    int i;
    
    for(i=0;i<5;i++)
    {
                    static int temp = 1;
                    printf("temp = %d\n", temp);
                    temp++;
    }
    
  system("PAUSE");	
  return 0;
}

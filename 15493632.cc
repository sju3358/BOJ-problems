#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (void)
{
    int r;
    double result1,result2,r_d;
  
    
    scanf("%d",&r);
      r_d = (double)r;
    result1 = r_d*r_d*M_PI;
    result2 = r_d*r_d*2;
    
    
    printf("%f\n",result1);
    printf("%f\n",result2);
}
#include <stdio.h>
#include <math.h>

void calculatePi();

void main()
{
    calculatePi();
}

void calculatePi()
{
    float acc = 3;
    float num = 4;
    float den = 0;
    float co = 0;
    int counter = 2;
    
    for(float j = 2; j < 500; j=j+2)
    {
        den = j*(j+1)*(j+2);
        
        if(counter%2==0)
        {
            acc += num/den;
        }
        else
        {
            acc -= num/den;
            
        }
        
        printf("%0.50f\n",acc);
        counter++;
    }
}

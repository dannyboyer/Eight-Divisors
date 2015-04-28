#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    unsigned int max = 100;
   
    unsigned int count, i, div_count, divisor;
    
    //iterate between min to max
    //optimize loop by going 100 to 1 instead of the inverse
    for(i = max; i > 0; i--)
    {
        //check if current number has height divisors. Actually, check for 6 because a number will always has 1 and itself as divisors
        div_count = 0;
        divisor = 2;

        while(divisor < i)
        {
            if (i % divisor == 0){
                div_count += 1;
            }
            
            if(div_count == 6)
            {
                count += 1;    
                printf("%d\n", i);
            }
            
            divisor += 1;    
        }
    }

    printf("%d\n", count);
   
    return 0;    
}

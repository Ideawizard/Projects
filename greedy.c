#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    printf("input how much dollars in change is owed: ");
    float change = GetFloat();
    int cents =  roundf(change * 100) ;
    int coins = 0;
    
    while (change < 0.00)
    {
    
        printf("That is not a valid number!\n Try again: ");
        
        change = GetFloat();
        
    }
    
    
    while (cents > 0)
    {
        coins++;
        
        if (cents >= 25)
        {
        
            cents -= 25;
            
        }
        else if (cents >= 10)
        {
        
            cents -= 10;
            
        }
        else if (cents >= 5)
        {
        
            cents -= 5;
            
        }
        
        else if (cents >= 1)
        {
        
            cents -= 1;
            
        }
        
        
        
        
    }
    
    
        
        printf("%d\n", coins);
        
        
    
    

}

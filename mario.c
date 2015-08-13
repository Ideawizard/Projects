#include <cs50.h>
#include <stdio.h>


int main(void)

{   
    printf("How tall do you want your pyramid?: ");
    
    int height = GetInt();
    int row = 0;
    
    do
    {
      int space = 7 - row;
      int block = 2 + row; 
      
      while (space > 0) 
      
      {
      
        printf(" ");
        space--;
      
      }
      
      while (block <= 9)
      {
        printf("#");
        block++;
      }
      
      row++;
 
    }
    while (row <= height);
      
      
      
}

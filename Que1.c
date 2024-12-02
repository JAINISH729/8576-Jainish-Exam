#include <stdio.h>

int main() 
{
    int height, width, perimeter;


    printf("Enter height: ");
    scanf("%d", &height);
    
    printf("Enter width: ");
    scanf("%d", &width); 

    perimeter = 2 * (height + width);
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
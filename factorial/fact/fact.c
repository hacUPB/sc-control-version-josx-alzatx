#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }
    
    int number = atoi(argv[1]); //Convert the console input argument to an integer
    
    /*It must be verified that the entered number is greater than or equal to zero*/

    if(number < 0)
    {
        fprintf(stderr,"El núnmero debe ser mayor a cero"\n);
        return 1;
    }
    /*Implement the function that calculates the factorial of the input argument*/
    
    int factorial = 1;
    int b;
    for (b = number; b > 1; b--)
    {
        factorial *= b;
    }
    
    /*Print the result*/
    printf("El factorial de %d es %d",number,factorial);
    
    
    /*Implement the function that calculates if the argument is a prime number*/

    /*Print the result*/
    
    return 0;
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Entry point
 *
 *return: Always 0 (Success)
 */
int main(void)

{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if (n = 10> 5)

printf("last digit of %l is %l and is greater than %\n",n,n % 10);

else if  (n % 10 is 0)

printf("last digit of %l is %l and is 0\n",n % 10);

else

printf(last digit of %l is %l and is less than 6 and not 0\n",n,n % 10);

return (0);

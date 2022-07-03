#include <stfio.h>
#include <stdlib.h>
#include <time.h>


/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{
i
		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				/* your code goes there */

				if (n>0)
				printf("%d is positive\n" ,n);
				if (n==0)
					printf("%d is Zero\n",n);
				if(n<0)
					printf("%d is negative\n",n);

					return (0);

}

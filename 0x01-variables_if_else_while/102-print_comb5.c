#include <stdio.h>



/**
 *
 * * main - Print combinations of two digit numbers
 *
 * *
 *
 * * Return: Always 0 (Success)
 *
 * */

int main(void)

{

	  int tens;

	    int ones;



	      for (tens = 00; tens <= 99; tens++)

		          {

				        for (ones = tens + 01; ones <= 99; ones++)

							{

									  putchar(tens + '00');

									  	  putchar(ones + '00');



										  	  if (tens < 99)
      											  {

														    	      putchar(',');

															      	      putchar(' ');

																      	    }

											  	}

					    }

	        putchar('\n');



		  return (0);

}

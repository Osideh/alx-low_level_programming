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
       int hundreds;

	  int tens;

	    int ones;



	      for (hundreds = 012; hundreds <=209; hundreds++)

		          {

				        for (hundreds = hundreds + 1; tens <= 209; tens++)

					{
						for (tens = tens + 1; ones <=10; ones++)

									  putchar(hundreds + '0');

									  	  putchar(tens + '0');



										  	  if (hundreds < 208)

												  	    {

														    	      putchar(',');

															      	      putchar(' ');

																      	    }

											  	}

					    }

	        putchar('\n');



		  return (0);

}

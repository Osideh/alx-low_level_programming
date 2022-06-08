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

	      for (hundreds = 012; hundreds <= 210; hundreds++)

		          {
			        for (tens = hundreds + 1; tens <= 210; tens++)

							{
                                {
					for  (ones = tens + ones <= 210; ones++)

				}
	      			putchar(hundreds + '0');

									  	  putchar(tens + '0');

    putchar(ones + '0');

										  	  if (hundredss < 208)

												  	    {

														    	      putchar(',');

															      	      putchar(' ');

																      	    }

											  	}

					    }

	        putchar('\n');



		  return (0);

}

/*
 * =====================================================================================
 *
 *       Filename:  short_circuit.c
 *
 *    Description:  Demonstates the effect of short circuit.
 *
 *        Version:  1.0
 *        Created:  Wednesday 29 January 2014 12:30:33  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Senthilkumar M (sentenwin), sentenwin@gmail.com
 *        Company:  Share2Create
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	int x = 2, y = 3;

#ifdef test
	/* issue with priority of operators  */
	if( (x += 1 == 3) || (y += 1 == 4)) 
#else
		/* Since the first condition is true, 
		 * if does not evaluate the 2nd condition. 
		 * This is short circuit */
	if( ((x += 1) == 3) || ((y += 1) == 4)) 
#endif
	{
		printf("%d %d\n", x , y);
	}
	else
	{ 
		printf("%d %d\n", x , y);
	}
	return 0;
}

/**** Output *************
$> gcc short_circuit.c -g -o short_circuit
$> ./short_circuit
3 3
$ gcc short_circuit.c -Dtest -g -o  short_circuit
$ ./short_circuit 
2 3
      
*/

/*
 * =====================================================================================
 *
 *       Filename:  loop_error.c
 *
 *    Description:  Demonstrates how invalid value change can lead to crash
 *
 *        Version:  1.0
 *        Created:  Wednesday 29 January 2014 12:06:53  IST
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
	int cnt = 5, num = 1000;
	do 
	{ 
		printf ("%d", num);
		num /= cnt; 
		/* Post increment possiblity of cnt goes to 0 when check happens
		 *   at cnt = 1 */ 
	} while (cnt --); /* End of while */
	return 0;
}

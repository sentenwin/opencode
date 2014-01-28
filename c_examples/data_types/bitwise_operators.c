/*
 * =====================================================================================
 *
 *       Filename:  bitwise_operators.c
 *
 *    Description: Demonstrates the issues with bitwise operators 
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 January 2014 10:51:22  IST
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
 int x = 4;
 int y = ~x;
 printf("%d\n", y);

 x = 2147483647;
 y = x << 2; 
 printf("%d\n", y);
 
 x = 2147483647;
 y = x >> 32;  /* Change 32 to 16 after observing the warning */
 printf("%d\n", y);

 x = 2147483647;
 y = x >> -4; /* Change this to +ve */ 
 printf("%d\n", y);
 return 0;
}

/********* Output **************
 * bitwise_operators.c: In function ‘main’:
 * bitwise_operators.c:31:2: warning: right shift count >= width of type [enabled by default]
 * bitwise_operators.c:35:2: warning: right shift count is negative [enabled by default]
 * -5
 * -4
 *  2147483647
 *  7
 */

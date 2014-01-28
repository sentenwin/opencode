/*
 * =====================================================================================
 *
 *       Filename:  bitwise_swap.c
 *
 *    Description:  Swapping of 2 values using bitwise XOR (^)
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 January 2014 10:55:16  IST
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
 unsigned int num1 = 10;
 unsigned int num2 = 20;
 printf("num1 = %d, num2 = %d\n", num1, num2);

 num1 ^= num2;
 num2 ^= num1;
 num1 ^= num2;
 printf("num1 = %d, num2 = %d\n", num1, num2);
 
 return 0;
}
/************ Output ****************
 * $ run bitwise_swap.c 
 * num1 = 10, num2 = 20
 * num1 = 20, num2 = 10
 *
 */

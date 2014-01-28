/*
 * =====================================================================================
 *
 *       Filename:  bitwise_multiplication.c
 *
 *    Description:  Demonstrates multiplication 2 numbers using bitwise operators
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 January 2014 10:46:15  IST
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
 unsigned int val = 10, num = 2;
 unsigned int res = 0;
 while ( num != 0)
 {
  if( num & 1)
  {
   res = res + val;
  }
  val = val << 1; /* Shifting left by 1 */
  num = num >> 1; /* Shifting right by 1 */
 }
 printf("%u\n", res);

 return 0;
}

/************ OUTPUT ***********
 *
 * $ run bitwise_multiplication.c 
 * 20
 *
 *******************************

/*
 * =====================================================================================
 *
 *       Filename:  for_example.c
 *
 *    Description:  Program to print the binary of 'd'
 *
 *        Version:  1.0
 *        Created:  Wednesday 29 January 2014 12:01:46  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Senthilkumar M (sentenwin), sentenwin@gmail.com
 *        Company:  Share2Create
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(void)
{
  char ch;
  int i;
  ch = 'd';
  /* Iterates for 128, 64, 32, 16, 8, 4, 2 and 1 */
  for(i = 128; i > 0; i = i / 2)
  {
    if(i & ch) /* a non-zero value */
        printf("1 ");
    else
        printf("0 ");
  }
  return 0;
}
/*************** OUTPUT *****************
 * output
 * 0 1 1 0 0 1 0 0 
 */

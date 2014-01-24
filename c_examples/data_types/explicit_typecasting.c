/*
 * =====================================================================================
 *
 *       Filename:  explicit_typecasting.c
 *
 *    Description:  Demonstrates the how explicit type casting is done
 *
 *        Version:  1.0
 *        Created:  Friday 24 January 2014 01:36:42  IST
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
 char ch = 'A';
 signed int num = -10;
 unsigned int u_int = 234;
 float val = 23.76; 
 
 printf("%d\n", (int) ch + num);
 printf("%f\n", val /(float) num);
 printf("%d\n", (signed)(u_int) / (num));
 return 0;
}
/************** Output ***************
 *
 * 55
 * -2.376000
 *  -23
 *
 */

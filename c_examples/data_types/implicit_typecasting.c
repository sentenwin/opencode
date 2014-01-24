/*
 * =====================================================================================
 *
 *       Filename:  implicit_typecasting.c
 *
 *    Description:  Demonstrates implicit type casting and integral promotion
 *    		    Lower data type automatically promoted to highter data type
 *
 *        Version:  1.0
 *        Created:  Friday 24 January 2014 01:37:45  IST
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
 
 printf("%d\n", ch + num); /* adding char with integer type promotes char type to integer*/
 printf("%f\n", val / num); /* operation on  int with float promotes int type to float type */
 printf("%d\n", u_int / num); /* adding int with unsigned int promotes int type to unsigned int */
 return 0;
}
/*************** Output*************
 *
 * 55
 * -2.376000
 *  0
 *
 */

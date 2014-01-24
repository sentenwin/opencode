/*
 * =====================================================================================
 *
 *       Filename:  data_type_overflow.c
 *
 *    Description:  Demonstrate the data type overflow
 *                  For signed data type if overflow happens 
 *                  value will go to nagative
 *
 *        Version:  1.0
 *        Created:  Friday 24 January 2014 01:08:25  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Senthilkumar M (sentenwin), sentenwin@gmail.com
 *        Company:  Share2Create
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<limits.h>
int main()
{
        int num  = INT_MAX; /* Max of INT number*/
        printf("value is:%d\n",num);
	num = num + 1; 	/* Value goes of out of bounds */
        printf("value is:%d\n",num);
        return 0;
}

/************** Output *****************
 * value is:2147483647
 * value is:-2147483648
 * 
 * /


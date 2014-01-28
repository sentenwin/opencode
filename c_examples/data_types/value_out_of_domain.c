/*
 * =====================================================================================
 *
 *       Filename:  value_out_of_domain.c
 *
 *    Description:  Demonstrates "Value of out of domain" Error
 *                  eg. signed short int type (2 bytes) can hold upto (2^16 = 65536 )32767 postive value
 *                  and -32768 nagative value. assigning more that 65536 will result in 0 (out of domain value)
 *
 *        Version:  1.0
 *        Created:  Friday 24 January 2014 01:42:53  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Senthilkumar M (sentenwin), sentenwin@gmail.com
 *        Company:  Share2Create
 *
 * =====================================================================================
 */

#include<stdio.h>
int main()
{
#ifdef test
        short int fact=1;
#else
        long long unsigned int fact=1;
#endif
        int count,num;
        printf("Enter a number:");
        scanf("%d",&num);
        for(count = 1;count <= num;count++)
        {
                fact = fact * count;
        }
#ifdef test
        printf("factorial of %d is :%d \n",num,fact);
#else
        printf("factorial of %d is :%llu \n",num,fact);
#endif
        return 0;
}

/************ output *****************/
/* Run using this command
 * $> gcc value_out_of_domain.c -Dtest -o value_out_of_domain
 * Case 1
 * Enter a number:30
 * factorial of 30 is :0 
 *
 * Case 2 
 * Enter a number:13
 * factorial of 13 is :-13312 
 *
 * Correct output
 *
 * Run using this command
 * $> gcc value_out_of_domain.c -o value_out_of_domain
 * $> ./value_out_of_domain 
 * Enter a number:30
 * factorial of 30 is :9682165104862298112 
 * $> ./value_out_of_domain 
 * Enter a number:13
 * factorial of 13 is :6227020800 
 *
 */

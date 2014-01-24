/*
 * =====================================================================================
 *
 *       Filename:  data_type_size.c
 *
 *    Description:  Displays size of different data types
 *
 *        Version:  1.0
 *        Created:  Friday 24 January 2014 01:12:52  IST
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
 printf("signed char        : %lu\n", (long unsigned)sizeof (signed char));
 printf("unsigned char      : %d\n", sizeof (unsigned char));

 printf("short int          : %d\n", sizeof (short int));
 printf("unsigned short int : %d\n", sizeof (unsigned short int));


 printf("int                : %d\n", sizeof (int));
 printf("int *              : %d\n", sizeof (int *));
 
 printf("long int           : %d\n", sizeof (long int));
 printf("long long int      : %d\n", sizeof (long long int));
 printf("unsigned long int  : %d\n", sizeof (unsigned long int));
 printf("unsigned long long int  : %d\n", sizeof (unsigned long long int));

 printf("float              : %d\n", sizeof (float));
 
 printf("double             : %d\n", sizeof (double));
 printf("long double        : %d\n", sizeof (long double));
 return 0;
}

/************** Output ***************/
/* signed char        : 1
 * unsigned char      : 1
 * short int          : 2
 * unsigned short int : 2
 * int                : 4
 * int *              : 4
 * long int           : 4
 * long long int      : 8
 * unsigned long int  : 4
 * unsigned long long int  : 8
 * float              : 4
 * double             : 8
 * long double        : 12
 *
 * /

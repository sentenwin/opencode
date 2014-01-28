/*
 * =====================================================================================
 *
 *       Filename:  identifier.c
 *
 *    Description:  Demonstates variables and constants. Also emphaizes
 *                  the "initialization of local variable".
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 January 2014 10:58:42  IST
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
        int i,k; /* local variable not initilized*/
	const int num; 
#ifdef test
        for(i = 0;i < 9;i++)
        {
                /* incrementing local variable without 
                 * initilization gives unexpected result */
                k = k + 1; 
        }
        /* Changine const variable not allowd
         * Compiler gives the error here */
	num = num + k; 
#endif
        printf("final value of k:%d\n",k);
        printf("value of num:%d\n",num);
        return 0;
}

/******** Output *************
 *  $> gcc identifier.c  -Dtest -o identifier.c 
 *  identifier.c: In function ‘main’:
 *  identifier.c:34:2: error: assignment of read-only variable ‘num’
 *
 * Correct output
 * ~/wspace/opencode/c_examples/data_types$ ./identifier.c 
 * final value of k:134513771
 * value of num:-1217044480
 *
 */

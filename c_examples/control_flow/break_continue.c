/*
 * =====================================================================================
 *
 *       Filename:  break_continue.c
 *
 *    Description:  Demonstrates the use of break and continue. Program prints 
 *    		  2,4, stops for a while and start printing -ve numbers
 *
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 January 2014 11:21:13  IST
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
   int num = 0;
#else
   unsigned int num = 0;
#endif
#ifdef test
   /* OR operator only check next condition if first one failed*/
   while(((num += 1) > 0) || ((num += 1) < 10))
#else
   while(((num += 1) > 0) && ((num += 1) < 10))
#endif
   {
      if(num > 4)
      {
         num++;
         continue;
      }
      if(num > 8) 
      {
         break; /* This will never be executed */
      }
      num++;
      printf("%d\n",num);
   } /*End of while */
   return 0;
}
/********* Output *************
 * $> gcc break_continue.c -Dtest -o break_continue
 * $> break_continue
 * 2
 * 4
 * -2147441498
 * -2147441495
 * -2147441492
 * -2147441489
 * -2147441486
 *  press Ctl + C to stop the program
 *
 *  Run program using this command
 *  $> gcc break_continue.c -Dtest -o break_continue
 *  $> ./break_continue
 *  3
 */

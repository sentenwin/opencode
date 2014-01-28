/*
 * =====================================================================================
 *
 *       Filename:  control_flow_complex.c
 *
 *    Description:  Demonstrates the need for simplified expressions in decision
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 January 2014 11:45:21  IST
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
 int x = 2, y = 3;
 
 /* Refer to the warning when you compile with "gcc -Wall" */
#ifdef test
 if(((x += 1) == 3) || ((y += 1) == 4) && (x + y == 1))
#else 
 /* Use parantheses around && within ||*/
 if(((x += 1) == 3) || (((y += 1) == 4) && (x + y == 1)))
#endif
 {
  printf("%d %d\n", x , y);
 }
 else
 { 
  printf("%d %d\n", x , y);
 }
 return 0;
}

/***********Output ***********
 * gcc -Wall control_flow_complex.c -Dtest -o control_flow_complex -g
 * control_flow_complex.c: In function ‘main’:
 * control_flow_complex.c:26:2: warning: suggest 
 * parentheses around ‘&&’ within ‘||’ [-Wparentheses]
 * $> ./control_flow_complex
 * 3 3
 *
 * 
 */




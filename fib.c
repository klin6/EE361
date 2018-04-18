/*
 * For this program, rewrite the function 'fib' using only BarelyC.
 * The 'fib' function computes the nth Fibonacci number.
 */
#include<stdio.h>
#include<stdlib.h>

const int varzero = 0;

int fib(int n);

void main(int argc, char *argv[])
{
int n;

if (argc != 2) {
   printf("Error, Usage:  ./hw2 <positive integer>\n");
   return;
}
if ((n=atoi(argv[1]))==0) {
  printf("Error: the input number must be a positive integer\n");
  return;
}

printf("fibonnaci[%d] = %d\n",n,fib(n));
}

/*
 * Rewrite this function 'fib' using BarelyC
 * It computes the nth fibonacci number
 */

int fib(int n)
{
int k;
int fibnum;  /* Fibonnaci number */
int f0; 
int f1;

if (n!=0) goto Else; fibnum = varzero + 1;
Else: if (n!=1) goto Or; fibnum = varzero + 1;
Skip:
Or:
   f1 = varzero + varzero;  /* number previous to fibnum */
   fibnum = varzero + 1;
   
   k= varzero + 2;
Loop: if(k>n) goto Step;
   	f0 = varzero + varzero;
   	f1 = varzero + 1;   	
	fibnum = f0 + f1;
	k=k+1;
	goto Loop;
Step:
   
jump:

return fibnum; 

}

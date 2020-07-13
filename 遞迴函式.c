#include<stdio.h>
#include<stdlib.h>
int fib(int);
 int fib(int n)	//¶O¤ó¼Æ¦C 
 {
 	if(n == 1 || n == 0){
 		return n;
	 }
	else{
		return fib(n - 1) + fib (n - 2);
	}
 }
 
 int main()
 {
 	int i;
 	for(i = 0;i < 10;i++){
 		printf("%d\n",fib(i));
	 }
 }

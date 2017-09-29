#include <stdio.h>


/*
Euclid's Algorithm
==================

Finding the greatest common divisor given two positive integers.

*/
int gcd(int n, int m);
int gcd_recursive(int a, int b);

int gcd(int n, int m)
{
	if (n > 0 && m > 0){
		while (m != 0)
		{
			int t = m;
			m = n % m;
			n = t;
		}
		return n;
		printf("answer: %d", n);
	}
	else{
		printf("intputs must both be positive integers");
	}
	
}

// recursive version
int gcd_recursive(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		gcd_recursive(b, a % b);
	}
}
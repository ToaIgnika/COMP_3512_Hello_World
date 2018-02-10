#include "lab1.h"


// Greatest Common Denominator
//Shiv Randhawa 16/01/18
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	int big = a;
	int small = b;
	if (a <= b) {
		big = b;
		small = a;
	}

	if (big % small == 0) {
		return small;
	}
	else {
		for (int i = small - 1; i != 0; i--) {
			if (big % i == 0 && small % i == 0) {
				return i;
			}
		}
	}



	return 0;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).
	long curfib = 1;
	long prevfib = 1;
	long temp = 0;

	for (int i = 2; i <= n; i++) {
		temp = curfib;
		curfib = curfib + prevfib;
		prevfib = temp;
	}

	return temp;
}

//test comment

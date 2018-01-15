#include "lab1.h"

// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int max_denom = 0;
	for (int i = 1; i <= a && i <= b; i++) {
		if (a%i == 0 && b%i == 0) {
			max_denom = i;
		}
	}
	return max_denom;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence. 1 1 2 3 5 8 13 21 
long long fibonacci(const int n)
{
	if (n <= 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	// I am leaving this comments to test the pull request
}

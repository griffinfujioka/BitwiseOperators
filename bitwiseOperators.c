/* ----------------------------------------------------------------------------

This code was created in preparation for an upcoming interview at Isilon
where I know bit operators are a popular interview question. 

- Programmers usually think it bytes, ints, doubles, etc. but rarely in bits. 
- Bitwise operators come in handy for things like encryption and compression. 

----- Operators ------
<< x : left shift
		move all bits x to the left 
		i.e., 101 << 2 ==> 10100
			Each left shift is equivalent to multiplying by a power of two. 

>> x: 
		move all bits x to the right 
		i.e., 101 >> 2 ==> 001
			Each right shift is equivalent to dividing by 2. 

AND: 
		denoted by a single '&' 
		Follows normal AND logic... 
		returns 1 if all bits are 1, otherwise 0 

OR: 
		denoted by a single '|'
		Follows normal OR logic
		returns 0 only if all bits are 0, otherwise 1 

NOT: 
		denoted by a single '~'
		Follows normal NOT logic 
		Flips every bit 

XOR: 
		denoted by a single '^'
		takes 2 inputs and returns a 1 if either one or the other of the inputs is 1
			but not if both inputs are 1 or both inputs are 0. 

When should you use bitwise operators? 
	
	For saving space, which is a relatively uncommon issue these days. 
	Use ~0 to find the largest possible integer. 
	Bit shifting to represent multiplication. 
	Encryption or compression. 

---------------------------------------------------------------------------------

*/ 
#include<stdio.h>

int mult_by_two(int x)
{
	return x << 1; 		// Shift everything 1 bit to the left 
}

int mult_by_power_two(int x, int power)
{

	return x << power; 
}

int divide_by_two(int x)
{
	return x >> 1; 		// Shift everything 1 bit to the right 
}

int main()
{
	printf("Welcome to the bitwise practice program!\n"); 

	printf("\n---------- left shift ----------\n");
	printf("Testing mult_by_two(2)...\n"); 

	printf("Expected Value: 4\t Actual Value: %d\n", mult_by_two(2));

	printf("\nTesting mult_by_power_two(2,3)...\n"); 

	printf("Expected Value: 16\t Actual Value: %d\n", mult_by_power_two(2,3));

	printf("\nTesting mult_by_power_two(6,4)..."); 

	printf("Expected Value: 96\t Actual Value: %d\n", mult_by_power_two(6, 4));
	printf("\tNote: 96 = 6 * 2 * 2 * 2 * 2");
	printf("\n-------- end left shift --------\n"); 

	printf("\n---------- right shift ----------\n");
	printf("Testing divide_by_two(3)...\n"); 
	printf("Expected Value: 1\t Actual Value: %d\n", divide_by_two(3));
	printf("\n-------- end left shift --------\n"); 

	printf("\nHopefully you have a better understanding now because I'm blowing this popsicle stand!"); 

}
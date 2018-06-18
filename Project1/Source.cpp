#include <conio.h>


int sumArray(const int* pnt, int size) 
{
	int result = 0;
	const int* end = pnt + size;
	while (pnt < end)
	{
		result += *pnt;
		pnt++;
	}
	return result;
}
// reverse the elements of an array with a function.
void reverseArray(int* fArray, int size)
{
	int* lArray = fArray + (size - 1);
	while (lArray > fArray)
	{ // could use std::swap in standard lib <algorithm>
		int temp = *lArray;
		*lArray = *fArray;
		*fArray = temp;
		lArray--;
		fArray++;
	}

}

void print(const char* s)
{
	for (; *s != 0; s++)
	{
		_putch(*s);
	}
}

void collectstring(char* s, int sMax)
{
	const char* end = s + sMax;
	for ( char i = _getch(); i != 13 && (s + 1 < end); i = _getch(), s++)
	{
		_putch(i);
		*s = i;	
	}

	*s = 0;
}


int main()
{
	int arr[7] = { 12,6,7,5,2,65,0 };
	int s = (sizeof arr)/4; // 4 being the size of a int in memory not the size of the array length
	int n = sumArray(arr,s);
	reverseArray(arr, s);
	 
	print ( "Type your Fib Number Ref, then press enter:" );
	char InArr[6];
	collectstring(InArr, 6);
	print("\n You Typed:");
	print(InArr);

	
	
	char i = _getch(); // 0 = 48;
	while (!_kbhit());
	return 0;
}


// Find the Fib sequence returner/
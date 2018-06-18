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
	{
		int temp = *lArray;
		*lArray = *fArray;
		*fArray = temp;
		lArray--;
		fArray++;
	}

}

int main()
{
	int arr[7] = { 12,6,7,5,2,65,0 };
	int s = (sizeof arr)/4; // 4 being the size of a int in memory not the size of the array length
	int n = sumArray(arr,s);
	reverseArray(arr, s);
	return 0;
}
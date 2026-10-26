#include "matrix.h"

bool spe(matrix arr, int m, int n)
{
	int curr = -1;
	int sum = 0;
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			sum += arr[i][j];
		}
		if(curr == -1)
		{
			curr = sum;
			sum = 0;
		}
		else if(curr != sum)
		{
			return 0;
		}
	}	
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			sum += arr[j][i];
		}
		if(curr == -1)
		{
			curr = sum;
			sum = 0;
		}
		else if(curr != sum)
		{
			return 0;
		}
	}
	for(int i = 0; i< m; ++i)
	{
		sum += arr[i][i];

		if(curr == -1)
		{
			curr = sum;
			sum = 0;
		}
		else if(curr != sum)
		{
			return 0;
		}
	}

	for(int i = m-1; i>=0; --i)
	{
		sum += arr[i][i];
		if(curr == -1)
		{ 
			curr = sum;
			sum = 0;
		}
		else if (curr != sum)
		{
			return 0;
		}
	}
	return 1;
}


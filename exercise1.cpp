#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() 
{
	int n=5, k=3;
	cin>> n;
	cin>> k;
	int* str = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	return 0;
}
#include <iostream>
using namespace std;

const int COUNT = 21;

int main()
{
	int n;
	long long arr[COUNT] = { };
	cin >> n;

	for (int i = 0; i < COUNT; i++)
	{
		if (i == 0)
			arr[i] = 0;
		else if (i == 1)
			arr[i] = 1;
		else
			arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n] << endl;

	return 0;
}
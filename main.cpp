#include <iostream>
#include "Timsort.h"

using namespace std;

int main()
{
	DynamicArray<int> a = random_array<int>(20000);

	//a.show();
	timsort(a);
	for (int i = 1; i < a.GetSize(); i++)
	{
		if (a[i] < a[i - 1])
		{
			cout << "NOT SORTED";
			break;
		}
	}
	//a.show();
	return 0;
}


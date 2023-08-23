#include <iostream>
using namespace std;

int main()
{
	int matris[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matris[i][j];
		}
	}
	
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matris[i][j] << " || ";
		}
		cout << endl;
	}

	return 0;
}
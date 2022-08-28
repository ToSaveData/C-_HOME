#include <iostream>
using namespace std;

int main()
{
	int KOI = 0, IOI = 0;
	string n;

	cin >> n;
	if (n.size() > 10000)
		return 0;
		
	for (int i = 2; i < n.size(); i++)
	{
		if (n[i - 2] == 'K' && n[i - 1] == 'O' && n[i] == 'I')
			KOI++;
		else if (n[i - 2] == 'I' && n[i - 1] == 'O' && n[i] == 'I')
			IOI++;
	}

	cout << KOI << endl;
	cout << IOI << endl;

	return 0;
}
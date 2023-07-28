#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int main()
{


	string s;

	cin >> s;
	int a;
	cin >> a;
	cout << s << '\n';
	a = a % 25;
	printf("\ncode = %d\n", a);
	int i = 0;
	while (s[i] != '\0')
	{
		//abc
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = abs(s[i] + a);

			if (s[i] > 'z')
			{
				s[i] = abs(s[i] - 26);
			}
		}
		else
			//ABC
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				abs(s[i] += a);

				if (s[i] > 'Z')
				{
					s[i] = abs(s[i] - 26);
				}
			}

		cout << s[i] << ' ';
		printf(" - %d\n", s[i]);


		++i;
	}
	printf("\n\n\n\n");

	i = 0;
	while (s[i] != '\0')
	{
		//abc
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= a;

			if (s[i] < 'a')
			{
				s[i] = abs(s[i] + 26);
			}
		}
		else
			//ABC
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] -= a;

				if (s[i] < 'A')
				{
					s[i] = abs(s[i] + 26);
				}
			}

		cout << s[i] << ' ';


		++i;
	}
	/*int b = 0;
	while (s[b] != ' ' && s[b] != '\0')
	{
		s[b] = s[b] - a;
		cout << s[b] << ' ';
		++b;
	}

	printf("\n");*/
	printf("\n\n\n\n");

	int hg;
	cin >> hg;
	for (int j = 0; j < 256; ++j)
	{
		printf("j = %d, symb = %c\n", j, j);
	}
	system("pause");
	return 0;
}
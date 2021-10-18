#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
#include <time.h>
#include <stdio.h>
using namespace std;
int main()
{
	srand(time(NULL));
	//Задание 1

	//int N = 2303; 
	//const char* path = "D:\\example\\uy.txt";
	//const char* thpa = "D:\\example\\yu.txt";
	//FILE* f1 = fopen(path, "rt");
	//FILE* f2 = fopen(thpa, "rt");
	//if ((fopen_s(&f1, path, "r") != NULL) && (fopen_s(&f2, thpa, "r") != NULL))
	//{
	//	cout << "Can't open the file" << endl;
	//	
	//}
	//else
	//{
	//	char* buf1 = new char[N];
	//	char* buf2 = new char[N];
	//	while (!feof(f1) || !feof(f2))
	//	{
	//		fgets(buf1, N, f1);
	//		fgets(buf2, N, f2);
	//		if (strcmp(buf1, buf2) != 0)
	//		{
	//			cout << "Nesovpadayhie stroki " << buf1 << "\n";
	//			cout << "Nesovpadayhie stroki " << buf2 << "\n";
	//		}
	//	}
	//	if (fclose(f1) == EOF || fclose(f2) == EOF)
	//	{
	//		cout << "Fale ne zakrit" << "\n";
	//	}
	//	else 
	//	{
	//		cout << "Fale zakrit" << "\n";
	//	}
	//}
	
	//Задание 2

	/*const char* path = "D:\\example\\uy.txt";
	int c;
	int len = 0, cnt = 1,glas=0, cogl = 0, zif=0;
	FILE* in;
	if (fopen_s(&in, path, "r") != NULL)
	{
		cout << "Ôàéë áûë îòêðûò";
	}
	else
	{
		while (!feof(in))
		{
			c = fgetc(in);
			if (c == 65 || c == 69 || c == 73 || c == 79  || c == 85 || c == 89||c == 97 || c == 101 || c == 105 || c == 111 || c == 117 || c == 121)
			{
				glas++;
			}
			if ((c >= 66 && c < 69 ) || (c >= 70 && c < 73) || (c >= 74 && c < 79) || (c >= 80 && c < 85) || (c >= 86 && c < 89)|| c == 90 || (c >= 98 && c < 101) || (c >= 102 && c < 105) || (c >= 106 && c < 111) || (c >= 112 && c < 117) || (c >= 118 && c < 121) || c == 122)
			{
				cogl++;
			}
			if (c >= 49 && c <= 58)
			{
				zif++;
			}
			if (c == '\n')
			{
				cnt++;
				len--;
			}
			else
			{
				len++;
			}
			if (static_cast<int>(c) == 32)
			{
				len--;
			}
		}
	}
	cout << "Strok:" << cnt << " " << "Simvolov:" << len << " " << "Glasn:" << glas << " " << "Sogl:" << cogl << " " << "Zifri:" << zif << " ";*/
	
	//Задание 3

	int n=3;
	cout << "Vvedite kluch shifrovania ";
	cin >> n;
	char c;
	const char* path = "D:\\example\\file.txt";
	const char* thpa = "D:\\example\\out.txt";
	FILE* f1 = fopen(path, "rt");
	FILE* f2 = fopen(thpa, "w");
	if ((fopen_s(&f1, path, "r") != NULL) && (fopen_s(&f2, thpa, "w") != NULL))
	{
		cout << "Can't open the file" << endl;

	}
	else
	{
		while (!feof(f1))
		{
			c = fgetc(f1);
			if (static_cast<int>(c) == -1)
			{
				break;
			}
			if (c == '\n' || static_cast<int>(c) == 32|| c == '\0'|| static_cast<int>(c) == 44 || static_cast<int>(c) == 46 || static_cast<int>(c) == 33 || static_cast<int>(c) == 63)
			{
				fprintf(f2, "%c", c);
			}
			else 
			{
				c = static_cast<int>(c) - n;
				fprintf(f2, "%c", c);
			}
		}
		if (fclose(f1) == EOF)
		{
			cout << "Fale ne zakrit" << "\n";
		}
		else
		{
			cout << "Fale zakrit" << "\n";
		}
	}

	return 0;
}
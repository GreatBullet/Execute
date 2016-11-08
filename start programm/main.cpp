#include<iostream>
#include<Windows.h>
using namespace std;

int Sum(int a, int b)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Functon Sum is executing" << endl;
	
	int c;
	c = a + b;
	return c;
	
}
void StartProgram(string filename)
{
	ShellExecute(NULL, "open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

void WelcomeMessage()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Welcome to our program!" << endl;
}

int main()
{
	WelcomeMessage();
	int x, y;
	cin >> y;
	cin >> x;
	cout << Sum(x, y) << endl;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	StartProgram("mspaint");
	system("pause");
	return 0;
}
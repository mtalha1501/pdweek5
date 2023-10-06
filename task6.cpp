#include<iostream>
#include<windows.h>
using namespace std;
void printbox();
void gotoxy(int x, int y);
void moveT(int x, int y);
void moveD(int x, int y);


main()
{
    int x = 8, y = 4; 
    system("color 09");
    system("cls");
    printbox();
    while (true)
    {
        moveT(x, y);
        x = x + 1;
	if( x== 45)
	{
	x = 8;
	}
    }
}
void printbox()
{
    cout<<"     _____________________________________________                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |                                           |                               "<<endl;
    cout<<"     |___________________________________________|                               "<<endl;
    cout<<"                                                                               "<<endl;

        
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void moveT(int x, int y)
{
    gotoxy(x, y);
    cout<<"T";
    Sleep(200);
    gotoxy(x, y);
    cout<< "  ";
}
void moveD(int x, int y)
{
    gotoxy(x, y);
    cout<<"D";
    Sleep(200);
    gotoxy(x, y);
    cout<< "  ";
}
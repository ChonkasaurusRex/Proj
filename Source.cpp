#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
void Disp(unsigned char X[][80]) //Display
{
	system("cls");
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			cout << X[r][c];
		}
	}
	Sleep(100);
}
void Lo7aFania(unsigned char X[][80])
{
	//Borders
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			X[r][c] = ' ';
		}
	}
	for (int c = 1; c < 80 - 1; c++)
	{
		X[0][c] = 205;
		X[23][c] = 205;
	}
	X[0][0] = 201;
	for (int r = 1; r < 24 - 1; r++)
	{
		X[r][0] = 186;
		X[r][80 - 1] = 186;
	}
	X[0][80 - 1] = 187;
	X[23][0] = 200;
	X[23][79] = 188;

	//Set Timer 
	int y = 57;
	int x = 57;
	int i = 57;
	X[1][1] = 'T';
	X[1][2] = 'I';
	X[1][3] = 'M';
	X[1][4] = 'E';
	X[1][5] = ':';
	X[1][6] = y;
	X[1][7] = x;
	X[1][8] = i;
	
	

	//Timer Box
	X[0][9] = 203;
	for (int r = 1; r < 2; r++)
	{
		X[r][9] = 186;
	}
	X[2][9] = 188;
	for (int c = 8; c > 0; c--)
	{
		X[2][c] = 205;
	}
	X[2][0] = 204;

	//Platforms
	X[20][0] = 204;
	for (int c = 1; c < 12; c++)
	{
		X[20][c] = 205;
	}
	X[20][12] = 187;
	for (int r = 21; r < 22; r++)
	{
		X[r][12] = 186;
	}
	X[22][12] = 200;
	for (int c = 13; c < 32; c++)
	{
		X[22][c] = 205;
	}
	X[22][32] = 188;
	X[21][32] = 201;
	for (int c = 33; c < 36; c++)
	{
		X[21][c] = 205;
	}
	X[21][36] = 188;
	X[20][36] = 201;
	for (int c = 37; c < 40; c++)
	{
		X[20][c] = 205;
	}
	X[20][40] = 188;
	X[19][40] = 201;
	for (int c = 41; c < 44; c++)
	{
		X[19][c] = 205;
	}
	X[19][44] = 187;
	for (int r = 20; r < 23; r++)
	{
		X[r][44] = 186;
	}
	X[23][44] = 202;
	X[17][38] = 187;
	for (int c = 37; c > 29; c--)
	{
		X[17][c] = 205;
	}
	X[17][29] = 201;
	X[18][29] = 188;
	for (int c = 28; c > 10; c--)
	{
		X[18][c] = 205;
	}
	X[18][10] = 200;
	X[17][10] = 187;
	for (int c = 9; c > 5; c--)
	{
		X[17][c] = 205;
	}
	X[17][5] = 200;
	X[16][5] = 187;
	for (int c = 4; c > 2; c--)
	{
		X[16][c] = 205;
	}
	X[16][2] = 200;
	for (int r = 15; r > 11; r--)
	{
		X[r][2] = 186;
	}
	X[11][2] = 187;
	X[11][1] = 205;
	X[11][0] = 201;
	X[10][0] = 32;
	X[9][0] = 200;
}
void Timer(int x, int y, int i, unsigned char X[][80]) //Timer
{

	X[1][6] = y;
	X[1][7] = x;
	X[1][8] = i;

	while (y != 47)
	{
		if (i != 48)
		{
			i--;
			X[1][6] = y;
			X[1][7] = x;
			X[1][8] = i;
		}
		else if (i == 48 && x != 48)
		{
			x--;
			i = 57;
			X[1][6] = y;
			X[1][7] = x;
			X[1][8] = i;
		}
		else if (i == 48 && x == 48)
		{
			y--;
			x = 57;
			i = 57;
			X[1][6] = y;
			X[1][7] = x;
			X[1][8] = i;
		}
		else if (y == 48 && x == 48 && i == 48)
		{
			X[1][6] = 48;
			X[1][7] = 48;
			X[1][8] = 48;
			break;
		}
		Disp(X);
	}
}
void SetEnmy_1(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 287;
	X[rEnmy + 1][cEnmy] = 220;
}
void SetEnmy_2(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 287;
	X[rEnmy + 1][cEnmy] = 220;
}
void SetHero_1(unsigned char X[][80], int rHero, int cHero)
{
	X[rHero][cHero] = 79;
}
void MoveEnmy_1(int& rEnmy, int& cEnmy, int& dir)
{
	if (dir == 1)
	{
		cEnmy++;
		if (cEnmy == 80 - 1)
		{
			dir = -1;
		}
	}
	if (dir == -1)
	{
		cEnmy--;
		if (cEnmy == 0 + 1)
		{
			dir = 1;
		}
	}
}
void MoveEnmy_2(int& rEnmy, int& cEnmy, int& dir)
{
	if (dir == 1)
	{
		rEnmy--;
		if (rEnmy == 2 )
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		cEnmy--;
		if (cEnmy == 15)
		{
			dir = 3;
		}
	}
	if (dir == 3)
	{
		rEnmy++;
		if (rEnmy == 15)
		{
			dir = 4;
		}
	}
	if (dir == 4)
	{
		cEnmy++;
		if (cEnmy == 65)
		{
			dir = 1;
		}
	}
}
void MoveHero_1(int& rHero, int& cHero, char ch)
{
	if (ch == 'w')
	{
		rHero--;
	}
	if (ch == 's')
	{
		rHero++;
	}
	if (ch == 'a')
	{
		cHero--;
	}
	if (ch == 'd')
	{
		cHero++;
	}
}
void main()
{
	unsigned char X[24][80];
	int rEnmy1 = 5;
	int cEnmy1 = 20;
	int dirEnmy_1 = 1;
	int rEnmy2 = 15;
	int cEnmy2 = 65;
	int dirEnmy_2 = 1;
	int rHero = 20;
	int cHero = 4;
	while (1)
	{
		while (!_kbhit())
		{
			
			Lo7aFania(X);
			SetEnmy_1(X, rEnmy1, cEnmy1);
			SetEnmy_2(X, rEnmy2, cEnmy2);
			MoveEnmy_1(rEnmy1, cEnmy1, dirEnmy_1);
			MoveEnmy_2(rEnmy2, cEnmy2, dirEnmy_2);
			SetHero_1(X, rHero, cHero);
			Disp(X);
			Timer(57, 57, 57, X);
		}
		char ch = _getch();
		MoveHero_1(rHero, cHero, ch);
	}
}
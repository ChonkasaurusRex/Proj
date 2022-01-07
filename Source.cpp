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
	int y = 48;
	int x = 48;
	X[1][1] = 'S';
	X[1][2] = 'C';
	X[1][3] = 'R';
	X[1][4] = ':';
	X[1][5] = x;
	X[1][6] = y;

	//Timer Box
	X[0][7] = 203;
	for (int r = 1; r < 2; r++)
	{
		X[r][7] = 186;
	}
	X[2][7] = 188;
	for (int c = 6; c > 0; c--)
	{
		X[2][c] = 205;
	}
	X[2][0] = 204;

	//Object
	X[3][70] = 157;

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
	for (int c = 1; c < 15; c++)
	{
		X[9][c] = 205;
	}
	X[9][15] = 188;
	for (int r = 8; r > 5; r--)
	{
		X[r][15] = 186;
	}
	X[5][15] = 187;
	X[5][14] = 205;
	X[5][13] = 201;
	for (int r = 6; r < 8; r++)
	{
		X[r][13] = 186;
	}
	X[8][13] = 188;
	for (int c = 12; c > 4; c--)
	{
		X[8][c] = 205;
	}
	X[8][4] = 200;
	for (int r = 7; r > 3; r--)
	{
		X[r][4] = 186;
	}
	X[3][4] = 201;
	for (int c = 5; c < 20; c++)
	{
		X[3][c] = 205;
	}
	X[3][20] = 187;
	for (int r = 4; r < 14; r++)
	{
		X[r][20] = 186;
	}
	X[14][20] = 188;
	for (int c = 19; c > 17; c--)
	{
		X[14][c] = 205;
	}
	X[14][17] = 200;
	for (int r = 13; r > 10; r--)
	{
		X[r][17] = 186;
	}
	X[10][17] = 187;
	for (int c = 16; c > 8; c--)
	{
		X[10][c] = 205;
	}
	X[10][8] = 201;
	for (int r = 11; r < 16; r++)
	{
		X[r][8] = 186;
	}
	X[16][8] = 200;
	for (int c = 9; c < 40; c++)
	{
		X[16][c] = 205;
	}
	X[16][40] = 185;
	for (int r = 17; r < 18; r++)
	{
		X[r][40] = 186;
	}
	X[18][40] = 185;
	X[19][40] = 204;
	X[18][39] = 205;
	X[18][38] = 200;
	for (int r = 15; r > 11; r--)
	{
		X[r][40] = 186;
	}
	X[11][40] = 201;
	for (int c = 41; c < 45; c++)
	{
		X[11][c] = 205;
	}
	X[11][45] = 185;
	for (int r = 12; r < 17; r++)
	{
		X[r][45] = 186;
	}
	X[17][45] = 200;
	for (int c = 46; c < 50; c++)
	{
		X[17][c] = 205;
	}
	X[17][50] = 203;
	for (int r = 18; r < 23; r++)
	{
		X[r][50] = 186;
	}
	X[23][50] = 202;
	for (int r = 10; r > 7; r--)
	{
		X[r][45] = 186;
	}
	X[7][45] = 187;
	for (int c = 44; c > 37; c--)
	{
		X[7][c] = 205;
	}
	X[7][37] = 201;
	for (int r = 8; r < 14; r++)
	{
		X[r][37] = 186;
	}
	X[14][37] = 188;
	for (int c = 36; c > 25; c--)
	{
		X[14][c] = 205;
	}
	X[14][25] = 200;
	X[13][25] = 201;
	for (int c = 26; c < 34; c++)
	{
		X[13][c] = 205;
	}
	X[13][34] = 188;
	for (int r = 12; r > 10; r--)
	{
		X[r][34] = 186;
	}
	X[10][34] = 187;
	for (int c = 33; c > 25; c--)
	{
		X[10][c] = 205;
	}
	X[10][25] = 200;
	for (int r = 9; r > 3; r--)
	{
		X[r][25] = 186;
	}
	X[3][25] = 201;
	for (int c = 26; c < 55; c++)
	{
		X[3][c] = 205;
	}
	X[3][55] = 187;
	for (int r = 4; r < 17; r++)
	{
		X[r][55] = 186;
	}
	X[17][55] = 206;
	for (int c = 54; c > 50; c--)
	{
		X[17][c] = 205;
	}
	X[23][50] = 200;
	for (int c = 49; c > 44; c--)
	{
		X[23][c] = 32;
	}
	X[23][44] = 188;
	for (int r = 18; r < 21; r++)
	{
		X[r][55] = 186;
	}
	X[21][55] = 200;
	for (int c = 56; c < 70; c++)
	{
		X[21][c] = 205;
	}
	X[21][70] = 188;
	for (int r = 20; r > 17; r--)
	{
		X[r][70] = 186;
	}
	X[17][70] = 201;
	for (int c = 71; c < 79; c++)
	{
		X[17][c] = 205;
	}
	X[17][79] = 187;
	for (int c = 56; c < 62; c++)
	{
		X[17][c] = 205;
	}
	X[17][62] = 188;
	for (int r = 16; r > 13; r--)
	{
		X[r][62] = 186;
	}
	X[13][62] = 204;
	for (int c = 63; c < 79; c++)
	{
		X[13][c] = 205;
	}
	X[13][79] = 185;
	for (int r = 14; r < 17; r++)
	{
		X[r][79] = 32;
	}
	for (int r = 12; r > 8; r--)
	{
		X[r][62] = 186;
	}
	X[8][62] = 204;
	for (int c = 63; c < 79; c++)
	{
		X[8][c] = 205;
	}
	X[8][79] = 185;
	for (int r = 9; r < 13; r++)
	{
		X[r][79] = 32;
	}
	for (int r = 7; r > 3; r--)
	{
		X[r][62] = 186;
	}
	X[3][62] = 201;
	for (int c = 63; c < 79; c++)
	{
		X[3][c] = 205;
	}
	X[3][79] = 188;
	for (int r = 4; r < 8; r++)
	{
		X[r][79] = 32;
	}
}
int MoveHero_1(int& rHero, int& cHero, char ch, int x, int y, int f, unsigned char X[][80], int& robj, int& cobj)
{
	f = 0;
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
	if (f == 0)
	{
		x = 48;
		y = 48;
	}
	if (f == 1)
	{
		x = 48;
		y = 49;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 2)
	{
		x = 48;
		y = 50;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 3)
	{
		x = 48;
		y = 51;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 4)
	{
		x = 48;
		y = 52;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 5)
	{
		x = 48;
		y = 52;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 6)
	{
		x = 48;
		y = 53;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 7)
	{
		x = 48;
		y = 54;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 8)
	{
		x = 48;
		y = 55;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 9)
	{
		x = 48;
		y = 56;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	if (f == 10)
	{
		x = 49;
		y = 48;
		robj += 10;
		cobj -= 15;
		return robj;
		return cobj;
	}
	X[1][5] = x;
	X[1][6] = y;
	if (rHero == robj && cHero == cobj)
	{
		f++;
		return f;
		return robj;
		return cobj;

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
void SetObj(unsigned char X[][80], int robj, int cobj)
{
	X[robj][cobj] = 35;
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
	int robj = 3;
	int cobj = 70;
	int x = 48;
	int y=48;
	int f = 0;
	while (1)
	{
		while (!_kbhit())
		{
			
			Lo7aFania(X);
			SetEnmy_1(X, rEnmy1, cEnmy1);
			SetEnmy_2(X, rEnmy2, cEnmy2);
			MoveEnmy_1(rEnmy1, cEnmy1, dirEnmy_1);
			MoveEnmy_2(rEnmy2, cEnmy2, dirEnmy_2);
			SetObj(X, robj, cobj);
			SetHero_1(X, rHero, cHero);
			Disp(X);
		}
		char ch = _getch();
		MoveHero_1(rHero, cHero, ch, x, y, f, X, robj, cobj);
	}
	
}
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
//Display
void Disp(unsigned char X[][120], int& cs, int& ck)
{
	system("cls");
	for (int r = 0; r < 24; r++)
	{
		for (int c = cs; c < ck; c++)
		{
			cout << X[r][c];
		}
	}
	Sleep(10);
}
void Disp_2(unsigned char X[][120])
{
	system("cls");
	for (int r = 24; r < 48; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			cout << X[r][c];
		}
	}
	Sleep(10);
}
void Lo7aFania(unsigned char X[][120])
{
	//Border Disp 1
	for (int r = 0; r < 48; r++)
	{
		for (int c = 0; c < 120; c++)
		{
			X[r][c] = ' ';
		}
	}
	for (int c = 0; c < 120 - 1; c++)
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

	//Border Disp 2
	for (int c = 0; c < 120 - 1; c++)
	{
		X[24][c] = 205;
		X[47][c] = 205;
	}
	X[24][0] = 201;
	for (int r = 25; r < 48 - 1; r++)
	{
		X[r][0] = 186;
		X[r][80 - 1] = 186;
	}
	X[24][80 - 1] = 187;
	X[47][0] = 200;
	X[47][79] = 188;

	//Set Score
	X[1][1] = 'S';
	X[1][2] = 'C';
	X[1][3] = 'R';
	X[1][4] = ':';

	X[25][1] = 'S';
	X[25][2] = 'C';
	X[25][3] = 'R';
	X[25][4] = ':';

	//Score Box
	X[0][7] = 203;
	X[1][7] = 186;
	X[2][7] = 188;
	for (int c = 6; c > 0; c--)
	{
		X[2][c] = 205;
	}
	X[2][0] = 204;

	X[24][7] = 203;
	X[25][7] = 186;
	X[26][7] = 188;
	for (int c = 6; c > 0; c--)
	{
		X[26][c] = 205;
	}
	X[26][0] = 204;

	//Platforms
	X[20][0] = 204;
	for (int c = 1; c < 12; c++)
	{
		X[20][c] = 205;
	}
	X[20][12] = 187;
	X[21][12] = 186;
	X[22][12] = 200;
	for (int c = 13; c < 33; c++)
	{
		X[22][c] = 205;
	}
	X[22][33] = 188;
	X[21][33] = 201;
	X[21][34] = 205;
	X[21][35] = 188;
	X[20][35] = 201;
	for (int c = 36; c < 40; c++)
	{
		X[20][c] = 205;
	}
	X[20][42] = 205;
	X[20][43] = 187;
	X[21][43] = 204;
	X[22][43] = 186;
	X[23][43] = 202;

	X[20][50] = 201;
	X[21][50] = 185;
	X[22][50] = 186;
	X[23][50] = 202;
	for (int c = 44; c < 50; c++)
	{
		X[21][c] = 205;
	}
}
int SetEl1(unsigned char X[][120], int& rHero, int& cHero, int& t, int& rEl, int& cEl)
{
	X[rEl][cEl] = 287;
	if (rHero == rEl && cHero == cEl)
	{
		rEl = 26;
		cEl = 30;
		t = 1;
		return t;
	}
}
void SetLad(unsigned char X[][120])
{
	X[20][40] = 178;
	X[20][41] = 178;
	for (int r = 19; r > 16; r--)
	{
		X[r][40] = 178;
	}
	for (int r = 19; r > 16; r--)
	{
		X[r][41] = 178;
	}
	X[16][40] = 240;
	X[16][41] = 240;
}
void SetScr(unsigned char X[][120], int& cobj)
{
	int i;
	int f = 48;
	int y[10];
	int g = 48;
	for (i = 0; i < 10; i++)
	{
		y[i] = g;
		g++;
	}
	if (cobj == 11)
	{
		f = y[1];
	}
	if (cobj == 22)
	{
		f = y[2];
	}
	if (cobj == 72)
	{
		f = y[3];
	}
	if (cobj == 20)
	{
		f = y[4];
	}
	if (cobj == 29)
	{
		f = y[5];
	}
	X[1][6] = f;
	X[1][5] = 48;
	X[25][6] = f;
	X[25][5] = 48;
}
//Set Enemies
void SetEnmy_1(unsigned char X[][120], int rEnmy, int cEnmy, int& rHero, int& cHero)
{
	X[rEnmy][cEnmy] = 179;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy - 1][cEnmy] = 220;
	X[rEnmy + 1][cEnmy - 1] = 47;
	X[rEnmy + 1][cEnmy + 1] = 92;
	if (rHero == rEnmy && cHero == cEnmy )
	{
		rHero = 19;
		cHero = 4;
	}
}
void SetEnmy_2(unsigned char X[][120], int rEnmy, int cEnmy, int& rHero, int& cHero)
{
	X[rEnmy - 1][cEnmy] = 220;
	X[rEnmy][cEnmy] = 179;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy + 1] = 92;
	X[rEnmy + 1][cEnmy - 1] = 47;
	if (rHero == rEnmy && cHero == cEnmy)
	{
		rHero = 20;
		cHero = 4;
	}
}
void SetEnmy_3(unsigned char X[][120], int rEnmy, int cEnmy, int& rHero, int& cHero)
{
	X[rEnmy - 1][cEnmy] = 220;
	X[rEnmy][cEnmy] = 179;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy + 1] = 92;
	X[rEnmy + 1][cEnmy - 1] = 47;
	if (rHero == rEnmy && cHero == cEnmy)
	{
		rHero = 20;
		cHero = 4;
	}
}
void SetEnmy_4(unsigned char X[][120], int rEnmy, int cEnmy, int& rHero, int& cHero)
{
	X[rEnmy - 1][cEnmy] = 220;
	X[rEnmy][cEnmy] = 179;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy + 1] = 92;
	X[rEnmy + 1][cEnmy - 1] = 47;
	if (rHero == rEnmy && cHero == cEnmy)
	{
		rHero = 20;
		cHero = 4;
	}
}
void SetEnmy_5(unsigned char X[][120], int rEnmy, int cEnmy, int& rHero, int& cHero)
{
	X[rEnmy - 1][cEnmy] = 220;
	X[rEnmy][cEnmy] = 179;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy + 1] = 92;
	X[rEnmy + 1][cEnmy - 1] = 47;
	if (rHero == rEnmy && cHero == cEnmy)
	{
		rHero = 20;
		cHero = 4;
	}
}
void SetEnmy_6(unsigned char X[][120], int rEnmy, int cEnmy, int& rHero, int& cHero)
{
	X[rEnmy - 1][cEnmy] = 220;
	X[rEnmy][cEnmy] = 179;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy + 1] = 92;
	X[rEnmy + 1][cEnmy - 1] = 47;
	if (rHero == rEnmy && cHero == cEnmy)
	{
		rHero = 20;
		cHero = 4;
	}
}
//Set Hero
void SetHero_1(unsigned char X[][120], int rHero, int cHero)
{
	X[rHero][cHero] = 179;
	X[rHero][cHero + 1] = 196;
	X[rHero][cHero - 1] = 196;
	X[rHero - 1][cHero] = 1;
	X[rHero + 1][cHero - 1] = 47;
	X[rHero + 1][cHero + 1] = 92;
}
void SetHero_2(unsigned char X[][120], int rHero2, int cHero2)
{
	X[rHero2][cHero2] = 179;
	X[rHero2][cHero2 + 1] = 196;
	X[rHero2][cHero2 - 1] = 196;
	X[rHero2 - 1][cHero2] = 1;
	X[rHero2 + 1][cHero2 - 1] = 47;
	X[rHero2 + 1][cHero2 + 1] = 92;
}
//Set Object
int SetObj(unsigned char X[][120], int& robj, int& cobj, int& rHero, int& cHero, int& t)
{
	X[robj][cobj] = 219;
	if (rHero == robj && cHero == cobj && cobj == 70 && robj == 3)
	{
		cobj = 11;
		robj = 9;
	}
	else if (rHero == robj && cHero == cobj && cobj == 11 && robj == 9)
	{
		cobj = 22;
		robj = 22;
	}
	else if (rHero == robj && cHero == cobj && cobj == 22 && robj == 22)
	{
		cobj = 72;
		robj = 17;
	}
	else if (rHero == robj && cHero == cobj && cobj == 72 && robj == 17)
	{
		cobj = 20;
		robj = 18;
	}
	else if (rHero == robj && cHero == cobj && cobj == 20 && robj == 18)
	{
		cobj = 29;
		robj = 30;
	}
	else if (rHero == robj && cHero == cobj && cobj == 29 && robj == 30)
	{
		cobj = 30;
		robj = 30;
		t = 0;
		return t;
	}
}
//Move Enemies
void MoveEnmy_1(int& cEnmy, int& dir)
{
	if (dir == 1)
	{
		cEnmy++;
		if (cEnmy == 32)
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		cEnmy--;
		if (cEnmy == 13)
		{
			dir = 1;
		}
	}
}
void MoveEnmy_2(int& rEnmy, int& dir)
{
	if (dir == 1)
	{
		rEnmy--;
		if (rEnmy == 10)
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		rEnmy++;
		if (rEnmy == 18)
		{
			dir = 1;
		}
	}
}
void MoveEnmy_3(int& cEnmy, int& dir)
{
	if (dir == 1)
	{
		cEnmy++;
		if (cEnmy == 15)
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		cEnmy--;
		if (cEnmy == 2)
		{
			dir = 1;
		}
	}
}
void MoveEnmy_4(int& rEnmy, int& dir)
{
	if (dir == 1)
	{
		rEnmy--;
		if (rEnmy == 13)
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		rEnmy++;
		if (rEnmy == 20)
		{
			dir = 1;
		}
	}
}	
void MoveEnmy_5(int& cEnmy, int& dir)
{
	if (dir == 1)
	{
		cEnmy++;
		if (cEnmy == 67)
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		cEnmy--;
		if (cEnmy == 62)
		{
			dir = 1;
		}
	}
}
void MoveEnmy_6(int& cEnmy, int& dir)
{
	if (dir == 1)
	{
		cEnmy++;
		if (cEnmy == 67)
		{
			dir = 2;
		}
	}
	if (dir == 2)
	{
		cEnmy--;
		if (cEnmy == 62)
		{
			dir = 1;
		}
	}
}
//Move Hero
int jmpr(int& rHero, int& cHero, int& j, int& t, int& rHero2, int& cHero2)
{
	if (t == 0)
	{
		rHero += 2;
		cHero++;
	}
	else if (t == 1)
	{
		rHero2 += 2;
		cHero2++;
	}
	j = 0;
	return j;
}
int jmpl(int& rHero, int& cHero, int& j, int& t, int& rHero2, int& cHero2)
{
	if (t == 0)
	{
		rHero += 2;
		cHero--;
	}
	else if (t == 1)
	{
		rHero2 += 2;
		cHero2--;
	}
	j = 0;
	return j;
}
int Grav(int& rHero, int& cHero, int& j, unsigned char X[][120])
{
	if (X[rHero + 1][cHero] == 32)
	{
		j = 0;
		return j;
	}
	else if (X[rHero + 1][cHero] != 205)
	{
		rHero++;
		j = 0;
		return j;
	}
}
void Ladder(int& rHero, int& cHero, unsigned char X[][120])
{
	if (X[rHero + 1][cHero] == 178)
	{
		rHero--;
	}
}
int MoveHero_1(int& rHero, int& cHero, char ch, unsigned char X[][120], int& robj, int& cobj, int& t, int& j, int& cs, int& ck, int& hfr, int& hfl)
{
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
	if (ch == 'w')
	{
		rHero--;
	}
	if (ch == 'l')
	{
		rHero -= 2;
		cHero++;
		j = 1;
		return j;
	}
	if (ch == 'k')
	{
		rHero -= 2;
		cHero--;
		j = 2;
		return j;
	}
	if (cHero > hfr)
	{
		if (ck < 120)
		{
			ck++;
			cs++;
		}
		hfr++;
		hfl = hfr - 1;
		return cs, ck, hfr, hfl;
	}
	if (cHero < hfl)
	{
		if (cs > 0)
		{
			cs--;
			ck--;
		}
		else if (cs == 0)
		{
			hfr = 40;
		}
		hfl--;
		hfr--;
		return cs, ck, hfr, hfl;
	}
}
int MoveHero_2(int& rHero2, int& cHero2, char ch, unsigned char X[][120], int& robj, int& cobj, int& t, int& j)
{
	if (ch == 's')
	{
		rHero2++;
	}
	if (ch == 'a')
	{
		cHero2--;
	}
	if (ch == 'd')
	{
		cHero2++;
	}
	if (ch == 'w')
	{
		rHero2--;
	}
	if (ch == 'l')
	{
		rHero2 -= 2;
		cHero2++;
		j = 1;
		return j;
	}
	if (ch == 'k')
	{
		rHero2 -= 2;
		cHero2--;
		j = 2;
		return j;
	}
}
//Main
void main()
{
	// Char
	unsigned char X[48][120];
	int cs = 0;
	int ck = 80;
	int hfr = ck / 2;
	int hfl = 0;

	//Elevator
	int rEl = 22;
	int cEl = 46;

	//Enemy1
	int rEnmy1 = 21;
	int cEnmy1 = 20;
	int dirEnmy_1 = 1;

	//Enemy 2
	int rEnmy2 = 16;
	int cEnmy2 = 40;
	int dirEnmy_2 = 2;

	//Enemy 3
	int rEnmy3 = 8;
	int cEnmy3 = 8;
	int dirEnmy_3 = 1;

	//Enemy 4
	int rEnmy4 = 17;
	int cEnmy4 = 55;
	int dirEnmy_4 = 1;

	//Enemy 5
	int rEnmy5 = 7;
	int cEnmy5 = 67;
	int dirEnmy_5 = 2;

	//Enemy 6
	int rEnmy6 = 12;
	int cEnmy6 = 67;
	int dirEnmy_6 = 2;

	//Hero
	int rHero = 19;
	int cHero = 4;
	int rHero2 = 32;
	int cHero2 = 19;

	//Object
	int robj = 3;
	int cobj = 70;
	int t = 0;
	int j = 0;

	while (1)
	{
		while (!_kbhit())
		{
			Lo7aFania(X);
			SetLad(X);
			SetEl1(X, rHero, cHero, t, rEl, cEl);

			//SetEnemy
			SetEnmy_1(X, rEnmy1, cEnmy1, rHero, cHero);
			//SetEnmy_2(X, rEnmy2, cEnmy2, rHero, cHero);
			//SetEnmy_3(X, rEnmy3, cEnmy3, rHero, cHero);
			//SetEnmy_4(X, rEnmy4, cEnmy4, rHero, cHero);
			//SetEnmy_5(X, rEnmy5, cEnmy5, rHero, cHero);
			//SetEnmy_6(X, rEnmy6, cEnmy6, rHero, cHero);

			//MoveEnemy
			//MoveEnmy_1(cEnmy1, dirEnmy_1);
			//MoveEnmy_2(rEnmy2, dirEnmy_2);
			//MoveEnmy_3(cEnmy3, dirEnmy_3);
			//MoveEnmy_4(rEnmy4, dirEnmy_4);
			//MoveEnmy_5(cEnmy5, dirEnmy_5);
			//MoveEnmy_6(cEnmy6, dirEnmy_6);

			//Object
			SetObj(X, robj, cobj, rHero, cHero, t);

			//Score
			SetScr(X, cobj);

			if (t == 0)
			{
				SetHero_1(X, rHero, cHero);
				Disp(X, cs, ck);
			}
			else if(t == 1)
			{
				SetHero_2(X, rHero2, cHero2);
				Disp_2(X);
			}

			if (j == 1)
			{
				//jmpr(rHero, cHero, j, t, rHero2, cHero2);
			}
			if (j == 2)
			{
				//jmpl(rHero, cHero, j, t, rHero2, cHero2);
			}
			//Grav(rHero, cHero, j, X);
			Ladder(rHero, cHero, X);
		}
		if (t == 0)
		{
			char ch = _getch();
			MoveHero_1(rHero, cHero, ch, X, robj, cobj, t, j, cs, ck, hfr, hfl);
		}
		else if (t == 1)
		{
			char ch = _getch();
			MoveHero_2(rHero2, cHero2, ch, X, robj, cobj, t, j);
		}
	}
}
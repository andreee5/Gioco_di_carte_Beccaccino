//Progetto beccaccino Andrea Sartoni e Nicolo' Pietro Zanin
#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<iterator>
#include<windows.h>
#include<time.h>
#include<conio.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
void cursoroff() {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CCI;
	GetConsoleCursorInfo(hOut, &CCI);
	CCI.bVisible = false;
	SetConsoleCursorInfo(hOut, &CCI);
}
void gotoxy(int column, int line) {
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void SetColor(unsigned short color) {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

struct c
{
	int valore;
	string seme;
};

int TITOLO()
{
	int x = 72, i, j;
	bool gioco = true;
	system("color E9");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                   " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "                                                                        " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "                                                                        " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << "   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "   " << (char)219 << (char)219 << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << " " << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "   " << (char)219 << (char)219 << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << " " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "   " << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "      " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "    " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "                                                                        " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << "                                                                        " << (char)219 << (char)219 << endl;
	cout << "                   " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
	_getch();
	while (true) {
		system("CLS");
		cout << endl << endl << endl;
		cout << "                                         " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "             MENU'             " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "   0) USCITA DAL GIOCO         " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "  " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << "   " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "   1) VISUALIZZA REGOLAMENTO   " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "  " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << " " << (char)196 << (char)196 << "   " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "   2) INIZIA A GIOCARE         " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)186 << "   INSERIRE IL NUMERO:         " << (char)186 << endl;
		cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
		cout << "                                         " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		gotoxy(68, 21);
		cin >> i;
		cout << endl;
		switch (i) {
		case 0:
			system("CLS");
			cout << endl << endl << endl << endl << endl;
			cout << "                            " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
			cout << "                            " << (char)186 << "                                                         " << (char)186 << endl;
			cout << "                            " << (char)186 << "                   USCITA DAL PROGRAMMA                  " << (char)186 << endl;
			cout << "                            " << (char)186 << "                                                         " << (char)186 << endl;
			cout << "                            " << (char)186 << "      GRAZIE PER AVER GIOCATO A MARAFONE BECCACCINO" << (char)19 << "     " << (char)186 << endl;
			cout << "                            " << (char)186 << "                           " << (char)1 << "                             " << (char)186 << endl;
			cout << "                            " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
			cout << endl << endl << endl << endl << endl << endl;
			return false;
		case 1:
			while (gioco == true) {
				system("CLS");
				cout << endl;
				cout << "                                         " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
				cout << "                                         " << (char)186 << "         REGOLAMENTO:          " << (char)186 << endl;
				cout << "                                         " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl << endl;
				cout << "                                          Su cosa ci si vuole informare?" << endl << endl;
				cout << "                                     " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
				cout << "                                     0 " << (char)16 << " USCITA DAL REGOLAMENTO" << endl << endl;
				cout << "                                     1 " << (char)16 << " Consigli" << endl << endl;
				cout << "                                     2 " << (char)16 << " Regole generali" << endl << endl;
				cout << "                                     3 " << (char)16 << " Regole sulla distribuzione delle carte" << endl << endl;
				cout << "                                     4 " << (char)16 << " Regole per contare i punti" << endl << endl;
				cout << "                                     " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl << endl;
				cout << "                                             INSERIRE IL NUMERO:" << endl << endl;
				cout << "                                     " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
				gotoxy(68, 20);
				cin >> j;
				cout << endl << endl << endl << endl;
				if (j == 0)
					gioco = false;
				else if (j == 1) {
					cout << "              1) State attenti a dichiarare la briscola." << endl << endl;
					cout << "                 Inoltre, per dichiarare la briscola dovete contare quante carte avete di ciascun seme." << endl << endl << endl << endl << endl << endl;
					system("PAUSE");
				}
				else if (j == 2) {
					cout << "  2) Per giocare a Marafone Beccacino, e' bene che sappiate, che si tratta di un gioco di carte da tavolo da " << endl;
					cout << "     poter svolgere in 4 giocatori." << endl << endl;
					cout << "     Il mazzo di carte che deve necessariamente essere utilizzato e' il mazzo di carte romagnole." << endl << endl;
					cout << "     Un mazzo di carte e' composto da 10 carte per ogni seme, e i semi sono 4: denari, coppe, bastoni e spade." << endl << endl;
					cout << "     Il valore delle carte segue la seguente gerarchia: 3, 2, asso, re, fante, donna, 7, 6, 5, 4. " << endl << endl;
					cout << "     Le carte che vanno dal 7 al 4 sono chiamate le carte 'scartini', che nei seguenti passi viene spiegato il " << endl;
					cout << "     significato." << endl << endl << endl << endl << endl;
					system("PAUSE");
				}
				else if (j == 3) {
					cout << "  3) Il gioco si svolge da 4 giocatori che pero' formano 2 coppie, infatti, ognuno dei giocatori si siede " << endl << endl;
					cout << "     attorno ad un tavolo quadrato, e i giocatori che stanno uno di fronte all'altro formano una coppia." << endl << endl;
					cout << "     Tale sistemazione permette la giocata alternata tra le 2 coppie." << endl << endl;
					cout << "     Si dividono 10 carte ciascuno e si inizia dal giocatore che avra' tra le sue carte il 4 di denari che " << endl;
					cout << "     dichiarera' il seme della briscola." << endl << endl;
					cout << "     Dopodiche' puo' decidere che carta buttare e di norma si segue il segno della prima carta lanciata in " << endl;
					cout << "     quanto e' la carta predominante e vince chi lancia la carta del valore piu' alto ed effettua la cosidetta " << endl;
					cout << "     presa raccogliendo le 4 carte che sono a terra." << endl << endl;
					cout << "     Se non si hanno carte dello stesso seme allora si puo' scegliere tra due alternative o buttare una carta " << endl;
					cout << "     di seme diverso tra quelle chiamate scartine, in quanto non hanno nessun valore, o buttare una briscola " << endl;
					cout << "     che vince sugli altri semi." << endl << endl;
					cout << "     Attenzione pero', se un altro giocatore buttera' anch'esso una briscola con un valore piu' alto, vincera' " << endl;
					cout << "     rispetto alla prima briscola lanciata." << endl << endl << endl << endl << endl;
					system("PAUSE");
				}
				else if (j == 4) {
					cout << "  4) Le carte hanno valori diversi e alla fine del gioco, ossia quando nessun giocatore ha piu' carte in  " << endl;
					cout << "     mano, si devono contare i punti di ciascuna coppia." << endl << endl;
					cout << "     Quindi i due giocatori della stessa squadra uniscono le loro carte frutto delle loro prese vincenti " << endl;
					cout << "     e vanno a contare i relativi punti." << endl << endl;
					cout << "     Sappiamo che le carte dal 7 al 4 non hanno valore in quanto carte scartini, invece gli assi valgono " << endl;
					cout << "     un punto. Le dodici figure e i due e i tre, invece, valgono 1/3 di punto." << endl << endl;
					cout << "     La coppia che per prima arriva a 41 punti vince." << endl << endl << endl << endl << endl << endl;
					system("PAUSE");
				}
			}
			break;
		case 2:
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
			return true;
		}
	}
}

void carica(vector<c>& x)
{
	struct c app; //variabile d'appoggio
	ifstream fr;
	fr.open("mazzo.txt");
	while (fr >> app.valore >> app.seme) {
		x.push_back(app); //inserimento nel vector
	}
	fr.close();
}

void stampa(vector<c>x)
{
	vector <c> ::iterator i; //iteratore
	struct c app; //variabile d�appoggio
	for (i = x.begin(); i < x.end(); i++) {
		app = *i;
		cout << app.valore << " di " << app.seme << "\n";
	}
}

void distribuire(int* start, vector<c>x, vector<c>& c1, vector<c>& c2, vector<c>& c3, vector<c>& c4)
{
	vector <c> ::iterator i;
	int j = 0;
	struct c card;
	struct c startcard = { 4, "denari" };
	for (i = x.begin(); i < x.end(); i++) {
		card = *i;
		if (card.seme == startcard.seme && card.valore == startcard.valore)
			*start = (j % 4) + 1;
		if (j % 4 == 0) {
			c1.push_back(card);
		}
		if (j % 4 == 1) {
			c2.push_back(card);
		}
		if (j % 4 == 2) {
			c3.push_back(card);
		}
		if (j % 4 == 3) {
			c4.push_back(card);
		}
		j++;
	}
}

/*void assign(int max, vector<c>&c1, vector<c>&c2, vector<c>&c3, vector<c>&c4)
{
	vector<c>a;
	if(max==2){
		a.assign(c1.begin(), c1.end());
		c1.assign(c2.begin(), c2.end());
		c2.assign(c3.begin(), c3.end());
		c3.assign(c4.begin(), c4.end());
		c4.assign(a.begin(), a.end());
	}
	else if(max==3){
		a.assign(c1.begin(), c1.end());
		c1.assign(c3.begin(), c3.end());
		c3.assign(a.begin(), a.end());
		a.assign(c2.begin(), c2.end());
		c2.assign(c4.begin(), c4.end());
		c4.assign(a.begin(), a.end());
	}
	else if(max==4){
		a.assign(c1.begin(), c1.end());
		c1.assign(c4.begin(), c4.end());
		c4.assign(c3.begin(), c3.end());
		c3.assign(c2.begin(), c2.end());
		c2.assign(a.begin(), a.end());
	}
}*/

void visualizzacarta(int c, int r, struct c app)
{
	int colore;
	if (app.seme == "bastoni") {
		colore = 242;
	}
	else if (app.seme == "coppe") {
		colore = 244;
	}
	else if (app.seme == "spade") {
		colore = 241;
	}
	else if (app.seme == "denari") {
		colore = 246;
	}
	SetColor(colore);
	gotoxy(c, r);
	if (app.valore == 1) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "   " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)187 << "    " << (char)186 << "   " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << "    " << (char)186 << "    " << (char)186 << "   " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << "    " << (char)186 << "    " << (char)186 << "   " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << "    " << (char)186 << "    " << (char)186 << "   " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)188 << "    " << (char)200 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << " " << (char)186 << "         " << (char)186 << " " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 2) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << "        " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << " " << (char)186 << "  " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << " " << (char)186 << "  " << (char)186 << "        " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << " " << (char)186 << "  " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 3) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "   " << (char)186 << " " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << "       " << (char)186 << "   " << (char)186 << " " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "   " << (char)186 << " " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "   " << (char)186 << " " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "       " << (char)186 << "   " << (char)186 << " " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "   " << (char)186 << " " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 4) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)187 << "   " << (char)201 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)186 << "  " << (char)186 << "   " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << " " << (char)186 << "  " << (char)186 << "   " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << " " << (char)186 << "  " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "        " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << "        " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << "        " << (char)200 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 5) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)186 << "  " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << " " << (char)186 << "  " << (char)186 << "        " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << " " << (char)186 << "  " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "        " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 6) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)186 << "  " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << " " << (char)186 << "  " << (char)186 << "        " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << " " << (char)186 << "  " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << " " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << " " << (char)186 << "  " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << " " << (char)186 << "  " << (char)186 << "   " << (char)186 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << " " << (char)186 << "  " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << "  " << (char)186 << " " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << " " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 7) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "  " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << " " << (char)186 << "        " << (char)186 << "  " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "   " << (char)186 << "  " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << "      " << (char)186 << "   " << (char)186 << "  " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << "      " << (char)186 << "   " << (char)186 << "  " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "      " << (char)186 << "   " << (char)186 << "  " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << "      " << (char)186 << "   " << (char)186 << "  " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << "      " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << "  " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 8) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " F  " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << (char)245 << "   " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << "   " << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << "   " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << "    " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << "    " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << "    " << (char)200 << (char)205 << (char)203 << (char)205 << (char)188 << "    " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << "    " << (char)200 << (char)205 << (char)206 << (char)205 << (char)188 << "    " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "      " << (char)186 << "      " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << "    " << (char)201 << (char)205 << (char)202 << (char)205 << (char)187 << "    " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << "    " << (char)188 << "   " << (char)200 << "    " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 9) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " C           " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << "     " << (char)94 << " " << (char)94 << "     " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << "   *******" << "   " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << "  *********" << "  " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << "  ****  ****" << " " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "  *****   **" << " " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << "  ******" << "     " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << " *********" << "   " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
	else if (app.valore == 10) {
		cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
		gotoxy(c, r + 1);
		cout << (char)186 << " R  " << (char)30 << (char)30 << (char)30 << (char)30 << (char)30 << "    " << (char)186;
		gotoxy(c, r + 2);
		cout << (char)186 << "    " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << "    " << (char)186;
		gotoxy(c, r + 3);
		cout << (char)186 << "    " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << "    " << (char)186;
		gotoxy(c, r + 4);
		cout << (char)186 << "    " << (char)200 << (char)205 << (char)203 << (char)205 << (char)188 << "    " << (char)186;
		gotoxy(c, r + 5);
		cout << (char)186 << "    " << (char)200 << (char)205 << (char)206 << (char)205 << (char)188 << "    " << (char)186;
		gotoxy(c, r + 6);
		cout << (char)186 << "      " << (char)186 << "      " << (char)186;
		gotoxy(c, r + 7);
		cout << (char)186 << "    " << (char)201 << (char)205 << (char)202 << (char)205 << (char)187 << "    " << (char)186;
		gotoxy(c, r + 8);
		cout << (char)186 << "    " << (char)188 << "   " << (char)200 << "    " << (char)186;
		gotoxy(c, r + 9);
		cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	}
}

void den()
{
	SetColor(246);
	gotoxy(65, 5);
	cout << "    ************    ";
	gotoxy(65, 6);
	cout << "  ****************  ";
	gotoxy(65, 7);
	cout << " ****************** ";
	gotoxy(65, 8);
	cout << "******  " << (char)30 << (char)30 << (char)30 << (char)30 << "  ******";
	gotoxy(65, 9);
	cout << "***** " << (char)17 << " " << (char)15 << "  " << (char)15 << " " << (char)16 << " *****";
	gotoxy(65, 10);
	cout << "***** " << (char)17 << " " << (char)126 << (char)126 << (char)126 << (char)126 << " " << (char)16 << " *****";
	gotoxy(65, 11);
	cout << "******  " << (char)31 << (char)31 << (char)31 << (char)31 << "  ******";
	gotoxy(65, 12);
	cout << " ****************** ";
	gotoxy(65, 13);
	cout << "  ****************  ";
	gotoxy(65, 14);
	cout << "    ************    ";
	gotoxy(72, 15);
	cout << "DENARI";
}

void spa()
{
	SetColor(241);
	gotoxy(55, 5);
	cout << "    " << (char)30;
	gotoxy(55, 6);
	cout << "   " << (char)30 << (char)30 << (char)30;
	gotoxy(55, 7);
	cout << "   " << (char)178 << (char)4 << (char)178;
	gotoxy(55, 8);
	cout << "   " << (char)178 << (char)4 << (char)178;
	gotoxy(55, 9);
	cout << "   " << (char)178 << (char)4 << (char)178;
	gotoxy(55, 10);
	cout << "   " << (char)178 << (char)4 << (char)178;
	gotoxy(55, 11);
	cout << "   " << (char)178 << (char)4 << (char)178;
	gotoxy(55, 12);
	cout << "   " << (char)178 << (char)4 << (char)178;
	gotoxy(55, 13);
	cout << "<#######>";
	gotoxy(55, 14);
	cout << "   ###";
	gotoxy(55, 15);
	cout << "   ###";
	gotoxy(55, 16);
	cout << "    " << (char)12;
	gotoxy(57, 17);
	cout << "SPADE";
}

void cop()
{
	SetColor(244);
	gotoxy(35, 5);
	cout << "  " << (char)21 << (char)21 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)21 << (char)21;
	gotoxy(35, 6);
	cout << " " << (char)21 << "   " << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << "   " << (char)21;
	gotoxy(35, 7);
	cout << " " << (char)21 << "  " << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << "  " << (char)21;
	gotoxy(35, 8);
	cout << "  " << (char)21 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)21;
	gotoxy(35, 9);
	cout << "    " << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223;
	gotoxy(35, 10);
	cout << "     " << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223;
	gotoxy(35, 11);
	cout << "         " << (char)223 << (char)223;
	gotoxy(35, 12);
	cout << "        " << (char)223 << (char)223 << (char)223 << (char)223;
	gotoxy(35, 13);
	cout << "       " << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223;
	gotoxy(35, 14);
	cout << "      " << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223 << (char)223;
	gotoxy(42, 15);
	cout << "COPPE";
}

void bas()
{
	SetColor(242);
	gotoxy(20, 5);
	cout << "      ######";
	gotoxy(20, 6);
	cout << "     #########";
	gotoxy(20, 7);
	cout << "     **#######";
	gotoxy(20, 8);
	cout << "     #**######";
	gotoxy(20, 9);
	cout << "      #**####";
	gotoxy(20, 10);
	cout << "       #**###";
	gotoxy(20, 11);
	cout << "       ##**#";
	gotoxy(20, 12);
	cout << "       ####*";
	gotoxy(20, 13);
	cout << "       ####";
	gotoxy(20, 14);
	cout << "       ####";
	gotoxy(20, 15);
	cout << "       ####";
	gotoxy(26, 16);
	cout << "BASTONI";
}

string sceltabriscola(vector<c>carte)
{
	vector <c> ::iterator it;
	struct c app;
	char controllo;
	int k, r, selezione = 15, scelta = 0;
	SetColor(240);
	do {
		system("CLS");
		k = 7;
		SetColor(240);
		gotoxy(14 + selezione, 18);  //selezione � la variabile che segue le frecce destra e sinistra
		printf("%c", (char)30);
		gotoxy(14 + selezione, 19);
		printf("%c", (char)186);
		gotoxy(40, 2);
		SetColor(245);
		cout << "____SELEZIONARE BRISCOLA____";
		bas();
		cop();
		spa();
		den();
		gotoxy(7, 26);
		cout << "CARTE GIOCATORE:" << endl;
		r = 28;
		for (it = carte.begin(); it < carte.end(); it++) {
			app = *it;
			visualizzacarta(k, r, app);
			k = k + 16;
		}
		controllo = _getch();
		if ((int)controllo == 77 && selezione != 60) {
			selezione = selezione + 15; //mi muovo con i tasti freccia destra saltando una colonna
		}
		if ((int)controllo == 75 && selezione != 15) {
			selezione = selezione - 15; //o freccia sinistra saltando una colonna
		}
		if ((int)controllo == 13) {
			scelta = 1; //quando clicco invio significa che ho scelto
		}
	} while (scelta != 1);
	system("CLS");
	selezione = selezione / 15;
	switch (selezione) {
	case 1:
		return "bastoni";
	case 2:
		return "coppe";
	case 3:
		return "spade";
	case 4:
		return "denari";
	}
}

void vettorecarte(int* l, struct c carta, int v[10], vector<c>& carte)
{
	vector <c> ::iterator i;
	int j = 0, k = 0;
	struct c app;
	for (i = carte.begin(); i < carte.end(); i++) {
		app = *i;
		if (carta.seme == app.seme) {
			v[j] = k;
			j++;
		}
		k++;
	}
	*l = j;
}

void legenda(string briscola)
{
	cout << endl << endl << endl;
	cout << "   " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << "   " << (char)186 << "                               " << (char)186 << endl;
	cout << "   " << (char)186 << "           LEGENDA             " << (char)186 << endl;
	cout << "   " << (char)186 << "                               " << (char)186 << endl;
	cout << "   " << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
	cout << "   " << (char)186 << "                               " << (char)186 << endl;
	cout << "   " << (char)186 << "                               " << (char)186 << endl;
	cout << "   " << (char)186 << "      Bastoni:   verde         " << (char)186 << endl;
	cout << "   " << (char)186 << "      Coppe:     rosso         " << (char)186 << endl;
	cout << "   " << (char)186 << "      Spade:     blu           " << (char)186 << endl;
	cout << "   " << (char)186 << "      Denari:    oro           " << (char)186 << endl;
	cout << "   " << (char)186 << "      F:         fante         " << (char)186 << endl;
	cout << "   " << (char)186 << "      C:         cavallo       " << (char)186 << endl;
	cout << "   " << (char)186 << "      R:         re            " << (char)186 << endl;
	cout << "   " << (char)186 << "                               " << (char)186 << endl;
	cout << "   " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	gotoxy(10, 10);
	cout << "Briscola:  " << briscola << endl;
}

void visualizzatavoloverde()
{
	int i, j;
	SetColor(160);
	gotoxy(54, 4);
	cout << (char)201;
	for (j = 0; j < 63; j++) {
		cout << (char)205;
	}
	cout << (char)187;
	for (i = 0; i < 15; i++) {
		gotoxy(54, 5 + i);
		cout << (char)186 << "                                                               " << (char)186;
	}
	gotoxy(54, 20);
	cout << (char)200;
	for (j = 0; j < 63; j++) {
		cout << (char)205;
	}
	cout << (char)188;
}

void visualizzacartesutavolo(struct c carta[4])
{
	int c, r;
	if (carta[2].valore != 0) {
		c = 99;
		r = 8;
		visualizzacarta(c, r, carta[0]);
		c = 79;
		r = 5;
		visualizzacarta(c, r, carta[1]);
		c = 59;
		r = 8;
		visualizzacarta(c, r, carta[2]);
	}
	else if (carta[1].valore != 0) {
		c = 79;
		r = 5;
		visualizzacarta(c, r, carta[0]);
		c = 59;
		r = 8;
		visualizzacarta(c, r, carta[1]);
	}
	else if (carta[0].valore != 0) {
		c = 59;
		r = 8;
		visualizzacarta(c, r, carta[0]);
	}
}

void visualizzacarte(int selezione, int N, string briscola, struct c carta[4], vector<c>carte)
{
	vector <c> ::iterator it; //iteratore
	struct c app; //variabile d�appoggio
	int k = 7, r;
	gotoxy(72, 1);
	cout << "____SELEZIONARE CARTA DA CALARE____";
	//	SetColor();
	legenda(briscola);
	visualizzatavoloverde();
	visualizzacartesutavolo(carta);
	SetColor(240);
	gotoxy(selezione, 40);  //selezione � la variabile che segue le frecce destra e sinistra
	printf("%c", (char)30);
	gotoxy(selezione, 41);
	printf("%c", (char)186);
	r = 28;
	for (it = carte.begin(); it < carte.end(); it++) {
		app = *it;
		visualizzacarta(k, r, app);
		k = k + 16;
	}
}

void punteggio(int l, int* punti, struct c carta[4])
{
	if (carta[l].valore == 1) {
		*punti = *punti + 3;
	}
	else if (carta[l].valore == 2 || carta[l].valore == 3 || carta[l].valore == 8 || carta[l].valore == 9 || carta[l].valore == 10) {
		*punti = *punti + 1;
	}
}

void controllopresa(int l, int* primog, string briscola, struct c app, struct c max)
{
	if (l == 0) {
		max = app;
		*primog = l + 1;
	}
	else if (app.seme == max.seme && app.valore > max.valore) {
		max = app;
		*primog = l + 1;
	}
	else if (briscola == app.seme) {
		max = app;
		*primog = l + 1;
	}
}

void sceltacarta(int l, int N, int* primog, int* punti, string briscola, struct c max, struct c carta[4], vector<c>& carte)
{
	vector <c> ::iterator it;
	struct c app;
	char controllo;
	int indice = 0, selezione, scelta = 0, j;
	int v[10];
	//	stampa(carte);
	//	system("PAUSE");
	if (max.valore == 0) {
		for (j = 0; j < N; j++) {
			v[j] = j;
		}
		indice = 10;
	}
	else {
		vettorecarte(&indice, carta[0], v, carte);
	}
	j = 0;
	selezione = 13 + 16 * v[0];
	do {
		system("CLS");
		visualizzacarte(selezione, N, briscola, carta, carte);
		controllo = _getch();
		if ((int)controllo == 77 && j < indice - 1) {
			j++;
			selezione = 13 + 16 * v[j]; //mi muovo con i tasti freccia destra saltando una riga
		}
		if ((int)controllo == 75 && j > 0) {
			j--;
			selezione = 13 + 16 * v[j]; //o freccia sinistra saltando una riga
		}
		if ((int)controllo == 13) {
			scelta = 1; //quando clicco invio significa che ho scelto
		}
	} while (scelta != 1);
	system("CLS");
	carta[l] = carte.at(v[j]);
	it = carte.begin() + v[j];
	carte.erase(it);
	punteggio(l, punti, carta);
	controllopresa(l, primog, briscola, carta[l], max);
}

int main()
{
	cursoroff();         // toglie il cursore
	int i, k, j, continuare, start, N = 10, primog, mazzetto[2], punti, puntifinali[2];
	mazzetto[0] = 0;
	mazzetto[1] = 0;
	puntifinali[0] = 0;
	puntifinali[1] = 0;
	string briscola;
	vector<c> mazzo, c1, c2, c3, c4;
	struct c max, carta[4];
	if (TITOLO()) {
		do {
			carica(mazzo);
			//			cout<<"STAMPA \n";
			//			stampa(mazzo);
			random_shuffle(mazzo.begin(), mazzo.end());
			//			cout<<"STAMPA mischiato\n";
			//			stampa(mazzo);
			distribuire(&start, mazzo, c1, c2, c3, c4);
			//  		assign(c1, c2, c3, c4);
			gotoxy(47, 24);
			cout << "INIZIA IL GIOCATORE " << start << endl;
			system("PAUSE");
			if (start == 1) {
				briscola = sceltabriscola(c1);
			}
			else if (start == 2) {
				briscola = sceltabriscola(c2);
			}
			else if (start == 3) {
				briscola = sceltabriscola(c3);
			}
			else if (start == 4) {
				briscola = sceltabriscola(c4);
			}
			for (i = 0; i < 10; i++) {
				max = { 0, "seme" };
				j = 0;
				punti = 0;
				for (k = 0; k < 4; k++) {
					carta[k] = { 0, "seme" };
				}
				while (j < 4) {
					if ((start + j) % 4 == 1) {
						sceltacarta(j, N, &primog, &punti, briscola, max, carta, c1);
					}
					else if ((start + j) % 4 == 2) {
						sceltacarta(j, N, &primog, &punti, briscola, max, carta, c2);
					}
					else if ((start + j) % 4 == 3) {
						sceltacarta(j, N, &primog, &punti, briscola, max, carta, c3);
					}
					else if ((start + j) % 4 == 0) {
						sceltacarta(j, N, &primog, &punti, briscola, max, carta, c4);
					}
					j++;
				}
				mazzetto[primog % 2] = mazzetto[primog % 2] + punti;
				start = primog;
				N--;
			}
			system("CLS");
			gotoxy(40, 30);
			if (mazzetto[0] % 3 == 1) {
				mazzetto[0] = mazzetto[0] - 1;
			}
			else if (mazzetto[0] % 3 == 2) {
				mazzetto[0] = mazzetto[0] - 2;
			}
			mazzetto[0] = mazzetto[0] / 3;
			if (mazzetto[1] % 3 == 1) {
				mazzetto[1] = mazzetto[1] - 1;
			}
			else if (mazzetto[1] % 3 == 2) {
				mazzetto[1] = mazzetto[1] - 2;
			}
			mazzetto[1] = mazzetto[1] / 3;
			if (mazzetto[1] > mazzetto[0]) {
				cout << "I vincitori della partita sono la coppia composta dai giocatori 1 e 3 con un punteggio di ";
			}
			else {
				cout << "I vincitori della partita sono la coppia composta dai giocatori 2 e 4";
			}
			puntifinali[0] = puntifinali[0] + mazzetto[0];
			puntifinali[1] = puntifinali[1] + mazzetto[1];
			system("CLS");
			cout << endl << endl << endl << endl << endl;
			cout << "                                         " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)186 << "           REGOLAMENTO         " << (char)186 << endl;
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl << endl;
			cout << "              Si vuole continuare a giocare e avviare una nuova partita correlata a quella precedente?" << endl << endl;
			cout << "                                             0 " << (char)16 << " NO, USCITA DAL GIOCO" << endl << endl;
			cout << "                                             1 " << (char)16 << " SI, CONTINUA A GIOCARE" << endl;
			cout << endl;
			cout << "                                         " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)186 << "   INSERIRE IL NUMERO:         " << (char)186 << endl;
			cout << "                                         " << (char)186 << "                               " << (char)186 << endl;
			cout << "                                         " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
			gotoxy(66, 19);
			cin >> continuare;
		} while (continuare == 1);
		system("CLS");
		cout << endl << endl;
		cout << "                                                " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "                                                " << (char)186 << "                                 " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)186 << "            SQUADRA:             " << (char)186 << "          PUNTEGGIO TOTALE:        " << (char)186 << endl;
		cout << "                                                " << (char)186 << "                                 " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
		cout << "                                                " << (char)186 << "                                 " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)186 << "         GIOCATORI 1 e 3         " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)186 << "                                 " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
		cout << "                                                " << (char)186 << "                                 " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)186 << "         GIOCATORI 2 e 4         " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)186 << "                                 " << (char)186 << "                                   " << (char)186 << endl;
		cout << "                                                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		gotoxy(101, 8);
		cout << puntifinali[1] << endl;
		gotoxy(101, 12);
		cout << puntifinali[0] << endl << endl << endl << endl << endl;
	}
	return 0;
}

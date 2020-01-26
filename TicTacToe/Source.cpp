#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int main() {
	srand(time(0));
	setlocale(0, "rus");
	int game = 0;
	do {
		int otv = 0;
		int pc = 0;

		char map1[5][5]{
			{'1','|','2','|','3'},
			{'-','|','-','|','-'},
			{'4','|','5','|','6'},
			{'-','|','-','|','-'},
			{'7','|','8','|','9'}
		};

		char map2[5][5]{
			{' ','|',' ','|',' '},
			{'-','|','-','|','-'},
			{' ','|',' ','|',' '},
			{'-','|','-','|','-'},
			{' ','|',' ','|',' '}
		};
		bool fl = true;
		while (fl && !(map2[0][0] == 'x'&& map2[0][2] == 'x'&& map2[0][4] == 'x' && map2[2][0] == 'x' && map2[2][2] == 'x' && map2[2][4] == 'x' && map2[4][0] == 'x' && map2[4][2] == 'x' && map2[4][4] == 'x') || (map2[0][0] == 'o'&& map2[0][2] == 'o'&& map2[0][4] == 'o' && map2[2][0] == 'o' && map2[2][2] == 'o' && map2[2][4] == 'o' && map2[4][0] == 'o' && map2[4][2] == 'o' && map2[4][4] == 'o')) {

			cout << "Вы играете за крестики \nВведите номер клетки " << endl;
			cout << "Карта " << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					cout << setw(3) << map1[i][j];
				}
				cout << endl;
			}
			///////////////////////////////////////////////////////////////////////////////////////////////
			bool f = true;
			while (f) {
				cin >> otv;
				if (otv == 1 && map2[0][0] == ' ') {
					map2[0][0] = 'x';
					f = false;
				}
				else if (otv == 2 && map2[0][2] == ' ') {
					map2[0][2] = 'x';
					f = false;
				}
				else if (otv == 3 && map2[0][4] == ' ') {
					map2[0][4] = 'x';
					f = false;
				}
				else if (otv == 4 && map2[2][0] == ' ') {
					map2[2][0] = 'x';
					f = false;
				}
				else if (otv == 5 && map2[2][2] == ' ') {
					map2[2][2] = 'x';
					f = false;
				}
				else if (otv == 6 && map2[2][4] == ' ') {
					map2[2][4] = 'x';
					f = false;
				}
				else if (otv == 7 && map2[4][0] == ' ') {
					map2[4][0] = 'x';
					f = false;
				}
				else if (otv == 8 && map2[4][2] == ' ') {
					map2[4][2] = 'x';
					f = false;
				}
				else if (otv == 9 && map2[4][4] == ' ') {
					map2[4][4] = 'x';
					f = false;
				}
			}
			////////////////////////////////////////////////////////////////////////////////
			//Ответ компьютера (рандомно выбирает позицию если она не занята и к этому элементу массива присваевается нолик)
			bool flag = true;
			while (flag) {
				pc = 1 + rand() % 9;
				if (map2[0][0] == ' ' && pc == 1) {
					map2[0][0] = 'o';
					flag = false;
				}
				else if (map2[0][2] == ' ' && pc == 2) {
					map2[0][2] = 'o';
					flag = false;
				}
				else  if (map2[0][4] == ' ' && pc == 3) {
					map2[0][4] = 'o';
					flag = false;
				}
				else if (map2[2][0] == ' ' && pc == 4) {
					map2[2][0] = 'o';
					flag = false;
				}
				else if (map2[2][2] == ' ' && pc == 5) {
					map2[2][2] = 'o';
					flag = false;
				}
				else if (map2[2][4] == ' ' && pc == 6) {
					map2[2][4] = 'o';
					flag = false;
				}
				else if (map2[4][0] == ' ' && pc == 7) {
					map2[4][0] = 'o';
					flag = false;
				}
				else if (map2[4][2] == ' ' && pc == 8) {
					map2[4][2] = 'o';
					flag = false;
				}
				else if (map2[4][4] == ' ' && pc == 9) {
					map2[4][4] = 'o';
					flag = false;
				}
			}

			////////////////////////////////////////////////////////////////////////////////
			system("cls");
			if (map2[0][0] == 'x'&&map2[0][2] == 'x'&&map2[0][4] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[2][0] == 'x'&&map2[2][2] == 'x'&&map2[2][4] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[4][0] == 'x'&&map2[4][2] == 'x'&&map2[4][4] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][0] == 'x'&&map2[2][0] == 'x'&&map2[4][0] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][2] == 'x'&&map2[2][2] == 'x'&&map2[4][2] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][4] == 'x'&&map2[2][4] == 'x'&&map2[4][4] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][0] == 'x'&&map2[2][2] == 'x'&&map2[4][4] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}
			else if (map2[4][0] == 'x'&&map2[2][2] == 'x'&&map2[0][4] == 'x') {
				cout << "Крестики выйграли " << endl;
				fl = false;
			}

			////////////////////////////////////////////////////////////////////////
			else if (map2[0][0] == 'o'&&map2[0][2] == 'o'&&map2[0][4] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[2][0] == 'o'&&map2[2][2] == 'o'&&map2[2][4] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[4][0] == 'o'&&map2[4][2] == 'o'&&map2[4][4] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][0] == 'o'&&map2[2][0] == 'o'&&map2[4][0] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][2] == 'o'&&map2[2][2] == 'o'&&map2[4][2] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][4] == 'o'&&map2[2][4] == 'o'&&map2[4][4] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[0][0] == 'o'&&map2[2][2] == 'o'&&map2[4][4] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			else if (map2[4][0] == 'o'&&map2[2][2] == 'o'&&map2[0][4] == 'o') {
				cout << "Нолики выйграли " << endl;
				fl = false;
			}
			/////////////////////////////////////////////////////////////
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					cout << setw(3) << map2[i][j];
				}
				cout << endl;
			}
		}
		cout << "Хотите повторить? Нажмите 1 " << endl;
	}while (cin>>game && game == 1);
		system("pause");
		} 
	






#include <iostream>
#include <locale.h>
#include <string.h>
#include <conio.h>


using namespace std;

struct Sotr
{
    char name[40];
    int numb_otd;
    int date;
};

void Pr_Sotr(Sotr* m, int n)
{
    cout << " \nFIO \tNomer otdela \tVozrast " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << m[i].name << "   \t" << m[i].numb_otd << "\t\t" << m[i].date << endl;
    }
}
void Vn_Sotr(Sotr* m, int n)
{
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "FIO" << "[" << i + 1 << "]: ";
        cin.getline(m[i].name, 40);
        cout << "Numb otdela: ";
        cin >> m[i].numb_otd;
        cin.ignore();
        cout << "Vozrast: ";
        cin >> m[i].date; cin.ignore();
    }
}

void Sr_Sotr(Sotr* m, int n)
{
    int Sr_Vozr = 0;
    int kol = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i].numb_otd == 1) {
            kol++;
            Sr_Vozr = (Sr_Vozr + m[i].date) / kol;
        }
    }
    cout << "Sredniy vozrast otdela = " << Sr_Vozr << endl;
}

int main()
{
    system("cls");
    int n;
    cout << "Vvedite kol sotrudnikov: ";
    cin >> n;
    Sotr* m = new Sotr[n];
    Vn_Sotr(m, n);
    Pr_Sotr(m, n);
    Sr_Sotr(m, n);
    delete[]m;
    system("PAUSE");
}

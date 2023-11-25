#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int pil, player, bot;
    string ulang;
    do
    {
        system("cls");
        cout << "1. lempar dadu\n2. keluar\npilihan : ";
        cin >> pil;
        if (pil == 1)
        {
            player = (rand() % 6) + 1;
            bot = (rand() % 6) + 1;
            cout << "player : " << player << endl;
            cout << "musuh : " << bot << endl;
            if (player > bot)
            {
                cout << "Widih Menang" << endl;
            }
            else if (player < bot)
            {
                cout << "Cie NT" << endl;
            }
            else
            {
                cout << "Coba Lagi" << endl;
            }
            cout << "ulang <y/n> : ";
            cin >> ulang;
        }
        else if (pil == 2)
        {
            ulang = "n";
        }
        else
        {
            cout << "Pilihan salah" << endl;
        }
    } while (ulang == "y");
    system("cls");
    cout << "program selesai" << endl;
}
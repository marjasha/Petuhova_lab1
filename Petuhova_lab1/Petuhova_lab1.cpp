#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class pipe {
    int kilometr;
    int length;
    int diametr;
    bool repair;
};

class ks {
    string name;
    int workshops;


};

int main()
{
    int f;
    setlocale(LC_ALL, ""); //для отображение русского языка
    cout << "Введите: "<<endl;
    cout << "Добавить трубу - 1"<<endl;
    cout << "Добавить КС - 2"<<endl;
    cout << "Просмотр всех объектов - 3"<<endl;
    cout << "Редактировать трубу - 4" << endl;
    cout << "Редактировать КС - 5" << endl;
    cout << "Сохранить - 6" << endl;
    cout << "Загрузить - 7" << endl;
    cout << "Выход - 0" << endl;
    cin >> f;
    while (!(cin >> f)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');// отчистила ввод
        cout << "Введите число!" << endl;
        cin >> f;
    }

}

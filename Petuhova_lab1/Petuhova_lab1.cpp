#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

struct pipe {
    string kilometr;
    int length;
    int diametr;
    bool repair;
};

struct ks {
    string name;
    int workshops;
    int workshops_in_work;
    double eff;
};

void check_command(int& x) {
    cin >> x;
    while ((x> 7) || (x < 0)) {
        cin.clear();
        cin.ignore(10000, '\n');// отчистила ввод
        cout << "Введите число от 0 до 7!" << endl;
        cin >> x;
    }
}

void check_int(int& x) {
    cin >> x;
    while (!x || x < 0) {
        cin.clear();
        cin.ignore(10000, '\n');// отчистила ввод
        cout << "Введите число!" << endl;
        cin >> x;
    }
}

void check_bool(bool& x) {
    cin >> x;
    while (cin.fail() || x < 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Труба в ремонте? (1 - да, 0 - нет)"<<endl;
        cin >> x;

    }
}

void check_double(double& x) {
    cin >> x;
    while (!x || (x < 0)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Введите эффективность!" << endl;
        cin >> x;
    }
}

pipe pipe_input() {
    pipe newpipe;

    cout << "Введите название трубы"<<endl;
    cin.ignore();
    getline(cin, newpipe.kilometr);

    cout << "Введите длинну" << endl;
    check_int(newpipe.length);

    cout << "Введите диаметр" << endl;
    check_int(newpipe.diametr);

    cout << "Труба в ремонте? (1 - да, 0 - нет):" << endl;
    check_bool(newpipe.repair);

    return newpipe;
}

ks ks_input() {
    ks newks;

    cout << "Введите название КС" << endl;
    cin.ignore();
    getline(cin, newks.name);

    cout << "Введите количество цехов" << endl;
    check_int(newks.workshops);

    cout << "Введите количество цехов в работе" << endl;
    check_int(newks.workshops_in_work);

    cout << "эффективность" << endl;
    check_double(newks.eff);

    return newks;
}

void pipe_out(const pipe& newpipe) {  // const не позволяет изменять данные
    if (newpipe.kilometr.empty()) {
        cout << "Нет данных" <<endl;
    }
    else {
        cout << "Имя " << newpipe.kilometr <<endl;
        cout << "Длинна " << newpipe.length <<endl;
        cout << "Диаметр " << newpipe.diametr<<endl;
        cout << "В ремонте " << newpipe.repair <<endl;
    }
}

void ks_out(const ks& newks) {  // const не позволяет изменять данные
    if (newks.name.empty()) {
        cout << "Нет данных" << endl;
    }
    else {
        cout << "Имя " << newks.name << endl;
        cout << "Количество цехов " << newks.workshops << endl;
        cout << "Количество цехов в работе " << newks.workshops_in_work << endl;
        cout << "Эффективность " << newks.eff << endl;
    }
}

int main()
{
    int f;
    pipe newpipe;
    ks newks;

    setlocale(LC_ALL, ""); //для отображение русского языка
    while (true) {
        cout << "Введите: " << endl;
        cout << "Добавить трубу - 1" << endl;
        cout << "Добавить КС - 2" << endl;
        cout << "Просмотр всех объектов - 3" << endl;
        cout << "Редактировать трубу - 4" << endl;
        cout << "Редактировать КС - 5" << endl;
        cout << "Сохранить - 6" << endl;
        cout << "Загрузить - 7" << endl;
        cout << "Выход - 0" << endl;
   
    
    check_command(f);

    switch (f) {
    case 1: {
        newpipe = pipe_input();
        break;
    }
    case 2: {
        newks = ks_input();
        break;
    }
    case 3: {
        cout << "Трубы" << endl;
        pipe_out(newpipe);
        cout << "КС" << endl;
        ks_out(newks);
        break;
    }
    case 4: {

        break;
    }
    case 5: {

        break;
    }
    case 6: {

        break;
    }
    case 7: {

        break;
    }
    case 0: {
        return 0;
    }
    }
    }

}

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int number = 0;
    cout << "Введите номер дня недели (от 1 до 7): ";
    cin >> number;
    string day1 = "(понедельник):";
    string day2 = "(вторник):";
    string day3 = "(среда):";
    string day4 = "(четверг):";
    string day5 = "(пятница):";
    string day6 = "(суббота):";
    string day7 = "(воскресенье):";
    string text = "Меню сегодня ";

    if (number < 1 || number > 7) {
        cout << "Такого дня недели не бывает!!!" << endl;
    }
    else {
        if (number == 1) {
            cout << text << day1 << endl;
            cout << "Гороховый суп." << endl;
            cout << "Салат с креветками." << endl;
            cout << "Пюре кортофельное." << endl;
            cout << "Шницель." << endl;
            cout << "Компот." << endl;
        }
        else {
            if (number == 2) {
                cout << text << day2 << endl;
                cout << "Борщ." << endl;
                cout << "Салат греческий." << endl;
                cout << "Горошница." << endl;
                cout << "Печень." << endl;
                cout << "Морс." << endl;
            }
            else {
                if (number == 3) {
                    cout << text << day3 << endl;
                    cout << "Лапша." << endl;
                    cout << "Салат овощной." << endl;
                    cout << "Перловка." << endl;
                    cout << "Окорочок куринный." << endl;
                    cout << "Чай с лимоном." << endl;
                }
                else {
                    if (number == 4) {
                        cout << text << day4 << endl;
                        cout << "Уха." << endl;
                        cout << "Крабовый салат." << endl;
                        cout << "макароны." << endl;
                        cout << "Сёмга обжаренная." << endl;
                        cout << "Морс вишнёвый." << endl;
                    }
                    else {
                        if (number == 5) {
                            cout << text << day5 << endl;
                            cout << "Щи." << endl;
                            cout << "Салат оливье." << endl;
                            cout << "Гречка." << endl;
                            cout << "Гуляш говяжий." << endl;
                            cout << "Чай с лимоном." << endl;
                        }
                        else {
                            if (number == 6) {
                                cout << text << day6 << endl;
                                cout << "Лагман." << endl;
                                cout << "Салат овощной." << endl;
                                cout << "Перловка." << endl;
                                cout << "Тефтели." << endl;
                                cout << "Компот." << endl;
                            }
                            else {
                                cout << text << day7 << endl;
                                cout << "Выходной." << endl;
                            }
                        }
                    }
                }
            }
        }
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
    //Павел, Алексей, Арина, Линар, Даши, Сергей, Денис, Данил, Иван_Ф, Иван_П
    setlocale(LC_ALL, "Russian");
    fstream fout;
    fout.open("VS.csv", ios::out | ios::app);
    cout << "Введите имена студентов группы BD011:" << endl;
    int i, student_1, student_2, student_3, student_4, student_5, student_6, student_7, student_8, student_9, student_10;
    for (i = 0; i < 10; i++)
    {
        cin >> student_1; 
        cin >> student_2;
        cin >> student_3;
        cin >> student_4;
        cin >> student_5;
        cin >> student_6;
        cin >> student_7;
        cin >> student_8;
        cin >> student_9;
        cin >> student_10;
        fout << student_1 << "," << student_2 << "," << student_3 << "," << student_4 << "," << student_5 << "," << student_6 << "," << student_7 << "," << student_8 << "," << student_9 << "," << student_10 << "\n";
    }
}

#include <iostream>
#include <cstring>
using namespace std;
struct Student {
    char name[50];
    unsigned short age;
    float averageGrade;
};



void vvestyStudentiv(Student students[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Введіть ім'я студента " << i + 1 << ": ";
        cin.ignore(); 
        cin.getline(students[i].name, 50);

        cout << "Введіть вік студента: ";
        cin >> students[i].age;

        cout << "Введіть середній бал студента: ";
        cin >> students[i].averageGrade;
        cout << endl;
    }
}

void vyvestyStudentiv(const Student students[], int size) {
    cout << "Список студентів:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Студент " << i + 1 << ":\n";
        cout << "Ім'я: " << students[i].name << endl;
        cout << "Вік: " << students[i].age << endl;
        cout << "Середній бал: " << students[i].averageGrade << endl;
        cout << "----------------------\n";
    }
}

void naykrashchyiStudent(const Student students[], int size) {
    int index = 0;
    for (int i = 1; i < size; ++i) {
        if (students[i].averageGrade > students[index].averageGrade) {
            index = i;
        }
    }

    cout << "Студент з найвищим середнім балом:\n";
    cout << "Ім'я: " << students[index].name << endl;
    cout << "Середній бал: " << students[index].averageGrade << endl;
}

int main() {
    const int size = 3;
    Student students[size];

    vvestyStudentiv(students, size);

    vyvestyStudentiv(students, size);

    naykrashchyiStudent(students, size);

    return 0;
}
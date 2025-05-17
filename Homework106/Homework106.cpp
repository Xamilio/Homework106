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
        cin.ignore(); // Очищення буфера
        cin.getline(students[i].name, 50);

        cout << "Введіть вік студента: ";
        cin >> students[i].age;

        cout << "Введіть середній бал студента: ";
        cin >> students[i].averageGrade;
        cout << endl;
    }
}

void vyvestyStudentiv(const Student students[], int size) {
    cout << "\nСписок студентів:\n";
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

struct Book {
    char title[100];
    char author[50];
    unsigned short year;
};

void vvestyKnygy(Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Введіть назву книги " << i + 1 << ": ";
        cin.ignore();
        cin.getline(books[i].title, 100);

        cout << "Введіть автора: ";
        cin.getline(books[i].author, 50);

        cout << "Введіть рік видання: ";
        cin >> books[i].year;
        cout << endl;
    }
}

void vyvestyKnygy(const Book books[], int size, unsigned short rік) {
    cout << "\nКниги, видані після " << rік << " року:\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].year > rік) {
            cout << "Назва: " << books[i].title << ", Автор: " << books[i].author << ", Рік: " << books[i].year << endl;
        }
    }
}


struct Rectangle {
    float width;
    float height;
};



float ploshchaPryamokutnyka(const Rectangle &rect) {
    return rect.width * rect.height;
}


int main() {
    
    const int studentSize = 3;
    Student students[studentSize];
    
    cout << "===== Завдання 1: Студенти =====\n";
    vvestyStudentiv(students, studentSize);
    vyvestyStudentiv(students, studentSize);
    naykrashchyiStudent(students, studentSize);


    const int bookSize = 5;
    Book books[bookSize];
    
    cout << "\n===== Завдання 2: Книги =====\n";
    vvestyKnygy(books, bookSize);

    unsigned short yearFilter;
    cout << "Введіть рік для фільтрації книг: ";
    cin >> yearFilter;
    vyvestyKnygy(books, bookSize, yearFilter);


    Rectangle rect;
    cout << "\n===== Завдання 3: Прямокутник =====\n";
    cout << "Введіть ширину прямокутника: ";
    cin >> rect.width;
    cout << "Введіть висоту прямокутника: ";
    cin >> rect.height;

    cout << "Площа прямокутника: " << ploshchaPryamokutnyka(rect) << " кв. одиниць\n";
}
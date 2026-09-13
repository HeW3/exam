#include <iostream>
using namespace std;
struct Student {
    char name[50];
    // string name
    int id;
    double score;
};
void input(Student *student) {
    cin >> student->name >> student->id >> student->score;
}
void display(Student *student) {
    cout << "姓名：" << student->name << "\n";
    cout << "学号：" << student->id << "\n";
    cout << "成绩：" << student->score << "\n";
}

int main() {
    Student student;
    input(&student);
    display(&student);
}
#include <iostream>
#include <string>
using namespace std;
class Car {
  private:
    string color;
    int number;

  public:
    Car(string _color, int _number) {
        this->color = _color;
        this->number = _number;
    }
    ~Car() {}
    void display() {
        cout << "颜色：" << this->color << "\n";
        cout << "车牌号：" << this->number << "\n";
    }
};
int main() {
    Car car1("红色", 123123), car2("棕色", 114515);
    car1.display();
    car2.display();
}
#include <iostream>
#include <string>

using namespace std;

class Circle {
    private:
        int radius;
    public:
        Circle() { 
            radius = 1;
        }
        Circle(int radius) {
            this->radius = radius;
        }
        double getArea() const {
            return 3.14 * radius * radius;
        }
        int getRadius() const {
            return radius;
        }
};

class NamedCircle : public Circle {
    private:
        string name;
    public:
        NamedCircle(int radius, const string& name) : Circle(radius), name(name) {}
        void show() const {
            cout << "반지름이 " << getRadius() << "인 " << name << endl;
        }
};

int main() {
    NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
    waffle.show();
    return 0;
}

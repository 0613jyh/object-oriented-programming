#include <iostream>
#include <string>
#define pi 3.14
using namespace std;

// Shape 클래스 정의
class Shape {
protected:
    string name;
public:
    Shape(const string& n) : name(n) {cout << "부모 클래스 생성자 실행" << endl;}
    virtual ~Shape() {cout << "부모 클래스 소멸자 실행" << endl;}
    virtual double getArea() const = 0; 
    string getName() const { return name; }
};


class Oval : public Shape {
private:
    double radius1;
    double radius2;
public:
    Oval(const string& n, double r1, double r2) : Shape(n), radius1(r1), radius2(r2) {}
    virtual ~Oval() { cout << name << "소멸자 실행" << endl; }
    double getArea() const override { return pi * radius1 * radius2; }
};


class Rect : public Shape {
private:
    double width;
    double height;
public:
    Rect(const string& n, double     w, double h) : Shape(n), width(w), height(h) {}
    virtual ~Rect() { cout << name << "소멸자 실행" << endl; }
    double getArea() const override { return width * height; }
};


class Triangular : public Shape {
private:
    double base;
    double height;
public:
    Triangular(const string& n, double b, double h) : Shape(n), base(b), height(h) {}
    virtual ~Triangular() { cout << name << "소멸자 실행" << endl; }
    double getArea() const override { return 0.5 * base * height; }
};

int main() {
    Shape* p[3];
    p[0] = new Oval("빈대떡", 10, 20);
    p[1] = new Rect("찰떡", 30, 40);
    p[2] = new Triangular("토스트", 30, 40);

    for (int i = 0; i < 3; i++) {
        cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
    }
    
    for (int i = 0; i < 3; i++) {
        delete p[i];
    }

    return 0;
}

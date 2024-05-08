#include <iostream>
using namespace std;

class Circle {
    int radius;
    public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int r) {
    radius = r;
}


double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle CircleArray[3];
    int count = 0;
    int r;
    for(int i=0; i<3; i++) {
        cout << "원" << i+1 << "의 반지름 >> ";
        cin >> r;
        CircleArray[i].setRadius(r);
        if(CircleArray[i].getArea() > 100) {
            count++;
        }
    }
    
     cout << "넓이가 100보다 큰 원의 개수는 " << count << "개 입니다." << endl;
     return 0;
    
}
#include<iostream>
#include<cstring>
using namespace std;
 
class Book {
    char *title; // 제목 문자열 
    int price; // 가격 
public:
    Book(const Book& b);
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);    
    void show() { cout << title << ' ' << price << "원" << endl; }
};
 
Book::Book(const char* title, int price){
    this->price = price;
    int size = strlen(title) + 1;
    this->title = new char[size];
    strcpy(this->title, title);
}
 
Book::Book(const Book& b){
    this->price = b.price;
    int size = strlen(b.title) + 1;
    this->title = new char[size];
    strcpy(this->title, b.title);
}
 
Book::~Book() { 
    delete [] title; 
}
 
void Book::set(const char* title, int price) {
    if(this->title) delete [] this->title;
    this->price = price;
    int size = strlen(title) + 1;
    this->title = new char[size];
    strcpy(this->title, title);
}
 
 
int main() {
    Book cpp("명품 C++", 10000);
    Book java = cpp; // 복사 생성자 호출됨 
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}

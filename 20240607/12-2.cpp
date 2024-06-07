#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, string> dic;
    dic.insert(make_pair("love", "사랑")); // ("love", "사랑") 저장
    dic.insert(make_pair("apple", "사과")); // ("apple", "사과") 저장
    dic["cherry"] = "체리"; // ("cherry", "체리") 저장

    cout << "저장된 단어 개수" << dic.size() << endl; // 현재 dic에 할당 된 단어 갯수 반환 == 배열크기

    string eng;
    while (true) {
        cout << "찾고싶은 단어>> "; 
        getline(cin, eng); // 사용자로부터 키 입력
        if (eng == "exit") {
            break;
        }
        if(dic.find(eng) == dic.end()) { // eng '키'를 끝까지 찾았는데 없음. find 같은 거 외워야함
            cout << "없음" << endl;
        }
        else {
            cout << dic[eng] << endl; // dic에서 eng의 값을 찾아 출력
        }  
    }
        cout << "종료합니다..." << endl;
}
#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int &retsize) {
    T* array = new T[sizeSrc]; // 동적할당 (sizeSrc의 크기만큼)
    retsize = 0; // retsize 초기화
    for(int i = 0; i < sizeSrc; i++) { 
        int j;
        for(j = 0; j < sizeMinus; j++) {
            if(src[i] == minus[j]) { // src[i] == minus[j] 같은 경우 멈춤      
                break;    
            }
        }
        if(j == sizeMinus) { // src[i]가 minus 배열의 어떤 요소와도 같지 않은 경우
            array[retsize] = src[i]; // array에 src[i] 추가
            retsize++; // retsize 증가
        }
    }
    return array; // 최종 배열 반환
}
    
int main() {
    // remove() 함수를 int로 구체화하는 경우
    cout << "정수 배열 {1,2,3,4}에서 정수 배열 {-3,5,10,1,2,3}을 뺍니다" << endl;
    int x[] = {1,2,3,4};
    int y[] = {-3,5,10,1,2,3};
    int retSize;
    int *p = remove(x, 4, y, 6, retSize); // int형 배열에 대해 remove 함수 호출
    cout << retSize << endl; // 결과 배열의 크기 출력
    if(retSize == 0) {
        cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
        return 0;
    } else {
        for(int i = 0; i < retSize; i++) { // 배열의 모든 원소 출력
            cout << p[i] << ' ';
        }
        cout << endl;
        delete [] p; // 할당받은 배열 반환
    }

    // remove() 함수를 double로 구체화하는 경우
    cout << "실수 배열 {1.1, 2.2, 3.3, 4.4}에서 실수 배열 {2.2, 3.3}을 뺍니다" << endl;
    double a[] = {1.1, 2.2, 3.3, 4.4};
    double b[] = {2.2, 3.3};
    double retSizeD;
    double *q = remove(a, 4, b, 2, retSize); // double형 배열에 대해 remove 함수 호출
    cout << retSize << endl; // 결과 배열의 크기 출력
    if(retSize == 0) {
        cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
        return 0;
    } else {
        for(int i = 0; i < retSize; i++) { // 배열의 모든 원소 출력
            cout << q[i] << ' ';
        }
        cout << endl;
        delete [] q; // 할당받은 배열 반환
    }

    return 0;
}

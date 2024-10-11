#include <iostream>
#define SIZE 3

using namespace std;

//1 task


//2task
//int ser(int a[5], float s) {
//    float b = 0;
//    for (int i = 0; i < s; i++) {
//        b += a[i];
//    }
//    b /= s;
//    return b;
//}

//3 task
//void h(int a[10], int s) {
//    int n = 0;
//    int p = 0;
//    int m = 0;
//    for (int i = 0; i < s; i++) {
//        if (a[i] == 0) {
//            n++;
//        }
//        else if (a[i] > 0) {
//            p++;
//        }
//        else {
//            m++;
//        }
//    }
//    cout << n << " " << p << " " << m;
//}

//4 task
//template<typename T>
//void inAndShow(T a) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << a[i][j];
//        }
//        cout << endl;
//    }
//}
//
//template<typename T>
//void maxAndMin(T a) {
//    int n = a[0][0];
//    int x = a[0][0];
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            if (i = j) {
//                if (a[i][j] > x) {
//                    x = a[i][j];
//                }
//                if (a[i][j] < n) {
//                    n = a[i][j];
//                }
//            }
//        }
//    }
//    cout << x << " " << n;
//}

//template<typename T>
//void sortR(T a) {
//    int temp;
//    int z;
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            temp = a[i][j];
//            for (z = j - 1; z >= 0 && a[i][z] > temp; z--) {
//                a[i][z + 1] = a[i][z];
//            }
//            a[i][z + 1] = temp;
//        }
//    }
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << a[i][j];
//        }
//        cout << endl;
//    }
//}

//5 task
//int dil(int a, int b) {
//    int c; 
//    if (a > b) {
//        c = b;
//        b = a;
//        a = c;
//    }
//    int d = b / 2;
//    c = 0;
//    for (int i = d; i > 0; i--) {
//        if (b % i == 0 && a % i == 0 && i > c) {
//            c = i;
//        }
//    }
//    return c;
//}

int main()
{
    
    /*int a[5] = { 1, 5, 5, 5, 5 };
    int s = sizeof(a) / sizeof(a[0]);
    cout << ser(a, s);*/

    /*int a[10] = { 1, -5, 0, 2, 0, 3, -1, -2, 5, 0};
    int s = sizeof(a) / sizeof(a[0]);
    h(a, s);*/

    //cout << dil(100000, 10000);

    int a[SIZE][SIZE] = { {1, 2, 3}, {4, 6, 4}, {6, 3, 8} };
    /*inAndShow(a);
    maxAndMin(a);*/
    sortR(a);
}
#include "dive.h"
#include <iostream>
using namespace std;

int dive(int x, int y) {
        if (y == 0) {
            cout << "0���� ���� �� �����ϴ�.\n";
            return 0.0;
        }
        return (double)x / y;  
}
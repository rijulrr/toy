#include <iostream>


int add(int &a, int &b) {

    return a + b;

}


int main() {


    int a = 2;
    int b = 2;

    int res = add(a, b);

    std::cout << res << std::endl;


}


//
//  main.cpp
//  C++ Test
//
//  Created by Ethan Song on 5/28/19.
//  Copyright © 2019 Ethan Song. All rights reserved.
//

#include <iostream>
using namespace std;
class testClass{
    int i=17;
    public:int returnInt(){
        return i;
    }
};

int testFunction(int a, int b) {
    return a*b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    cout << "Test\n";
    int i = 0;
    cin >> i;
    cout << "int i = " + to_string(i) + "\n";
    testClass intGenerator;
    cout << "int j = " + to_string(intGenerator.returnInt()) + "\n";
    cout << "Enter first int\n";
    int a;
    cin >> a;
    cout << "Enter second int\n";
    int b;
    cin >> b;
    int newInt = testFunction(a, b);
    cout << "The product is: " + to_string(newInt) + "\n";
    return 0;
}



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
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    cout << "Test\n";
    int i = 0;
    cin >> i;
    cout << "int i = " + to_string(i) + "\n";
    testClass intGenerator;
    cout << "int j = " + to_string(intGenerator.returnInt()) + "\n";
    return 0;
}

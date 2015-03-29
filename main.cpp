//
//  main.cpp
//  decToBin
//
//  Created by hambarkh on 26/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>

using namespace std;

void push(int);
int pop();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout << "Enter number integer to change to bin: " ;
    int num;
    cin >> num;
    
    while (num>0) {
        int bit = num & 1;
        
        push(bit);
        num = num >> 1;
        //cout << "bit = "<< bit << "  num after 1 shift ="<< num << endl;
    }
    
    //int out;
    while (1) {
        cout << pop();
    }
    //cout << endl;
    return 0;
}

int a[32];
int top = -1;

void push(int aIn)
{
    top++;
    a[top] = aIn;
}

int pop()
{
    //top--;
    if (top < 0) {
        exit(0);
    }
    //cout << a[top--];
    return a[top--];
}
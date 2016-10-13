//
//  main.cpp
//  1
//
//  Created by 潘博 on 16/9/16.
//  Copyright © 2016年 潘博. All rights reserved.
//

#include <iostream>
using namespace std;

class IntCell{
public:
    explicit IntCell(int initialvalue=0):storedvalue(initialvalue){
        
    }
    int read() const
    {return storedvalue;}
    void write(int x){
        storedvalue=x;
    }
    void print(){
        cout<<storedvalue<<endl;
    }
private:
    int storedvalue;
};

int main(){
    IntCell X;
    X.write(100);
    X.print();
    
}

//
//  main.cpp
//  design-patterns
//
//  Created by Steve on 2020/6/11.
//  Copyright © 2020 Steve. All rights reserved.
//
// see: https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/singleton.html
#include <iostream>
#include "Singleton.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Singleton* sg = Singleton::shared();
    sg->action();
    Singleton* sg1 = Singleton::shared();
    sg1->action();
    delete sg;
    return 0;
}

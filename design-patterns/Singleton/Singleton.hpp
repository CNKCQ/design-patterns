//
//  Singleton.hpp
//  design-patterns
//
//  Created by Steve on 2020/6/11.
//  Copyright © 2020 Steve. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>

using namespace std;

class Singleton {
    
private:
    Singleton();
    
public:
    static Singleton* shared();
    void action();
    ~Singleton();
};

#endif /* Singleton_hpp */

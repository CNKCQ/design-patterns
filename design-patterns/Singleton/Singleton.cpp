//
//  Singleton.cpp
//  design-patterns
//
//  Created by Steve on 2020/6/11.
//  Copyright © 2020 Steve. All rights reserved.
//

#include "Singleton.hpp"
#include <iostream>

static Singleton* instance = nullptr;

pthread_mutex_t _lock; // recursive lock

Singleton::Singleton() {
    pthread_mutexattr_t attr;
    pthread_mutexattr_init (&attr);
    pthread_mutexattr_settype (&attr, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init (&_lock, &attr);
    pthread_mutexattr_destroy (&attr);
}

Singleton* Singleton::shared() {
    pthread_mutex_lock(&_lock);
    if (instance == nullptr) {
        instance = new Singleton();
    }
    pthread_mutex_unlock(&_lock);
    return instance;
}

void Singleton::action() {
    cout << "Hello, World!\n";
    cout << this << endl;
}

Singleton::~Singleton() {
    std::cout << "goodbye, World!\n";
}

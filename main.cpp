//
//  main.cpp
//  helloWorld
//
//  Created by Account on 4/15/20.
//  Copyright © 2020 Account. All rights reserved.
//

#include <iostream>
#include "utility.h"

#include <stdio.h>

int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    
    util u;
    std::cout << "TC = " << u.F2C(50) << std::endl;
    
    return 0;
}

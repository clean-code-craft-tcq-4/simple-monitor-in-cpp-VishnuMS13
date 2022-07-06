#include <iostream>
#include <assert.h>
#include "checker.hpp"
#include <string>

int main() {
    bool result = bBatteryIsOk(25, 70, 0.7);
    assert(result == true);

    result = bBatteryIsOk(50, 85, 0);
    assert(result == false);
    
    return 0;
}
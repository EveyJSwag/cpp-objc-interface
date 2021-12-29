#include <stdio.h>
#include <iostream>
#include "cpp_core_graphics.h"

int main()
{
    cpp_core_graphics test_ins = cpp_core_graphics();
    std::cout << test_ins.get_active_monitor_fps() << std::endl;
}

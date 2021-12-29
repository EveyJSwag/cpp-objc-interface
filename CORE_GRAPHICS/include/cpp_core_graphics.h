#ifndef CPP_CORE_GRAPHICS_H
#define CPP_CORE_GRAPHICS_H

#include <vector>
#include "bridge_core_graphics.h"

class cpp_core_graphics
{
public:
    cpp_core_graphics();
    typedef struct monitor_info
    {
        int height_pixels;
        int width_pixels;
    } monitor_info;

    int get_count_of_active_displays();
    monitor_info get_active_monitor_dimensions();
    double get_active_monitor_fps(); 
private:
    unsigned int primary_monitor_id;
};

#endif

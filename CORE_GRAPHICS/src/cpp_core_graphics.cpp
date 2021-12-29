#include "cpp_core_graphics.h"

cpp_core_graphics::cpp_core_graphics()
{
    primary_monitor_id = bridge_get_primary_display_id();
}

int cpp_core_graphics::get_count_of_active_displays()
{
    return bridge_get_count_of_active_displays(primary_monitor_id);
}

cpp_core_graphics::monitor_info cpp_core_graphics::get_active_monitor_dimensions()
{
    monitor_info return_info;
    return_info.width_pixels = bridge_get_monitor_width(primary_monitor_id);
    return_info.height_pixels = bridge_get_monitor_height(primary_monitor_id);
    return return_info;
}

double cpp_core_graphics::get_active_monitor_fps()
{
    return bridge_get_active_monitor_fps(primary_monitor_id);
}

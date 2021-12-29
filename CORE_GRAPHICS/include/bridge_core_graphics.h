#ifndef BRIDGE_CORE_GRAPHICS_H
#define BRIDGE_CORE_GRAPHICS_H

int bridge_get_primary_display_id();
int bridge_get_count_of_active_displays(int display_id);
int bridge_get_monitor_height(int display_id);
int bridge_get_monitor_width(int display_id);
double bridge_get_active_monitor_fps(int display_id);

#endif

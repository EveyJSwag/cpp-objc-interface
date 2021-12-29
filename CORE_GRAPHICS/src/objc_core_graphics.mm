#import "bridge_core_graphics.h"
#import <CoreGraphics/CoreGraphics.h>

int bridge_get_primary_display_id()
{
   return CGMainDisplayID();
}

int bridge_get_count_of_active_displays(int display_id)
{
    uint32_t display_amount;
    CGGetActiveDisplayList(10, (CGDirectDisplayID*)&display_id, &display_amount);
    return display_amount;
}

int bridge_get_monitor_height(int display_id)
{
    return CGDisplayPixelsHigh(display_id);
}

int bridge_get_monitor_width(int display_id)
{
    return CGDisplayPixelsWide(display_id);
}

double bridge_get_active_monitor_fps(int display_id)
{
    double fps = 0.0f;
    CGDisplayModeRef fps_display_mode = CGDisplayCopyDisplayMode(display_id);
    fps = CGDisplayModeGetRefreshRate(fps_display_mode);
    return fps;
}

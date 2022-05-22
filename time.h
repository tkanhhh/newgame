#include "type.h"

const u8 FRAMES_PER_DROP[] = {
    48,
    43,
    38,
    33,
    28,
    23,
    18,
    13,
    8,
    6,
    5,
    5,
    5,
    4,
    4,
    4,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    1
};
// độ dừng viên gạch <giảm dần>

const f32 TARGET_SECONDS_PER_FRAME = 1.f / 50.f;
// thời gian thay đổi độ dừng


inline f32
get_time_to_next_drop(s32 level)
{
    if (level > 29)
    {
        level = 29;
    }
    return FRAMES_PER_DROP[level] * TARGET_SECONDS_PER_FRAME;
};
// đặt thời gian chạy của khối gỗ theo level

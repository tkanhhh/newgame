#include "type.h"

struct Tetrino
{
    const u8 *data;
    const s32 side;
};

inline Tetrino
tetrino(const u8 *data, s32 side)
{
    return { data, side };
}

const Tetrino BLOCKS[] = {
    tetrino(BLOCK_1, 4),
    tetrino(BLOCK_2, 2),
    tetrino(BLOCK_3, 3),
    tetrino(BLOCK_4, 3),
    tetrino(BLOCK_5, 3),
    tetrino(BLOCK_6, 3),
    tetrino(BLOCK_7, 3),
};
// dữ liệu và kích cỡ khối gỗ

enum Game_Phase
{
    GAME_PHASE_START,
    GAME_PHASE_PLAY,
    GAME_PHASE_LINE,
    GAME_PHASE_GAMEOVER
};

struct Piece_State
{
    u8 block_index;
    s32 offset_row;
    s32 offset_col;
    s32 rotation;
};

struct Game_State
{
    u8 board[WIDTH * HEIGHT];
    u8 lines[HEIGHT];
    s32 pending_line_count;

    Piece_State piece;

    Game_Phase phase;

    s32 start_level;
    s32 level;
    s32 line_count;
    s32 points;

    f32 next_drop_time;
    f32 highlight_end_time;
    f32 time;
};

struct Input_State
{
    u8 left;
    u8 right;
    u8 up;
    u8 down;

    u8 a;

    s8 dleft;
    s8 dright;
    s8 dup;
    s8 ddown;
    s8 da;
};

enum Text_Align
{
    TEXT_ALIGN_LEFT,
    TEXT_ALIGN_CENTER,
    TEXT_ALIGN_RIGHT
};


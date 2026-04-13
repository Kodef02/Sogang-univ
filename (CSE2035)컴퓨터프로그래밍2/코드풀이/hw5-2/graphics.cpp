#include <cstdio>
#include "graphics.hpp"

// TODO: Fill in these functions. Check the comments in graphics.hpp file.

void Rectangle::Fix() {
    left_up.Fix();
    right_low.Fix();
}

void Rectangle::Unfix() {
    left_up.Unfix();
    right_low.Unfix();
}

void Rectangle::IncreaseHeight(int delta) {
    if (delta < 0) return;
    int new_right_low_y = right_low.GetY() + delta;
    right_low.SetY(new_right_low_y);
}

void Rectangle::IncreaseWidth(int delta) {
    if (delta < 0) return;
    int new_right_low_x = right_low.GetX() + delta;
    right_low.SetX(new_right_low_x);
}

int Rectangle::Size() {
    int delta_x = right_low.GetX() - left_up.GetX();
    int delta_y = right_low.GetY() - left_up.GetY();
    return delta_x * delta_y;
}

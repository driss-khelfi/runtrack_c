#include "manhattan.h"
#include <stdio.h>


int manhattan_distance(point p1, point p2) {
    int dx = ABS(p1.x - p2.x);
    int dy = ABS(p1.y - p2.y);

    return dx + dy;
}

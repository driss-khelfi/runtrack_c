#ifndef MANHATTAN_H
#define MANHATTAN_H

// Structure representing a point
typedef struct {
    int x;
    int y;
} point;

// Macro for absolute value
#define ABS(x) ((x) < 0 ? -(x) : (x))

// Function prototype
int manhattan_distance(point p1, point p2);

#endif /* MANHATTAN_H */

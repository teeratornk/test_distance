//
// Created by tk on 7/27/20.
//

#include "distance_calculation.h"


float distance_calculation::l2_norm(float x1, float y1, float x2, float y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}

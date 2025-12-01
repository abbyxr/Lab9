//
// Created by Finn James McKenna on 12/1/25.
//

#include "geometry.h"
#include <cmath>

geometry::geometry() {}
float geometry::areaOfCircle(float r) {
    return M_PI * r * r;
}
float geometry::areaOfRectangle(float w,float h) {
    return w * h;
}
float geometry::volumeOfBox(float l, float w, float h) {
    return l * w * h;
}



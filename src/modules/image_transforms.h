#include "image_tools.h"
void crop(matrix& img, unsigned crop_left, unsigned crop_top, unsigned crop_right, unsigned crop_bottom);
void rotate(matrix& img, unsigned angle);
void reflect(matrix& img, bool horizontal, bool vertical);
void shear(matrix& img, float shx, float shy);
void bilinear_interpolate(matrix& img, float x, float y, unsigned char* result);
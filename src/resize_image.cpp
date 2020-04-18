#include <cmath>
#include "image.h"

using namespace std;

// HW1 #1
// float x,y: inexact coordinates
// int c: channel
// returns the nearest neibor to pixel (x,y,c)
float Image::pixel_nearest(float x, float y, int c) const
  {
  // Since you are inside class Image you can
  // use the member function pixel(a,b,c)
  
  // TODO: Your code here
  int rx = round(x);
  int ry = round(y);
  return this->clamped_pixel(rx, ry, c);
  }

// HW1 #1
// float x,y: inexact coordinates
// int c: channel
// returns the bilinearly interpolated pixel (x,y,c)
float Image::pixel_bilinear(float x, float y, int c) const
  {
  // Since you are inside class Image you can
  // use the member function pixel(a,b,c)
  
  
  // TODO: Your code here
  
  NOT_IMPLEMENTED();
  
  
  return 0;
  }

// HW1 #1
// int w,h: size of new image
// const Image& im: input image
// return new Image of size (w,h,im.c)
Image nearest_resize(const Image& im, int w, int h)
  {
  Image ret(w,h,im.c);
  float scale_x = w / im.w;
  float scale_y = h / im.h;

  for (int c = 0; c < ret.c; c ++) {
      for (int y = 0; y < h; y ++) {
          float sy = -0.5 + (y + 0.5) / scale_y;
          for (int x = 0; x < w; x ++) {
              float sx = -0.5 + (x + 0.5) / scale_x;
              ret(x, y, c) = im.pixel_nearest(sx, sy, c);
          }
      }
  }
  
  return ret;
  }


// HW1 #1
// int w,h: size of new image
// const Image& im: input image
// return new Image of size (w,h,im.c)
Image bilinear_resize(const Image& im, int w, int h)
  {
  
  // TODO: Your code here
  
  NOT_IMPLEMENTED();
  
  
  return Image();
  }



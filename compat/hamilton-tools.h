#pragma once

#include "compat/math.hpp"
constexpr double TO_RAD = (M_PI / 180);
constexpr double TO_DEG = (180 / M_PI);
constexpr double EPSILON = 1e-30;

struct tVector
{
    double v[3];
    tVector(double X = 0, double Y = 0, double Z = 0) {v[0]=X; v[1]=Y; v[2]=Z;}
    tVector(double V[]) {v[0]=V[0]; v[1]=V[1]; v[2]=V[2];}
};

struct tQuat
{
    double x, y, z, w;
    tQuat(double X = 0, double Y = 0, double Z = 0, double W = 1)
        {x = X; y = Y; z = Z; w = W;}
};

double  VectorDistance(const double v1[], const tVector v2);
tVector Lerp          (const tVector s, const double d[], const double alpha);
tQuat   QuatFromYPR   (const double YPR[]);
double  AngleBetween  (const tQuat S, const tQuat D);
tQuat   Slerp         (const tQuat S, const tQuat D, const double alpha);
void    QuatToYPR     (const tQuat Q, double YPR[]);

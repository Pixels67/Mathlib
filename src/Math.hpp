#ifndef MATHLIB_MATH_HPP
#define MATHLIB_MATH_HPP

namespace Math {
#define MATHLIB_MATH_BINARY_OPS(T1, T2, ...)                                                                              \
    T1 operator+(const T2 &o) const { return T1(__VA_ARGS__(+)); }                                                     \
    T1 operator-(const T2 &o) const { return T1(__VA_ARGS__(-)); }                                                     \
    T1 operator*(const T2 &o) const { return T1(__VA_ARGS__(*)); }                                                     \
    T1 operator/(const T2 &o) const { return T1(__VA_ARGS__(/)); }

#define MATHLIB_MATH_ASSIGN_OPS(T1, T2, ...)                                                                              \
    T1 &operator+=(const T2 &o) {                                                                                      \
        __VA_ARGS__(+=);                                                                                               \
        return *this;                                                                                                  \
    }                                                                                                                  \
    T1 &operator-=(const T2 &o) {                                                                                      \
        __VA_ARGS__(-=);                                                                                               \
        return *this;                                                                                                  \
    }                                                                                                                  \
    T1 &operator*=(const T2 &o) {                                                                                      \
        __VA_ARGS__(*=);                                                                                               \
        return *this;                                                                                                  \
    }                                                                                                                  \
    T1 &operator/=(const T2 &o) {                                                                                      \
        __VA_ARGS__(/=);                                                                                               \
        return *this;                                                                                                  \
    }

    double RadiansToDegrees(double angleRadians);
    double DegreesToRadians(double angleDegrees);
    double GetPi();
} // namespace Math

#endif // MATHLIB_MATH_HPP

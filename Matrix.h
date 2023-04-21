#pragma once
#include"base.h"

//‰ÁZ
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
//Œ¸Z
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
//Ï
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
//‹ts—ñ
Matrix4x4 Inverse(const Matrix4x4& m);
//“]’us—ñ
Matrix4x4 Transpose(const Matrix4x4& m);
//’PˆÊs—ñ
Matrix4x4 MakeIdenttity4x4();

//•¶šo—Í
void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);
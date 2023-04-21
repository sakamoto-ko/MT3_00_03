#pragma once
#include"base.h"

//���Z
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
//���Z
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
//��
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
//�t�s��
Matrix4x4 Inverse(const Matrix4x4& m);
//�]�u�s��
Matrix4x4 Transpose(const Matrix4x4& m);
//�P�ʍs��
Matrix4x4 MakeIdenttity4x4();

//�����o��
void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);
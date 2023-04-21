#pragma once
#include "base.h"

//平行移動行列
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);
//拡大縮小行列
Matrix4x4 MakeScaleMatrix(const Vector3& scale);
//座標返還
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);
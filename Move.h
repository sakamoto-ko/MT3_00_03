#pragma once
#include "base.h"

//���s�ړ��s��
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);
//�g��k���s��
Matrix4x4 MakeScaleMatrix(const Vector3& scale);
//���W�Ԋ�
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);
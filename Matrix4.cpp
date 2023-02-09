#include "Matrix4.h"
#include "Vector3.h"
#include <cmath>

//�P�ʍs������߂�
Matrix4 identity() {
	static const Matrix4 result{
		1.0f,0.0f,0.0f,0.0f,
		0.0f,1.0f,0.0f,0.0f,
		0.0f,0.0f,1.0f,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}

//�g��k���s������߂�
Matrix4 scale(const Vector3& s) {
	Matrix4 result{
		s.x,0.0f,0.0f,0.0f,
		0.0f,s.y,0.0f,0.0f,
		0.0f,0.0f,s.z,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}

//X������̉�]�s������߂�
Matrix4 rotationX(float angle) {
	float sin = std::sin(angle);
	float cos = std::cos(angle);
	Matrix4 result{
		1.0f,0.0f,0.0f,0.0f,
		0.0f,cos,sin,0.0f,
		0.0f,-sin,cos,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}

//Y�����̉�]�s������߂�
Matrix4 rotationY(float angle) {
	float sin = std::sin(angle);
	float cos = std::cos(angle);
	Matrix4 result{
		cos,0.0f,-sin,0.0f,
		0.0f,1.0f,0.0f,0.0f,
		sin,0.0f,cos,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}

//Z�����̉�]�s������߂�
Matrix4 rotationZ(float angle) {
	float sin = std::sin(angle);
	float cos = std::cos(angle);
	Matrix4 result{
		cos,sin,0.0f,0.0f,
		-sin,cos,0.0f,0.0f,
		0.0f,0.0f,1.0f,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}
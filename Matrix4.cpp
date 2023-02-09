#include "Matrix4.h"
#include "Vector3.h"
#include <cmath>

//’PˆÊs—ñ‚ğ‹‚ß‚é
Matrix4 identity() {
	static const Matrix4 result{
		1.0f,0.0f,0.0f,0.0f,
		0.0f,1.0f,0.0f,0.0f,
		0.0f,0.0f,1.0f,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}

//Šg‘åk¬s—ñ‚ğ‹‚ß‚é
Matrix4 scale(const Vector3& s) {
	Matrix4 result{
		s.x,0.0f,0.0f,0.0f,
		0.0f,s.y,0.0f,0.0f,
		0.0f,0.0f,s.z,0.0f,
		0.0f,0.0f,0.0f,1.0f
	};
	return result;
}

//X²ü‚è‚Ì‰ñ“]s—ñ‚ğ‹‚ß‚é
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

//Y²‰ñ‚è‚Ì‰ñ“]s—ñ‚ğ‹‚ß‚é
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

//Z²‰ñ‚è‚Ì‰ñ“]s—ñ‚ğ‹‚ß‚é
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
/*Create a new vec3 class with
- Contains three values x,y,z with templatized type
- Think of at least three handy constructors
- Operators +, -, +=, -=, =, ==
- Methods: normalize(), zero(), is_zero(), distance_to(vec3 …)
- Mind references and const!*/


#include <iostream>
#include <math.h>
using namespace std;

//template<class vecType>

	class Vec3 {
		
	public:
		float x, y, z;
		void normalize(Vec3);
		void zero(Vec3);
		void is_zero(Vec3);
		void distance_to(Vec3,Vec3);
		bool iszero;

		Vec3(float x, float y, float z);

		Vec3();

		Vec3 operator+(const Vec3 &oneVec) {
			
			Vec3 vec;
			vec.x = this->x + vec.x;
			vec.y = this->y + vec.y;
			vec.z = this->z + vec.z;


		}
		Vec3 operator-(const Vec3 &oneVec) {
			Vec3 vec;
			vec.x = this->x - vec.x;
			vec.y = this->y - vec.y;
			vec.z = this->z - vec.z;

		}
		Vec3 operator+=(const Vec3 &oneVec) {
			Vec3 vec;
			vec.x += this->x;
			vec.y += this->y;
			vec.z += this->z;

		}

		Vec3 operator-=(const Vec3 &oneVec) {
			Vec3 vec;
			vec.x -= this->x;
			vec.y -= this->y;
			vec.z -= this->z;

		}
		Vec3 operator=(const Vec3 &oneVec) {
			Vec3 vec;
			vec.x = this->x;
			vec.y = this->y;
			vec.z = this->z;

		}

		Vec3 operator==(const Vec3 &vec) {
			
			vec.x == this->x;
			vec.y == this->y;
			vec.z == this->z;

		}

	};



	Vec3::Vec3(float x , float y , float z) {
		this->x=x;
		this->y=y;
		this->z=z;
	}

	

	}


	
	void Vec3::normalize(Vec3) {
		
		float mod = 0;
		mod = sqrt(x *x + y *y + z *z);
		x = x / mod;
		y = y / mod;
		z = z / mod;
		
	
	}

	void Vec3::zero(Vec3) {
		x = 0;
		y = 0;
		z = 0;
		
	}
	void Vec3::is_zero(Vec3) {
		
		if (x != 0 && y != 0 && z != 0) {
			
			iszero=false;

		}
		else
		{
			iszero = true;
		}

	}


	void Vec3::distance_to(Vec3 vector,Vec3 vector2) {
		

		
		int resx, resy, resz=0 ;
		resx = vector.x - vector2.x;
		resy = vector.y - vector2.y;
		resz = vector.z - vector2.z;
		
		cout << resx << "," << resy << "," << resz << endl;
	}





	int main() {

		Vec3 vector(25,35,65);
		Vec3 vector2(3, 3, 3);
		Vec3 vector3(3, 3, 3);
		
		/*cout << "Introduce Vector1: " << endl;
		
		cin >> vector.x;
		cin >> vector.y;
		cin >> vector.z;

		cout << vector.x << "," << vector.y << "," << vector.z << endl;
		cout << "Introduce vector2: " << endl;

		cin >> vector2.x;
		cin >> vector2.y;
		cin >> vector2.z;
		
		cout << vector.x << "," << vector.y << "," << vector.z << endl;

		cout << "Are they zero vectors? " << endl;

		vector.is_zero(vector);
		vector.is_zero(vector2);

		cout << "Distance between vectors: " << endl;

		vector.distance_to(vector, vector2);

		cout << "Vector1 a 0" << endl;
		
		vector.zero(vector);
		cout << vector.x << "," << vector.y << "," << vector.z << endl;

		vector.normalize(vector);

		cout << vector.x << "," << vector.y << "," << vector.z << endl;*/

		system("pause");
		return 0;
	}





#ifndef CLASS_H
#define CLASS_H

#include <string.h>
#include <assert.h>


class String
{
private:
	char* string  = nullptr;
	unsigned int my_allocate = 0u;

public:
	String() {};
	String(const char* string)
	{
		assert(string != nullptr);
		if (string != nullptr) {
			my_allocate = strlen(string) + 1;
			this->string = new char[my_allocate];

		}

	}
	~String() {
		if (string != nullptr) {
			delete[] string;
		}
		
	}
	

};




#endif
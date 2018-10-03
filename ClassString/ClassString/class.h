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
	
	String(const String &chain) 
	{
		assert(chain.string != nullptr);
		if (chain.string != nullptr) {
			my_allocate = strlen(chain.string) + 1;
			this->string = new char[my_allocate];

		}

	}



	String(const char* string)
	{
		assert(string != nullptr);
		if (string != nullptr) {
			my_allocate = strlen(string) + 1;
			this->string = new char[my_allocate];

		}

	}

	String operator=(const String &chain) {
		
		


	}

	~String() {
		if (string != nullptr) {
			delete[] string;
			my_allocate = 0u;
		}
		
	}

	

};




#endif
#include "stdafx.h"

template<typename T>
class Array3D {
protected:
	T *buffer[];
public:
	Array3D();
	~Array3D(){
		delete buffer;
	}
	Array3D(int xSize, int ySize, int zSize);	

	//Copy constructor en assignement.
	Array3D(Array3D& other){
		buffer = new T[];
		*buffer = *other.buffer;
	}
	Array3D<T>& operator=(const Array3D& other){
		if (this != &other){
			buffer = new T[];
			*buffer = *other.buffer;
		}
		return *this;
	}

	//move Constructor
	Array3D(Array3D&& other){
		buffer = other.buffer;
		other.buffer = nullptr;
	}
	//move operator moet nog hier



	const T& get(int x, int y, int z);
    void put(const T&);

	int get_x_size();
	int get_y_size();
	int get_z_size();
	int index(int x, int y, int z) const { return y_size * x_size * z + x_size * y + x; }
};
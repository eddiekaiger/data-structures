// A custom hashmap implementation.
// Copyright © 2015 Eddie Kaiger

#include <cstring>

template <typename T>
class {
	
public:
	HashMap();
	~HashMap();
	void put(string key, T value);
	T get(string key);
	int count();
private:
	T** map;
	
};
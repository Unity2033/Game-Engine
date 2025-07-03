#pragma once
#include <iostream>

using namespace std;

class Resource
{
private:
	shared_ptr<Resource> resource;

public:
	Resource();
	void Share(const shared_ptr<Resource>& pointer);
	~Resource();
};


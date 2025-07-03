#include "Resource.h"

Resource::Resource()
{
	cout << "Created Resource" << endl;
}

void Resource::Share(const shared_ptr<Resource> & pointer)
{
	resource = pointer;
}

Resource::~Resource()
{
	cout << "Release Resource" << endl;
}

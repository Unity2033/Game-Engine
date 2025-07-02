#include "Packet.h"

Packet::Packet()
{
	cout << "Created Packet" << endl;
}

void Packet::Receive()
{
	cout << "Receive" << endl;
}

Packet::~Packet()
{
	cout << "Release Packet" << endl;
}

#include "Packet.h"

using namespace std;

Packet::Packet()
{
	this->size = 0;
	memset(this->payload, 0, MAX_PAYLOAD_SIZE);
}


Packet Packet::operator / (Packet& pkt)
{
	if (pkt.size > 0)
	{
		memcpy(this->payload + this->size, pkt.payload, pkt.size);
		this->size += pkt.size;
		return *this;
	}
	return *this;
}

void Packet::show()
{
	int i = 0;
	cout << "----------------------------------------------" << endl;
	for (i = 0; i < this->size; i++)
	{
		printf("0x%02x\t", this->payload[i]);
		//cout << showbase << hex << this->payload[i] << '\t';
	}
	cout << endl;
	cout << "##############################################" << endl;
}

void Packet::fill_data( u8* data, int len)
{
	memcpy(this->payload + this->size, data, len);
	this->size += len;
}
#pragma once
#include <string>
#include <iostream>
#include "main.h"


class Packet
{
public:
	static const int MAX_PAYLOAD_SIZE = 1500;

	Packet();

	Packet operator / (Packet& pkt);

	void show();

	void fill_data(u8* data, int len);

private:
	u8 payload[MAX_PAYLOAD_SIZE];
	int  size = 0;
};


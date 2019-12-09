#pragma once
#include "Packet.h"
class Ether :
	public Packet
{
public:
	static const int ETH_ADDR_LEN = 6;

	Ether(u8* dmac, u8* smac, u16 pro);

	void addPayload();

private:
	unsigned char dst_mac[6];
	unsigned char src_mac[6];
	unsigned short protocal;
};


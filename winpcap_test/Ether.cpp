#include "Ether.h"

Ether::Ether(u8* dmac, u8* smac, u16 protocal)
{
	memcpy(this->dst_mac, dmac, ETH_ADDR_LEN);
	memcpy(this->src_mac, smac, ETH_ADDR_LEN);
	this->protocal = protocal;

	addPayload();
}

void Ether::addPayload()
{
	fill_data(this->dst_mac, ETH_ADDR_LEN);
	fill_data(this->src_mac, ETH_ADDR_LEN);
	fill_data((u8 *)& this->protocal, sizeof(u16));
}
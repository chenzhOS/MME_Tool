#include "MMEHeader.h"

MMEHeader::MMEHeader(u8 version, u16 mmtype)
{
	this->version = version;
	this->mmtype = mmtype;

	addPayload();
}

void MMEHeader::addPayload()
{
	fill_data(&this->version, 1);
	fill_data((u8 *)&this->mmtype, 2);
}
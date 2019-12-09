#pragma once
#include "Packet.h"
#include "main.h"

class MMEHeader :
	public Packet
{
public:
	MMEHeader(u8 version, u16 mmtype);

	void addPayload();

private:
	u8 version;
	u16 mmtype;
};


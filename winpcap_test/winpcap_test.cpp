// winpcap_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define WIN32

#include <iostream>
#include "pcap.h"
#include "Packet.h"
#include "MMEHeader.h"
#include "Ether.h"

#define WIN32

#pragma comment(lib,"../../WpdPack/Lib/x64/Packet.lib")
#pragma comment(lib,"../../WpdPack/Lib/x64/wpcap.lib")

using namespace std;

int main()
{
	u8 dmac[6] = { 1,2,3,4,5,6 };
	u8 smac[6] = { 9,8,7,6,5,4 };

	Packet eth = Ether(dmac, smac, 0x88e1);
	Packet mme = MMEHeader(1, 0xa001);

	Packet pkt = eth / mme / mme;
	pkt.show();

#if 0
	char err_msg[1024] = { 0 };
	pcap_if_t* all_devs = NULL;
	pcap_if_t* dev = NULL;

	if (!pcap_findalldevs(&all_devs, err_msg))
	{
		cout << "find dev err: " << err_msg << endl;

	}

	for (dev = all_devs; dev; dev = dev->next)
	{
		cout << "name:" << dev->name << "des:" << dev->description << endl;
	}

    cout << "Hello World!\n";
#endif
}



/**************************************************************************
	Souliss 
    Copyright (C) 2014

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
		
	Originally developed by Fulvio Spelta and Dario Di Maio
	
***************************************************************************/
/*!
    \file 
    \ingroup
*/
#ifndef MQTT_Interface_H
#define MQTT_Interface_H

#include "Client.h"
#include <PubSubClient.h>

#include "GetConfig.h"						// need : ethUsrCfg.h, vNetCfg.h, SoulissCfg.h

// XML over TCP/HTTP	(polling)
//#define HTTPPORT		80					// Listening for WebServer
//#define	HTTP_REQBYTES	50					// Max length for URL request
//#define HTTP_BUFBYTES	(20+12*MaCaco_SLOT)	// Max length for data buffer
#define MQTT_BUFBYTES1 30
#define MQTT_BUFBYTES2 10

//#define NULLID			0xFF				// This ID value is assumed as Null

//#define	MAXVALUES		5					// Number of values into a single URL, comma separated

/*typedef struct
{
	U16	address;							// Node Address
	U8  slot;								// Node Slot
} CommandBufferHeader;
*/

#define MQTTI_LOG LOG.print
 
#if(MQTT_INTERFACE && VNET_MEDIA1_ENABLE) //&& ( ETH_W5100 || ETH_W5200 || ETH_W5500 || ETH_ENC28J60)
    void MQTT_InterfaceInit(U8 *memory_map,const char* server, uint16_t port, Client& client);
    void MQTT_InterfaceProcess(U8 *memory_map);
#endif

#endif

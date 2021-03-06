/*
 * Copyright (c) 2015, EURECOM (www.eurecom.fr)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
 */
#ifndef MME_DEFAULT_VALUES_H_
#define MME_DEFAULT_VALUES_H_

/*******************************************************************************
 * Timer Constants
 ******************************************************************************/
#define MME_STATISTIC_TIMER_S  (60)

/*******************************************************************************
 * GTPV1 User Plane Constants
 ******************************************************************************/
#define GTPV1_U_PORT_NUMBER    (2152)

/*******************************************************************************
 * S1AP Constants
 ******************************************************************************/

#define S1AP_PORT_NUMBER (36412) ///< S1AP SCTP IANA ASSIGNED Port Number
#define S1AP_SCTP_PPID   (18)    ///< S1AP SCTP Payload Protocol Identifier (PPID)

#define S1AP_OUTCOME_TIMER_DEFAULT (5)     ///< S1AP Outcome drop timer (s)

/*******************************************************************************
 * S6A Constants
 ******************************************************************************/

#define S6A_CONF_FILE "../S6A/freediameter/s6a.conf"

/*******************************************************************************
 * SCTP Constants
 ******************************************************************************/

#define SCTP_RECV_BUFFER_SIZE (1 << 16)
#define SCTP_OUT_STREAMS      (32)
#define SCTP_IN_STREAMS       (32)
#define SCTP_MAX_ATTEMPTS     (5)

/*******************************************************************************
 * MME global definitions
 ******************************************************************************/

#define MAX_NUMBER_OF_ENB       (2)
#define MAX_NUMBER_OF_UE        (64)

#define MMEC                    (0)
#define MMEGID                  (0)
#define PLMN_MCC                (208)
#define PLMN_MNC                (34)
#define PLMN_MNC_LEN            (2)
#define PLMN_TAC                (0)

#define RELATIVE_CAPACITY       (15)

/*******************************************************************************
 * IPv4 Constants
 ******************************************************************************/

/* Default network card to use for IPV4 packets forwarding.
 * up stands for user-plane.
 * cp stands for control-plane
 *
 *        +-----------+          +------+              +-----------+
 *        |  eNB      +------+   |  ovs | VLAN 1+------+    MME    |
 *        |           |cpenb0+------------------+cpmme0|           |
 *        |           +------+   |bridge|       +------+           |
 *        |           |upenb0+-------+  |              |           |
 *        +-----------+------+   |   |  |              +-+------+--+
 *                               +---|--+                |s11mme|
 *                                   |                   +---+--+
 *                                   |                 VLAN3 | (optional)
 *                                   |                   +---+--+
 *                                   |                   |s11sgw|
 *                                   |                 +-+------+--+
 *                                   |                 |  S+P-GW   |
 *                                   |  VLAN2   +------+           +--------+
 *                                   +----------+upsgw0|           |pgwsgi0 +
 *                                              +------+           +--------+
 *                                                     |           |
 *                                                     +-----------+
 */

#define DEFAULT_SGW_INTERFACE_NAME_FOR_S11            ("s11sgw")
#define DEFAULT_SGW_IP_ADDRESS_FOR_S11                ("192.168.10.1")
#define DEFAULT_SGW_IP_NETMASK_FOR_S11                24

#define DEFAULT_SGW_INTERFACE_NAME_FOR_S1U_S12_S4_UP  ("upsgw0")
#define DEFAULT_SGW_IP_ADDRESS_FOR_S1U_S12_S4_UP      ("192.168.1.1")
#define DEFAULT_SGW_IP_NETMASK_FOR_S1U_S12_S4_UP      24

#define DEFAULT_SGW_INTERFACE_NAME_FOR_S5_S8_UP       ("upsgw1")
#define DEFAULT_SGW_IP_ADDRESS_FOR_S5_S8_UP           ("192.168.5.2")
#define DEFAULT_SGW_IP_NETMASK_FOR_S5_S8_UP           24

#define DEFAULT_PGW_INTERFACE_NAME_FOR_S5_S8          ("uppgw0")
#define DEFAULT_PGW_IP_ADDRESS_FOR_S5_S8              ("192.168.5.1")
#define DEFAULT_PGW_IP_NETMASK_FOR_S5_S8              24

#define DEFAULT_PGW_INTERFACE_NAME_FOR_SGI            ("eth0")
#define DEFAULT_PGW_IP_ADDR_FOR_SGI                   ("192.168.14.17")
#define DEFAULT_PGW_IP_NETMASK_FOR_SGI                24

#define DEFAULT_MME_INTERFACE_NAME_FOR_S11            ("s11mme")     ///< MME control plane interface
#define DEFAULT_MME_IP_ADDRESS_FOR_S11                ("192.168.10.2")   ///< MME control plane IP address
#define DEFAULT_MME_IP_NETMASK_FOR_S11                24;

#define DEFAULT_MME_INTERFACE_NAME_FOR_S1_MME         ("cpmme0")     ///< MME control plane interface
#define DEFAULT_MME_IP_ADDRESS_FOR_S1_MME             ("192.168.11.1")   ///< MME control plane IP address
#define DEFAULT_MME_IP_NETMASK_FOR_S1_MME             24;


#endif /* MME_DEFAULT_VALUES_H_ */

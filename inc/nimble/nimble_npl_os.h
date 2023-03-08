/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef _NIMBLE_NPL_OS_H_
#define _NIMBLE_NPL_OS_H_

#include <stdint.h>

#include "nimble/event_shim.h"
#include "nimble/fiber_shim.h"

#define BLE_NPL_OS_ALIGNMENT    4

#define BLE_NPL_TIME_FOREVER    UINT32_MAX

typedef uint32_t ble_npl_time_t;
typedef int32_t ble_npl_stime_t;

struct ble_npl_event {
    void * event;
    //example  struct os_event ev;
};

struct ble_npl_eventq {
    //done like this in linux version
    void *q;
};

struct ble_npl_callout {
    // Timers
    void * timer;
};

struct ble_npl_mutex {
    void * lock;
};

struct ble_npl_sem {
    void * lock;
};


//my stuff
#define MYNEWT_VAL_BLE_LL_MANUFACTURER_ID "microbit"
#define MYNEWT_VAL_BLE_LL_TX_PWR_DBM 0
#define MYNEWT_VAL_BLE_LL_TX_PWR_MAX_DBM 20
#define MYNEWT_VAL_BLE_LL_CONN_INIT_SLOTS 4
#define MYNEWT_VAL_BLE_LL_CONN_INIT_MIN_WIN_OFFSET 0
#define MYNEWT_VAL_BLE_LL_CONN_PHY_DEFAULT_PREF_MASK (0x07)
#define MYNEWT_VAL_BLE_LL_SCA 60 
#define MYNEWT_VAL_BLE_LL_RNG_BUFSIZE 32
#define MYNEWT_VAL_BLE_PUBLIC_DEV_ADDR ((uint8_t[6]){0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#define MYNEWT_VAL_BLE_PHY_DBG_TIME_TXRXEN_READY_PIN (-1)
#define MYNEWT_VAL_BLE_PHY_DBG_TIME_WFR_PIN (-1)
#define MYNEWT_VAL_BLE_FEM_LNA (0)
#define MYNEWT_VAL_BLE_PHY_DBG_TIME_ADDRESS_END_PIN (-1)
#define MYNEWT_VAL_BLE_FEM_PA (0)
#define MYNEWT_VAL_BLE_LL_WHITELIST_SIZE (8)

// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__builtin
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__builtin (1)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__custom
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__custom (0)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__da1469x
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__da1469x (0)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__emspi
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__emspi (0)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__ram
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__ram (0)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__socket
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__socket (0)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT__uart
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT__uart (0)
// #endif
// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT (1)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_EMSPI
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT_EMSPI (0)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_NIMBLE_BUILTIN
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT_NIMBLE_BUILTIN (0)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_RAM
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT_RAM (0)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_SOCKET
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT_SOCKET (0)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_UART
// #define MYNEWT_VAL_BLE_HCI_TRANSPORT_UART (0)
// #endif

// /*** @apache-mynewt-nimble/nimble/transport/ram */
// #ifndef MYNEWT_VAL_BLE_ACL_BUF_COUNT
// #define MYNEWT_VAL_BLE_ACL_BUF_COUNT (4)
// #endif

// #ifndef MYNEWT_VAL_BLE_ACL_BUF_SIZE
// #define MYNEWT_VAL_BLE_ACL_BUF_SIZE (255)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE
// #define MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE (70)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT
// #define MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT (2)
// #endif

// #ifndef MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT
// #define MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT (8)
// #endif

// #ifndef MYNEWT_VAL_BLE_TRANS_RAM_SYSINIT_STAGE
// #define MYNEWT_VAL_BLE_TRANS_RAM_SYSINIT_STAGE (100)
// #endif
#endif  /* _NPL_H_ */

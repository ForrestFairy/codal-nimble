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

#ifdef __cplusplus
extern "C" {
#endif

#define BLE_NPL_OS_ALIGNMENT    4

#define BLE_NPL_TIME_FOREVER    UINT32_MAX

typedef uint32_t ble_npl_time_t;
typedef int32_t ble_npl_stime_t;

struct ble_npl_event {
    int dummy;
    //example  struct os_event ev;
};

struct ble_npl_eventq {
    int dummy;
};

struct ble_npl_callout {
    int dummy;
};

struct ble_npl_mutex {
    int dummy;
};

struct ble_npl_sem {
    int dummy;
};

#ifdef __cplusplus
}
#endif

// #define MYNEWT_VAL_BLE_LL_MANUFACTURER_ID "microbit"
// #define MYNEWT_VAL_BLE_LL_TX_PWR_DBM 0
// #define MYNEWT_VAL_BLE_LL_SC 0
// #define MYNEWT_VAL_BLE_LL_CONN_INIT_SLOTS 0
// #define MYNEWT_VAL_BLE_LL_RNG_BUFSIZ 0
// #define MYNEWT_VAL_BLE_LL_SCA 0 
// #define MYNEWT_VAL_BLE_LL_TX_PWR_MAX_DBM 0
// #define MYNEWT_VAL_BLE_LL_RNG_BUFSIZE 0
// #define MYNEWT_VAL_BLE_LL_CONN_INIT_MIN_WIN_OFFSET 0
// #define MYNEWT_VAL_BLE_LL_CONN_PHY_DEFAULT_PREF_MASK 0
// #define MYNEWT_VAL_BLE_PUBLIC_DEV_ADDR 0

#define BLE_TRANSPORT_LL 1


#endif  /* _NPL_H_ */

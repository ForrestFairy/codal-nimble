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

#include <stddef.h>
#include "nimble/nimble_npl.h"
#include "nimble/nimble_npl_os.h"

#include "CodalDmesg.h"

#include "nimble/event_shim.h"
#include "nimble/fiber_shim.h"

// #include "Event.h"
// #include "CodalFiber.h"

// static FiberLock ble_lock;
static struct ble_npl_eventq dflt_eventq;
/*
Generic
*/
bool
ble_npl_os_started(void)
{
    return 0;
}

void *
ble_npl_get_current_task_id(void)
{
    //fiber lock address? or 0
    return NULL;
}

/*
Event queue
*/
void
ble_npl_eventq_init(struct ble_npl_eventq *evq)
{
    
    void * event = createEvent();
    DMESGF( "ble_npl_eventq_init" );
}

struct ble_npl_event *
ble_npl_eventq_get(struct ble_npl_eventq *evq, ble_npl_time_t tmo)
{
    
}

static inline struct ble_npl_eventq *
ble_npl_eventq_dflt_get(void)
{
    return &dflt_eventq;
}

void
ble_npl_eventq_put(struct ble_npl_eventq *evq, struct ble_npl_event *ev)
{
    
}

void
ble_npl_eventq_remove(struct ble_npl_eventq *evq,
                      struct ble_npl_event *ev)
{

}

void
ble_npl_eventq_run(struct ble_npl_eventq *evq)
{
    DMESGF( "ble_npl_eventq_run" );
}

void
ble_npl_event_run(struct ble_npl_event *ev)
{

}

void
ble_npl_event_init(struct ble_npl_event *ev, ble_npl_event_fn *fn,
                   void *arg)
{
    ev->event = createEvent();
    DMESGF( "ble_npl_event_init" );
}
/* added by me - is in mynewt and linux versions
bool ble_npl_eventq_is_empty(struct ble_npl_eventq *evq)
{
}
*/

bool ble_npl_event_is_queued(struct ble_npl_event *ev)
{
    return true;
}

void *
ble_npl_event_get_arg(struct ble_npl_event *ev)
{
    return NULL;
}

void
ble_npl_event_set_arg(struct ble_npl_event *ev, void *arg)
{

}

/*
Mutexes
*/

ble_npl_error_t
ble_npl_mutex_init(struct ble_npl_mutex *mu)
{
    DMESGF( "ble_npl_mutex_init" );
    if (!mu) {
        return BLE_NPL_INVALID_PARAM;
    }
    // void * fiberlock = createMutex();
    mu->lock = createMutex();
    return BLE_NPL_OK;
}

ble_npl_error_t
ble_npl_mutex_pend(struct ble_npl_mutex *mu, ble_npl_time_t timeout)
{
    wait(mu->lock);
    return BLE_NPL_ENOENT;
}

ble_npl_error_t
ble_npl_mutex_release(struct ble_npl_mutex *mu)
{
    if (!mu) {
        return BLE_NPL_INVALID_PARAM;
    }
    notify(&mu->lock);
    return BLE_NPL_OK;
}

/*
Semaphores
*/

ble_npl_error_t
ble_npl_sem_init(struct ble_npl_sem *sem, uint16_t tokens)
{
    DMESGF( "ble_npl_sem_init" );
    int tok = (int) tokens;
    sem->lock = createSemaphore(tokens);
    return BLE_NPL_ENOENT;
}

ble_npl_error_t
ble_npl_sem_pend(struct ble_npl_sem *sem, ble_npl_time_t timeout)
{
    if (!sem) {
        return BLE_NPL_INVALID_PARAM;
    }
    wait(sem->lock);
    //maybe wait
    return BLE_NPL_OK;
}

ble_npl_error_t
ble_npl_sem_release(struct ble_npl_sem *sem)
{
    if (!sem) {
        return BLE_NPL_INVALID_PARAM;
    }
    notify(&sem->lock);
    return BLE_NPL_OK;
}

uint16_t
ble_npl_sem_get_count(struct ble_npl_sem *sem)
{
    //get wait count
    int count = getWaitCount(sem->lock);
    return (uint16_t) count;
}

/*
Callouts
*/

void
ble_npl_callout_init(struct ble_npl_callout *c, struct ble_npl_eventq *evq,
                     ble_npl_event_fn *ev_cb, void *ev_arg)
{
    DMESGF( "ble_npl_callout_init" );
}

ble_npl_error_t
ble_npl_callout_reset(struct ble_npl_callout *c, ble_npl_time_t ticks)
{
    return BLE_NPL_ENOENT;
}

void
ble_npl_callout_stop(struct ble_npl_callout *co)
{

}

bool
ble_npl_callout_is_active(struct ble_npl_callout *c)
{
    return false;
}

ble_npl_time_t
ble_npl_callout_get_ticks(struct ble_npl_callout *co)
{
    return 0;
}

/*
static inline ble_npl_time_t
ble_npl_callout_remaining_ticks(struct ble_npl_callout *co,
                                ble_npl_time_t time)
{
}

static inline void
ble_npl_callout_set_arg(struct ble_npl_callout *co,
                        void *arg)
{
}
*/

/*
Time functions
*/
//system_timer
uint32_t
ble_npl_time_get(void)
{
    return 0;
}

ble_npl_error_t
ble_npl_time_ms_to_ticks(uint32_t ms, ble_npl_time_t *out_ticks)
{
    return BLE_NPL_ENOENT;
}

ble_npl_error_t
ble_npl_time_ticks_to_ms(ble_npl_time_t ticks, uint32_t *out_ms)
{
    return BLE_NPL_ENOENT;
}

ble_npl_time_t
ble_npl_time_ms_to_ticks32(uint32_t ms)
{
    return 0;
}

uint32_t
ble_npl_time_ticks_to_ms32(ble_npl_time_t ticks)
{
    return 0;
}

/*
void
ble_npl_time_delay(ble_npl_time_t ticks)
{
}
*/
//static fiber lock
uint32_t
ble_npl_hw_enter_critical(void)
{

}

void
ble_npl_hw_exit_critical(uint32_t ctx)
{
}

/* only in linux version not in mynewt
bool ble_npl_hw_is_in_critical(void);
*/

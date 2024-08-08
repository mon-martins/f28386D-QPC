/*
 * application.c
 *
 *  Created on: 11 de mar de 2024
 *      Author: ramon.martins
 */

#include "application.h"

// Reserve the stack and queue storage space

static QEvt const *blinky_queue_sto[10]; /* event queue buffer for blinky */
static StackType_t  blinky_stack[(unsigned int)(configMINIMAL_STACK_SIZE)]; /* stack for blinky */

#pragma DATA_SECTION(blinky_stack, ".freertosStaticStack")
#pragma DATA_ALIGN ( blinky_stack , portBYTE_ALIGNMENT)


// reserve the area to mutable events

static EvtPool1_t EvtPool1_inst[EVT_POOL_1_SIZE];
static EvtPool2_t EvtPool2_inst[EVT_POOL_2_SIZE];
static EvtPool3_t EvtPool3_inst[EVT_POOL_3_SIZE];
static EvtPool4_t EvtPool4_inst[EVT_POOL_4_SIZE];

// Initialize your publish subscriber list

static QSubscrList subscr_sto[MAX_PUB_SIG];

void active_objects_init(void){

    QF_init();

// Init your Event Pool

    QF_poolInit( EvtPool1_inst , sizeof(EvtPool1_inst)  , sizeof(EvtPool1_inst[0]) );
    QF_poolInit( EvtPool2_inst , sizeof(EvtPool2_inst)  , sizeof(EvtPool2_inst[0]) );
    QF_poolInit( EvtPool3_inst , sizeof(EvtPool3_inst)  , sizeof(EvtPool3_inst[0]) );
//    QF_poolInit( EvtPool4_inst , sizeof(EvtPool4_inst)  , sizeof(EvtPool4_inst[0]) );


    // Init your PS List

    QF_psInit(subscr_sto, Q_DIM(subscr_sto));

    // Init your AOs here

    /* instantiate and start the blinky active object */

    ao_blinky_ctor(p_ao_blinky); /* in C you must explicitly call the blinky constructor */
    QACTIVE_START(p_ao_blinky, /* active object to start */
        AO_BLINKY_PRIO,                  /* priority of the active object */
        blinky_queue_sto,     /* event queue buffer */
        Q_DIM(blinky_queue_sto), /* the length of the buffer */
        blinky_stack,
        sizeof(blinky_stack),
        (QEvt *)0);          /* initialization event (not used) */

}

void application_init(void){
    // Initialize your code here

    //    CLA_forceTasks(myCLA0_BASE, CLA_TASKFLAG_1);

    // Starting AOs
    active_objects_init();
}

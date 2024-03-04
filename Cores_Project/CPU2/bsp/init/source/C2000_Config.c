#include "C2000_Config.h"

void C2000_Init(void){

    //
    // Initialize device clock and peripherals
    //
    Device_init();


    //
    // Initialize PIE and clear PIE registers. Disables CPU interrupts.
    //
    Interrupt_initModule();

    //
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    //
    Interrupt_initVectorTable();

    Board_init();

    C2000Ware_libraries_init();

    IPC_sync(IPC_CPU2_L_CPU1_R, IPC_SYNC);
}

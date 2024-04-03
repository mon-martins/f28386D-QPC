//$file${.::Cores_Project::CM::qm_files::ao_blinky::blinky.c} vvvvvvvvvvvvvvvv
//
// Model: main_model.qm
// File:  ${.::Cores_Project::CM::qm_files::ao_blinky::blinky.c}
//
// This code has been generated by QM 6.1.1 <www.state-machine.com/qm>.
// DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
//
// SPDX-License-Identifier: GPL-3.0-or-later
//
// This generated code is open source software: you can redistribute it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation.
//
// This code is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
// more details.
//
// NOTE:
// Alternatively, this generated code may be distributed under the terms
// of Quantum Leaps commercial licenses, which expressly supersede the GNU
// General Public License and are specifically designed for licensees
// interested in retaining the proprietary status of their code.
//
// Contact information:
// <www.state-machine.com/licensing>
// <info@state-machine.com>
//
//$endhead${.::Cores_Project::CM::qm_files::ao_blinky::blinky.c} ^^^^^^^^^^^^^
#include "./blinky.h"

//$skip${QP_VERSION} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
// Check for the minimum required QP version
#if (QP_VERSION < 730U) || (QP_VERSION != ((QP_RELEASE^4294967295U) % 0x3E8U))
#error qpc version 7.3.0 or higher required
#endif
//$endskip${QP_VERSION} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

//$define${AOs::blinky} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

//${AOs::blinky} .............................................................
blinky blinky_inst;

//${AOs::blinky::SM} .........................................................
QState blinky_initial(blinky * const me, void const * const par) {
    //${AOs::blinky::SM::initial}
    QTimeEvt_armX(&me->time_evt,500, 500);

    QS_FUN_DICTIONARY(&blinky_off);
    QS_FUN_DICTIONARY(&blinky_on);

    return Q_TRAN(&blinky_off);
}

//${AOs::blinky::SM::off} ....................................................
QState blinky_off(blinky * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        //${AOs::blinky::SM::off}
        case Q_ENTRY_SIG: {
            blinky_led_off();
            status_ = Q_HANDLED();
            break;
        }
        //${AOs::blinky::SM::off::TIMEOUT}
        case TIMEOUT_SIG: {
            status_ = Q_TRAN(&blinky_on);
            break;
        }
        default: {
            status_ = Q_SUPER(&QHsm_top);
            break;
        }
    }
    return status_;
}

//${AOs::blinky::SM::on} .....................................................
QState blinky_on(blinky * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        //${AOs::blinky::SM::on}
        case Q_ENTRY_SIG: {
            blinky_led_on();
            status_ = Q_HANDLED();
            break;
        }
        //${AOs::blinky::SM::on::TIMEOUT}
        case TIMEOUT_SIG: {
            status_ = Q_TRAN(&blinky_off);
            break;
        }
        default: {
            status_ = Q_SUPER(&QHsm_top);
            break;
        }
    }
    return status_;
}
//$enddef${AOs::blinky} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

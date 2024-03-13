//$file${.::Cores_Project::CPU1::state_machine::qm_files::signals.h} vvvvvvvvv
//
// Model: main_model.qm
// File:  ${.::Cores_Project::CPU1::state_machine::qm_files::signals.h}
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
//$endhead${.::Cores_Project::CPU1::state_machine::qm_files::signals.h} ^^^^^^
#ifndef SIGNALS_H_
#define SIGNALS_H_

#include "qpc.h"

//$declare${Signals} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

//${Signals::signals} ........................................................
enum signals {
    // Publish Subscribe Signals
    TIMEOUT_SIG = Q_USER_SIG,
    // - Only PRIVATE

    MAX_PUB_SIG,

    INIT_SINGLE_TARGET_SIG = 32,
    // - GLOBAL

    // - lOCAL

    // - PRIVATE

    MAX_SIG
};
//$enddecl${Signals} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#endif // SIGNALS_H_

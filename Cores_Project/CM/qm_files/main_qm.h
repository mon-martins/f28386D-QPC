//$file${.::Cores_Project::CM::state_machine::qm_files::main_qm.h} vvvvvvvvvvv
//
// Model: main_model.qm
// File:  ${.::Cores_Project::CM::state_machine::qm_files::main_qm.h}
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
//$endhead${.::Cores_Project::CM::state_machine::qm_files::main_qm.h} ^^^^^^^^
#ifndef MAIN_QM_H_
#define MAIN_QM_H_

#include "signals.h"

// include the AOs

#include "ao_blinky/blinky.h"

//$declare${Shared} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

//${Shared::ao_blinky} .......................................................
extern QActive * const ao_blinky;

//${Shared::blinky_ctor} .....................................................
void blinky_ctor(void);
//$enddecl${Shared} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#endif // MAIN_QM_H_

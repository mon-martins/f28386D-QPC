# Project Blinky LED with FreeRTOS and QPC

A simple blinky project, trying maximize the use of the sysconfig tool, using FreeRTOS provided by C2000Ware 05.00.00.00 and QPC from QuantumLeaps.

In this project each Core blinky it's own LED.

## Getting Started

### Importing

To import this project import the System Project, on root. and remember to check the "Import referenced projects in the same search-directory" box.

### Running

To debug all projects run with the System Project selected.

### Notes

To run this program with Overflow Checking with the second method, it's necessary to change two files in the sdk directory,
to do so just copy and paste the folder C2000Ware_5_00_00_00 inside "Other_Files/Custom" into C2000 directory as sugested in [this topic](https://e2e.ti.com/support/microcontrollers/c2000-microcontrollers-group/c2000/f/c2000-microcontrollers-forum/1340754/tms320f28386d-sysconfig-freertosconfig-stack_overflow/5109670#5109670),
in order to use the original SDK you can do the same using the "Other_Files/Original" Folder. (it will be fixed in the future)

After change this two files you can open the ".syscfg" file, and select the check for stack overflow option on the FreeRTOS tab.

### Command File

The Command file is generated by sysconfig.
While swiching between RAM and Flash, it's necessary
set or delete the _FLASH symbol on Prject's proprieties.


## Making another build configuration:

- Copy the Debug Build Configuration
- Change the "Debug" from the "Predefined Symbols" to your new Build Configuration Name

- Change the pre-build step of the CM replacing Debug to your new Build Configuration Name


## Tools:
QM: 6.1.1
QPC framework: 7.3.3
SDK: C2000WARE 05.00.00.00
SYSCONFIG: V1.19.0
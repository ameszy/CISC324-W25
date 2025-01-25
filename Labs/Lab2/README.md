# CISC 324 - Lab 2: XV6 Installation and IPC Programming

## Objectives
1. Install XV6 operating system on your machine
2. Implement a ping-pong program using inter-process communication (IPC)

## Task 1: XV6 Installation
- Follow the installation instructions provided in [install-xv6-riscv.md](../../install-xv6-riscv.md)
- Installation platforms:
    - Linux (tested on Ubuntu 24.4 LTS)
    - Windows (not tested us, should work with WSL)
    - macOS (not tested, should work with Homebrew)
- Ensure your installation is working by running basic XV6 commands
- Document any issues encountered during installation

## Task 2: Ping-Pong IPC Program
- Implement a program that demonstrates inter-process communication
- Use pipes for process communication
- Reference the sample pipe program provided in the [ipc-example.md](./ipc-example.md) file.
- Requirements:
    - Create two processes that communicate with each other
    - Implement a ping-pong message exchange pattern
    - Demonstrate proper process synchronization

## Submission
- Submit documentation of successful XV6 installation
- Submit your ping-pong program implementation
- Include any challenges faced and solutions found

## Resources
- Sample pipe program in Lab 2 folder
- XV6 installation guide
- Course documentation on IPC mechanisms
# CISC 324 - Lab 2: XV6 Installation and IPC Programming

## Objectives
1. Install XV6 operating system on your machine and run the [pipe_example.c](./pipe_example.c) program on the new operating system.
2. Implement a ping-pong program using inter-process communication (IPC)

<!-- ## Task 1: XV6 Installation
- Follow the installation instructions provided in [install-xv6-riscv.md](../../install-xv6-riscv.md) -->

### How to install and run xv6-riscv

How to install and run xv6-riscv on different operating systems:

- [Ubuntu](install-xv6-riscv.md#how-to-install-and-run-xv6-riscv-on-ubuntu)

- [Windows](install-xv6-riscv.md#how-to-install-and-run-xv6-riscv-on-windows)

- [macOS](install-xv6-riscv.md#how-to-install-and-run-xv6-riscv-on-macos)

- Ensure your installation is working by running echo `hello xv6` in the xv6 shell.

- After successful installation of the OS, follow the instruction in [ipc-example.md](./ipc-example.md) file to run given sample program for a unidirectional pipe example to communicate between a parent and a child.

- Change the message to "hello `<Your name and ID>`, this is a message from the child to the parent."

- Take the screenshot of the output and save it in a file named `lab2_yourname.pdf`.

## Task 2: Ping-Pong IPC Program
- Implement a program that demonstrates inter-process communication
- Use pipes for process communication

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
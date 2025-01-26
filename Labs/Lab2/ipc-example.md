# Running Pipe Communication Program in xv6-riscv

This guide will walk you through how to run a simple program that demonstrates **Inter-Process Communication (IPC)** using **pipes** in xv6-riscv. The program will have a **parent process** reading from the pipe and a **child process** writing to the pipe.

## Step 1: Set up the Environment
Ensure you have **xv6-riscv** set up on your system. If you haven’t done this yet, follow these steps to build and run **xv6**:

1. Clone the `xv6-riscv` repository (do this only if you haven't done it before):
    ```bash
   git clone https://github.com/mit-pdos/xv6-riscv.git
   cd xv6-riscv
    ```
2. Make sure you are in the `xv6-riscv` directory and run the following commands to build and run xv6:
    ```bash
    make
    make qemu
    ```
3. Press `Ctrl+A` followed by `X` to exit the QEMU window.

## Step 2: Implement the Pipe Communication Program

1. Navigate to the `Lab2` directory in the `xv6-riscv` repository:
    ```bash
    cd xv6-riscv/Lab2
    ```
2. Go to the [pipe_example.c](./pipe_example.c) file in your text editor to view the sample pipe communication program.
 - Through this example, we demonstrate a unidirectional pipe communication between a parent and a child process. 

3. Inside the `xv6-riscv` repository, navigate to the `user/` directory.

4. Copy the contents of the `pipe_example.c` file and paste them into a new file in a new file (you may use the same name i.e pipe_example.c) and save it in the `user/` directory.

5. Open the Makefile in the root directory of xv6-riscv.

6. Locate the UPROGS section that you shared, which looks like this:

    ```make
    UPROGS=\
        $U/_cat\
        $U/_echo\
        $U/_forktest\
        $U/_grep\
        $U/_init\
        $U/_kill\
        $U/_ln\
        $U/_ls\
        $U/_mkdir\
        $U/_rm\
        $U/_sh\
        $U/_stressfs\
        $U/_usertests\
        $U/_grind\
        $U/_wc\
        $U/_zombie\
    ```
7. Add your new program by appending lines to the list. Make sure to use the `\` line continuation character.
    ```make
    UPROGS=\
        $U/_cat\
        $U/_echo\
        $U/_forktest\
        $U/_grep\
        $U/_init\
        $U/_kill\
        $U/_ln\
        $U/_ls\
        $U/_mkdir\
        $U/_rm\
        $U/_sh\
        $U/_stressfs\
        $U/_usertests\
        $U/_grind\
        $U/_wc\
        $U/_zombie\
        $U/_pipe_example\
    ```
8. Clean the previous build (if needed):
    ```bash
    make clean
    ```
9. Rebuild xv6:
    ```bash
    make
    ```
10. Run the new program:
    ```bash
    make qemu
    ```
11. Once you're in the xv6 shell, run the program using:
    ```bash
    pipe_example
    ```

# Expected Output:
The program should output something like this:

```
Child writing to pipe
Parent reading from pipe
Received: Hello, Parent!

```








 

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    int p[2];  // File descriptors for the pipe
    char buf[20];

    // Create the pipe
    if (pipe(p) < 0) {
        printf("Pipe creation failed\n");
        exit(1);
    }

    int pid = fork();

    if (pid == 0) {
        // CHILD PROCESS: Writing to the pipe
        printf("Child writing to pipe\n");
        close(p[0]);  // Close unused read end
        write(p[1], "Hello, Parent!", 15);  // Write to the pipe
        close(p[1]);  // Close write end after writing
        exit(0);      // Exit child process
    } else {
        // PARENT PROCESS: Reading from the pipe
        wait(0);  // Wait for the child to finish
        printf("Parent reading from pipe\n");
        close(p[1]);  // Close unused write end
        read(p[0], buf, sizeof(buf));  // Read from the pipe
        printf("Received: %s\n", buf);  // Print the received message
        close(p[0]);  // Close read end after reading
    }

    exit(0);
}

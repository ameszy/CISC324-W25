#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void compute_work(int n)
{
    int i, j, k;
    volatile int dummy = 0; // Use volatile to prevent optimization
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3000000; j++)
        { // Increased workload
            for (k = 0; k < 100; k++)
            {
                dummy += k;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int i;
    int pid;
    int start_time, end_time;

#ifdef SCHEDULER_PBS
    printf("\n=== Priority-Based Scheduler Test ===\n");
#elif SCHEDULER_FCFS
//TODO-2 : Print a message indicating that the Priority-Based Scheduler is selected 

#else
    printf("\n=== Round Robin Scheduler Selected By Default ===\n");
#endif
    printf("Creating 3 processes with priorities: 60, 30 and 0\n");
    printf("Lower number = higher priority\n\n");
    sleep(10);
    // TODO-4: Get from user the number of processes to be shceduled 
    for (i = 0; i < 3; i++)
    {
        pid = fork();
        if (pid < 0)
        {
            printf("Fork failed!\n");
            exit(1);
        }
        if (pid == 0)                     // Child process
        {                                
            int priority = 60 - (i * 30); // 60, 30, 0
            setpriority(priority);
            sleep(10); // Synchronize start times

            start_time = uptime();
            printf("Process %d (priority %d) started at tick %d\n",
                   getpid(), priority, start_time);
            // TODO-3: Look for instructions in the assignment 
            compute_work(100);

            end_time = uptime();
            int duration = end_time - start_time;
            printf("Process %d (priority %d) finished at tick %d (took %d ticks)\n",
                   getpid(), priority, end_time, duration);
            exit(0);
        }
        sleep(5);
    }

    while (wait(0) != -1)
        ;
    printf("\n=== Test Complete ===\n");
    exit(0);
}

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

/**
 * @brief This program forks a child, and the child forks a grandchild.
 *        The grandchild writes: "My process id is X, my parent's id is Y,
 *        and my grandparent's id is Z" (where X,Y, and Z are Linux process ids).
 *        From http://www.cs.utexas.edu/users/mckinley/372/homework/homework1.html
 */
void createGrandchild()
{
    pid_t pid = fork();
    if (pid == 0)
    {
        auto parent = getppid();
        // child process
        pid = fork();
        if (pid == 0)
        {
            // grandchild process
            std::cout << "My process id is " << getpid() << ", my parent's id "
                    << "is " << getppid() << ", and my grandparent's id is "
                    << parent << "." << std::endl;
        }
        else if  (pid > 0)
        {
            // child process
            wait(NULL);
        }
        else
        {
            std::cout << "Error occurred during grandchild fork" << std::endl;
        }
    }
    else if  (pid > 0)
    {
        // parent process
        wait(NULL);
    }
    else
    {
        std::cout << "Error occurred during child fork" << std::endl;
    }
    return;
}

int main()
{
    createGrandchild();
    return 0;
}


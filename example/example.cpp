#include "jprogress_bar.hpp"
#include <thread>
using namespace Joger::ProgressBar;

int main(int argc, char const *argv[])
{
    {
        printf("task1: calc something\n");
        JProgressBar bar(100);
        for (double i = 0; i <= 100; ++i)
        {
            bar.update(i);
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        bar.end();
    }

    {
        printf("task2: send files\n");
        JProgressBar bar(1024.6); // 1024.6MB
        for (double i = 0; i <= 100; ++i)
        {
            bar.update(i);
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        bar.end();
    }

    return 0;
}

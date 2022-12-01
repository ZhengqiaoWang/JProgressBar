# JProgressBar

这是一个非常简单易用的C++进度条头文件。你只需要参考`example`中的案例便可以非常容易地上手使用。

下面是它的使用效果：

![example](assets/example.gif)

它配套的代码是：

```cpp
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
```

## 特性
支持linux和windows平台

### 可以自定义进度条风格。

你可以通过修改头文件中提前定义好的常量来自定义进度条风格

默认情况下是这样的：

### 可以自适应控制台宽度

默认进度条会占用控制台宽度的80%，因此你可以无需关注控制台的宽度。

## Stargazers

[![Stargazers repo roster for @ZhengqiaoWang/JProgressBar](https://reporoster.com/stars/ZhengqiaoWang/JProgressBar)](https://github.com/ZhengqiaoWang/JProgressBar/stargazers)

## Forkers

[![Forkers repo roster for @ZhengqiaoWang/JProgressBar](https://reporoster.com/forks/ZhengqiaoWang/JProgressBar)](https://github.com/ZhengqiaoWang/JProgressBar/network/members)
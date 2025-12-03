# Generic C Programming Template

## Table of Contents

* [About](#about)
* [Dependencies](#dependencies)
    [Option 1: Out of the Box](#out-of-the-box)
    [Option 2: Hands On](#hands-on)

## About

The *Generic C Programming Template* seeks to provide the user with an intuitive project structure fit for any IDE that is compatible with the [CMake build system](https://cmake.org/). The code itself offers a minimal project structure, complete with a third party unit testing library and minimal CMake configuration. The objective is to eliminate any sort of configuration overhead without limiting the opportunities for learning the low-level details of project building. Whether you are a beginner looking for out-of-the-box functionality, or an experienced user looking for an open-ended quickstart, This programming template promises to deliver a smooth experience.

## Dependencies

We know it's a pain to install a bunch of dependencies. If you want a streamlined and simplified development experience, see [Out of the Box](#out-of-the-box). If you like to keep things lightweight and more hands-on, see [Hands On](#hands-on).

### Out of the Box

* [Visual Studio Code](https://code.visualstudio.com/) is our code editor. Lightweight, highly customizeable, and easy to use. **After you install, you will need the below extensions**.
    * [Remote Development](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack)
    * [Container Tools](https://marketplace.visualstudio.com/items?itemName=ms-azuretools.vscode-containers)
* [Docker](https://www.docker.com/) allows us to give you a precompiled list of dependencies and an environment configuration. It will install most, if not all of the tools that you need for your projects so that **you** don't have to.
* [WSL](https://learn.microsoft.com/en-us/windows/wsl/install) *or* [Git Bash]([Git Bash](https://gitforwindows.org/), which are Git clients for windows. Git is not necessarily *required* to use our templates, but it is very helpful. Our engineers use Linux, so we are more comfortable writing bash utilities and thus **require this for anyone using Windows**. Don't worry, the Bash shell is incredibly important to learn anyways ;)

### Hands On

If you are an experienced user and you don't need all that bloated *filth* (just kidding!), then all you need is a C compiler and CMake. I trust you know what you're doing, so I'll only give an example with the [apt package manager](https://wiki.debian.org/Apt) for you Debian users out there.

```sh
sudo apt install -y build-essential cmake
```

## 

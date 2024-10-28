# Embedded Systems C Programming

This repository contains various projects and tasks related to Embedded Systems programming using the C language. The examples and tasks are compiled and run using the GCC (GNU Compiler Collection) compiler.

## Table of Contents
- [C-Language and Embedded Systems C Programming](#embedded-systems-c-programming)
  - [Table of Contents](#table-of-contents)
  - [Project Description](#project-description)
  - [Prerequisites](#prerequisites)
  - [Installing GCC](#installing-gcc)
    - [Windows:](#windows)
    - [macOS:](#macos)

## Project Description
This repository contains exercises and projects focused on Embedded Systems programming using C Language. Each task is stored in its respective folder, and the programs can be compiled and executed using the GCC compiler.

## Prerequisites
Before you can compile and run the C programs in this repository, make sure you have the following:

- A system with a C compiler (GCC)
- Basic knowledge of terminal/command prompt usage

## Installing GCC

### Windows:
1. Install **MinGW**:
   - Go to the [MinGW official download page](http://www.mingw.org/) and download the installer.
   - Run the installer and choose the following packages:
     - `mingw32-base`
     - `mingw32-gcc-g++`
   - Set the `MinGW` bin directory (e.g., `C:\MinGW\bin`) in your system's `PATH` environment variable:
     - Open Control Panel > System > Advanced system settings.
     - Click on "Environment Variables," locate `Path`, and edit it by adding the `C:\MinGW\bin` path.
   - Open a new Command Prompt and type `gcc --version` to check if GCC is installed correctly.

### macOS:
1. Install **Homebrew** (if not already installed):
   - Open Terminal and run:
     ```bash
     /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
     ```
   - After Homebrew is installed, install GCC by running:
     ```bash
     brew install gcc
     ```
2. Verify the installation:
   ```bash
   gcc --version

# Catch2 CMake template

## Overview

Simple starter project for Catch2 using CMake

## Instructions

### Install Catch2 (if not already installed)

* Clone [Catch2](https://github.com/catchorg/Catch2) repo

```bash
mkdir Catch2 && cd Catch2
git clone https://github.com/catchorg/Catch2.git .
```

* Build and install Catch2

```bash
cmake -S . -B build/ -DBUILD_TESTING=OFF # default install location
# or
cmake -S . -B build/ -DBUILD_TESTING=OFF -DCMAKE_INSTALL_PREFIX=<relative/path/to/install> # custom install location
cmake --build build/ --target install
```

### Clone Catch2-template

```bash
mkdir <project-name> && cd <project-name>
git clone https://github.com/pr0g/Catch2-template.git .
```

* Build Catch2-template

```bash
# if Catch2 installed to default location
cmake -S . -B build/
# or
cmake -S . -B build/ -DCMAKE_PREFIX_PATH=<absolute/path/to/install> # if Catch2 installed to custom location
cmake --build build/
```

* Run `catch2-template`

```bash
./build/catch2-template
```

* Disconnect the remote

```bash
git remote rm origin
```

### Optional

* Create a new git remote
* Connect repo to new remote

```bash
git remote add origin <repo-address.git>
git push -u origin master
```

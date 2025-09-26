FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu-22.04

RUN apt-get update && apt-get upgrade -y

RUN apt-get install -y \
    cmake \
    gcc-14 \
    g++-14 \
    build-essential \
    git \
    gdb \
    valgrind \
    curl \
    wget \
    && apt-get clean

RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-14 100 \
    && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-14 100

RUN curl -L https://github.com/vector-of-bool/vscode-cmake-tools/releases/download/v0.0.3/cmake-tools-linux.vsix -o /tmp/cmake-tools.vsix \
    && code --install-extension /tmp/cmake-tools.vsix || true

WORKDIR /workspace/lab2

COPY . .

RUN chmod +x .devcontainer/setup.sh
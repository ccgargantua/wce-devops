FROM ubuntu:24.04

# Install packages
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    gdb \
    valgrind \
    cmake \
    ninja-build \
    curl \
    git \
    ca-certificates \
    apt-transport-https \
    software-properties-common \
    sudo \
    locales \
 && apt-get clean \
 && rm -rf /var/lib/apt/lists/*

# Locale
RUN locale-gen en_US.UTF-8
ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

# Create vscode user with passwordless sudo
RUN useradd -m vscode -s /bin/bash \
    && echo "vscode ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

# Ensure build directory exists and is writable
RUN mkdir -p /home/vscode/.build \
    && chown -R vscode:vscode /home/vscode

USER vscode
WORKDIR /workspaces

CMD ["bash"]

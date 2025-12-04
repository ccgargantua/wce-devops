# Base image 
FROM ubuntu:22.04

# Avoid interactive tzdata prompts
ARG DEBIAN_FRONTEND=noninteractive

# Install base tools + prerequisites
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    gdb \
    valgrind \
    cmake \
    ninja-build \
    curl \
    git \
    ca-certificates \
    wget \
    apt-transport-https \
    software-properties-common \
    sudo \
    locales \
    maven \
 && apt-get clean && rm -rf /var/lib/apt/lists/*

# Install Temurin JDK 21 (Adoptium)
RUN wget -O- https://packages.adoptium.net/artifactory/api/gpg/key/public \
        | gpg --dearmor > /usr/share/keyrings/adoptium.gpg && \
    echo "deb [signed-by=/usr/share/keyrings/adoptium.gpg] \
        https://packages.adoptium.net/artifactory/deb jammy main" \
        > /etc/apt/sources.list.d/adoptium.list && \
    apt-get update && apt-get install -y temurin-21-jdk

# Locale
RUN locale-gen en_US.UTF-8
ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

# Create vscode user
RUN useradd -m vscode -s /bin/bash \
    && echo "vscode ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

RUN mkdir -p /home/vscode/.build \
 && chown -R vscode:vscode /home/vscode

USER vscode
WORKDIR /workspaces

CMD ["bash"]

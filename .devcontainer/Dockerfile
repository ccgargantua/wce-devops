
FROM ubuntu:24.04

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    gdb \
    valgrind \
    curl \
    git \
    ca-certificates \
    apt-transport-https \
    software-properties-common \
    sudo \
    locales \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
    
SHELL ["/bin/bash", "-o", "pipefail", "-c"]

RUN locale-gen en_US.UTF-8

ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8
RUN useradd -m vscode -s /bin/bash \
    && echo "vscode ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers
USER vscode
WORKDIR /workspaces

CMD [ "bash" ]
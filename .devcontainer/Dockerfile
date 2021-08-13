ARG VARIANT="focal"
FROM mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}

ENV CMAKE_GENERATOR=Ninja

COPY library-scripts/desktop-lite-debian.sh /tmp/library-scripts/
RUN apt-get update \
    && bash /tmp/library-scripts/desktop-lite-debian.sh \
    && rm -rf /var/lib/apt/lists/*
ENV DBUS_SESSION_BUS_ADDRESS="autolaunch:" DISPLAY=":1" LANG="en_US.UTF-8" LANGUAGE="en_US.UTF-8"

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install \
    autoconf \
    automake \
    bash-completion \
    bison \
    cmake \
    doxygen \
    ffmpeg \
    flex \
    g++ \
    gdb \
    git \
    golang \
    graphviz \
    libasound2-dev \
    libavcodec-dev \
    libavformat-dev \
    libboost-all-dev \
    libfaad-dev \
    libfftw3-dev \
    libiio-dev \
    libiio-utils \
    libopencv-dev \
    libopus-dev \
    libqt5charts5-dev \
    libqt5multimedia5-plugins \
    libqt5opengl5-dev \
    libqt5quick5 \
    libqt5serialport5-dev \
    libqt5texttospeech5-dev \
    libqt5websockets5-dev \
    libtool \
    libusb-1.0-0-dev \
    libusb-dev \
    libxml2-dev \
    ninja-build \
    pkg-config \
    pulseaudio \
    qml-module-qtlocation \
    qml-module-qtlocation \
    qml-module-qtpositioning \
    qml-module-qtquick-controls \
    qml-module-qtquick-controls2 \
    qml-module-qtquick-dialogs \
    qml-module-qtquick-layouts \
    qml-module-qtquick-window2 \
    qtbase5-dev \
    qtbase5-dev \
    qtchooser \
    qtdeclarative5-dev \
    qtlocation5-dev \
    qtmultimedia5-dev \
    qtpositioning5-dev \
    qttools5-dev \
    qttools5-dev-tools \
    zlib1g-dev \
    && rm -rf /var/lib/apt/lists/*

ENTRYPOINT ["/usr/local/share/desktop-init.sh"]
CMD ["sleep", "infinity"]

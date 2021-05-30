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
    bison \
    build-essential \
    cmake \
    debhelper \
    devscripts \
    fakeroot \
    ffmpeg \
    flex \
    gdb \
    git \
    libairspy-dev \
    libasound2-dev \
    libavcodec-dev \
    libavformat-dev \
    libboost-all-dev \
    libcodec2-dev \
    libfftw3-dev \
    libhackrf-dev \
    libiio-dev \
    libiio-utils \
    libopencv-dev \
    libopencv-imgcodecs-dev \
    libopus-dev \
    libqt5charts5-dev \
    libqt5multimedia5-plugins \
    libqt5opengl5-dev \
    libqt5serialport5-dev \
    libqt5texttospeech5-dev \
    libqt5websockets5-dev \
    librtlsdr-dev \
    libusb-1.0-0-dev \
    libxml2-dev \
    ninja-build \
    qtbase5-dev \
    qtdeclarative5-dev \
    qtlocation5-dev \
    qtmultimedia5-dev \
    qtpositioning5-dev \
    qttools5-dev \
    qttools5-dev-tools \
    && rm -rf /var/lib/apt/lists/*

ENTRYPOINT ["/usr/local/share/desktop-init.sh"]
CMD ["sleep", "infinity"]

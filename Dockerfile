# Get the GCC preinstalled image from Docker Hub
FROM ubuntu:latest

ARG DEBIAN_FRONTEND=noninteractive

COPY . /home

RUN apt-get -y update && apt-get install -y
RUN apt-get -y install git
RUN apt-get -y install gcc
RUN apt-get -y install g++
RUN apt-get -y install cmake
RUN apt-get install make -y
RUN apt-get install apt-utils -y
RUN apt install nano
WORKDIR /home
RUN git clone https://github.com/google/benchmark.git 
RUN git clone https://github.com/google/googletest.git benchmark/googletest


# Use GCC to compile the Test.cpp source file


# Run the program output from the previous step
#CMD ["./test"]
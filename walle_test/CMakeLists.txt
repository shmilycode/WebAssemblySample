PROJECT(main)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
ADD_SUBDIRECTORY(test)
AUX_SOURCE_DIRECTORY(. DIR_SRCS)
ADD_LIBRARY(main SHARED ${DIR_SRCS})
TARGET_LINK_LIBRARIES(main Test)

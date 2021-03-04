# CMakeList.txt : CMake project for ZeroPlayer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

include_directories(../)
# Add source to this project's executable.
add_executable (ZeroPlayer "ZeroPlayer.cpp" "ZeroPlayer.h")

# TODO: Add tests and install targets if needed.
target_link_libraries(ZeroPlayer ZeroThread)
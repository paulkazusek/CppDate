set(SOURCE_FILES main.cpp person.h person.cpp date.h date.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppDate ${SOURCE_FILES})
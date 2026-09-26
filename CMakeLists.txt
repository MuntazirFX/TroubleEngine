cmake_minimum_required(VERSION 3.16)
project(TroubleEngine LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(gdx
  GIT_REPOSITORY https://github.com/MuntazirFX/Graphic-DirectX-.git
  GIT_TAG main)
FetchContent_MakeAvailable(gdx)

add_executable(trouble src/main.cpp)
target_link_libraries(trouble PRIVATE gdx)

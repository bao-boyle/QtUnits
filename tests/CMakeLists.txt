set(CMAKE_AUTOUIC ON)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

# Sources
set(SRC
    main.cpp
    quantitytests.cpp
    unitconvertortests.cpp
)

# Headers
set(HDR
    quantitytests.h
    unitconvertortests.h
    ../submodules/qtestrunner/qtestrunner.hpp
)


#
# The executable
#

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(${TESTS_BINARY_NAME} WIN32 ${SRC} ${HDR} ${MOC_SRC} ${FORMS_HEADERS} ${RC_SRC} ${QM})


#
# Linking
#

target_link_libraries(${TESTS_BINARY_NAME} qtunits Qt5::Test)

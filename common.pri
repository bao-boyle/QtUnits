#
# This file contains common .pro file configuration
# (for QtUnits.pro and tests.pro)
#

# Qt5 needs widgets explicitly configured
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# C++11 compiler flags depending on Qt version
greaterThan(QT_MAJOR_VERSION, 4): CONFIG += c++11
equals(QT_MAJOR_VERSION, 4): QMAKE_CXXFLAGS += -std=c++0x

# Disable warnings
QMAKE_CXXFLAGS +=   -Wno-multichar \
                    -Wno-reorder

# Place shared binaries in bin/ folder
DESTDIR = $${_PRO_FILE_PWD_}../../../bin

TEMPLATE = subdirs

# Make sure projects are built in correct order
CONFIG += ordered

SUBDIRS += \
    src/QtUnits \
    src/tests

# Specify dependencies
tests.depends = QtUnits

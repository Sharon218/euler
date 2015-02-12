.PHONY: clean

BIN=./bin
SRC=./src
LLIB=$(SRC)/sieve_eratos.o
LIB=-lpthread /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a
CXXFLAGS=-O0 -std=c++11

BINARIES=$(BIN)/euler001 \
			$(BIN)/euler002 \
			$(BIN)/euler003 \
			$(BIN)/euler004 \
			$(BIN)/euler005 \
			$(BIN)/euler006 \
			$(BIN)/euler007 \
			$(BIN)/euler008 \
			$(BIN)/euler009 \
			$(BIN)/euler010 \
			$(BIN)/euler011 \
			$(BIN)/euler012 \
			$(BIN)/euler013 \
			$(BIN)/euler014 \
			$(BIN)/euler015 \
			$(BIN)/euler016 \
			$(BIN)/euler017 \
			$(BIN)/unittest

all: $(BINARIES)

clean:
	rm -f $(BINARIES)

$(SRC)/sieve_eratos.o: $(SRC)/sieve_eratos.cpp $(SRC)/sieve_eratos.h

$(SRC)/euler007.o: $(SRC)/euler007.cpp $(SRC)/sieve_eratos.h

$(SRC)/euler010.o: $(SRC)/euler010.cpp $(SRC)/sieve_eratos.h

$(BIN)/euler007: $(SRC)/euler007.o $(SRC)/sieve_eratos.o
	$(CXX) $(CXXFLAGS) $< -o $@ $(LLIB)

$(BIN)/euler010: $(SRC)/euler010.o $(SRC)/sieve_eratos.o
	$(CXX) $(CXXFLAGS) $< -o $@ $(LLIB)

TESTINC := $(wildcard $(SRC)/test_*.h)
SOLUSRC := $(wildcard $(SRC)/euler*.cpp)
$(SRC)/unittest.o: $(SRC)/unittest.cpp $(TESTINC) $(SOLUSRC) $(SRC)/sieve_eratos.h

$(BIN)/unittest: $(SRC)/unittest.o $(SRC)/sieve_eratos.o
		$(CXX) $(CXXFLAGS) $< -o $@ $(LLIB) $(LIB)

#include "sieve_eratos.h"

$(BIN)/%:  $(SRC)/%.o
	$(CXX) $(CXXFLAGS) $< -o $@

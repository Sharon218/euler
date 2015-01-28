.PHONY: clean

BIN=./bin
SRC=./src
LLIB=$(SRC)/sieve_eratos.o
LIB=-lpthread /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a
CXXFLAGS=-O1 -std=c++11

TESTO=$(SRC)\unittest.o $(SRC)\test_sieve.o $(SRC)\euler001.o
TESTHDRS=$(SRC)\test_sieve_eratos.h

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
			$(BIN)/int001 \
			$(BIN)/loop_test \
			$(BIN)/scratch \
			$(BIN)/int002 \
			$(BIN)/unittest

all: $(BINARIES)

clean:
	rm -f $(BINARIES)

$(BIN)/%:  $(SRC)/%.o $(LLIB)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LLIB) $(LIB)

$(BIN)/unittest.o: $(SRC)/unittest.cpp \
	$(SRC)/test_sieve_eratos.h \
	$(SRC)/test_prob_001.h \
	$(CXX) $(CXXFLAGS) $< -o $@

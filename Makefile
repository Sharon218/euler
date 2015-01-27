BIN=./bin
SRC=./src
LLIB=$(SRC)/sieve_eratos.o
LIB=-lpthread /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a
CXXFLAGS=-O1 -ggdb -std=c++11

TESTO=$(SRC)\unittest.o $(SRC)\test_sieve.o

all: $(BIN)/euler001 \
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

$(BIN)/%:  $(SRC)/%.o $(LLIB)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LLIB)

$(BIN)/unittest: $(LLIB) $(TESTO)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LLIB) $(TESTO) $(LIB)

BIN=./bin
SRC=./src
LIB=$(SRC)/sieve_eratos.o
CFLAGS=-O1

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
			$(BIN)/unittest \



$(BIN)/%:  $(SRC)/%.cpp $(LIB)
			$(CXX) -ggdb -std=c++11 $< $(CFLAGS) -o $@ $(LIB)

# $(BIN)/euler007: $(SRC)/euler007.o $(SRC)/sieve_eratos.o
# 			$(CXX) -ggdb -std=c++11 -O1 -o $@ $^ $(CFLAGS)
#
# $(BIN)/euler010: $(SRC)/euler010.o $(SRC)/sieve_eratos.o
# 			$(CXX) -ggdb -std=c++11 -O1 -o $@ $^ $(CFLAGS)

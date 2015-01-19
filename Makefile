BIN=./bin
SRC=./src

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
			$(BIN)/int001


$(BIN)/%:  $(SRC)/%.cpp
			$(CXX) $< $(CFLAGS) -o $@

$(BIN)/euler007: $(SRC)/euler007.o $(SRC)/sieve_eratos.o
			$(CXX) -o $@ $^ $(CFLAGS)

$(BIN)/euler010: $(SRC)/euler010.o $(SRC)/sieve_eratos.o
			$(CXX) -o $@ $^ $(CFLAGS)

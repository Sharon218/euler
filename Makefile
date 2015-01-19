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
			$(BIN)/euler009

$(BIN)/%:  $(SRC)/%.cpp
			$(CXX) $(INC) $< $(CFLAGS) -o $@

CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# List of source files
SRCS = Protect.cpp Character.cpp status.cpp Movepool.cpp Moves.cpp PhysicalAttack.cpp Attack.cpp MagicalAttack.cpp SpecialAttack.cpp main.cpp


OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))


TARGET = $(BIN_DIR)/my_program

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)


-include $(OBJS:.o=.d)


$(OBJ_DIR)/%.d: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -MM -MT '$(patsubst $(OBJ_DIR)/%.d,$(OBJ_DIR)/%.o,$@)' $< -MF $@


Makefile: ;


TARGET = getuser
SRCS = main.cpp getuser.cpp
OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -std=c++20

all: $(TARGET)
clean:
	- rm -f $(TARGET) $(OBJS)
check: $(TARGET)
	./$(TARGET) -t $(USER)
	@echo "Passed the test"
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^
$(OBJS): getuser.h util.h

.PHONY: all clean check

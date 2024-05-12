TARGET = getuser
SRCS = getuser.cpp getuser2.cpp
OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -std=c++20

all: $(TARGET)
clean:
	- rm -f $(TARGET) $(OBJS)
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^
$(OBJS): getuser.h

.PHONY: all clean
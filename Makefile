TARGET = getuser
SRCS = getuser.cpp getuser2.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)
clean:
	- rm -f $(TARGET) $(OBJS)
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^
$(OBJS): getuser.h

.PHONY: all clean
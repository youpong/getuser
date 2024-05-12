TARGET = getuser

all: $(TARGET)
clean:
	- rm -f $(TARGET) *.o	
$(TARGET): getuser.o
	$(CXX) -o $@ $^
.PHONY: all clean
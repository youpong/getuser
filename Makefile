TARGET = getuser

all: $(TARGET)
clean:
	- rm -f $(TARGET) *.o	
$(TARGET): getuser.o
	$(CXX) -o $@ $^
getuser.o: getuser.h

.PHONY: all clean
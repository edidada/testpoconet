CXXFLAGS =	-O2 -g -Wall -fmessage-length=0 
OBJS =		http_get.o

LIBS =	-lPocoNet -lPocoFoundation

TARGET =	http_get

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

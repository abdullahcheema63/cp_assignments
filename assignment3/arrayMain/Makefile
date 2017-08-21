CXXFLAGS =	 -g3 -Wall -fmessage-length=0

OBJS =		arrayMain.o Array.o

LIBS =

TARGET =	arrayMain

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

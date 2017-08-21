CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		arrayMain.o Array.o

LIBS =

TARGET =	arrayMain.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

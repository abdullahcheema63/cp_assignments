CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		buoquetMain.o Flowers.o Buoquet.o

LIBS =

TARGET =	buoquetMain.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

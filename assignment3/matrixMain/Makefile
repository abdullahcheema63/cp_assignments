CXXFLAGS =	-g3 -Wall -fmessage-length=0

OBJS =		matrixMain.o Matrix.o

LIBS =

TARGET =	matrixMain

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

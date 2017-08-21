CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		polynomialMain.o Polynomial.o

LIBS =

TARGET =	polynomialMain.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

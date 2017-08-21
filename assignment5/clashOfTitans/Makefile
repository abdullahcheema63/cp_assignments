CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		clashOfTitans.o Creatures.o Dragon.o Hydra.o

LIBS =

TARGET =	clashOfTitans.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

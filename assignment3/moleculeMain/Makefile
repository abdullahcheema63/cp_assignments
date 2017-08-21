CXXFLAGS =	-g3 -Wall -fmessage-length=0

OBJS =		moleculeMain.o Molecule.o Atom.o Bond.o

LIBS =

TARGET =	moleculeMain

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

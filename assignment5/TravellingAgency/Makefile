CXXFLAGS =	 -g3 -Wall -fmessage-length=0

OBJS =		TravellingAgency.o TravelOption.o Hotel.o Transport.o TravelKit.o CombinedOffers.o

LIBS =

TARGET =	TravellingAgency.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

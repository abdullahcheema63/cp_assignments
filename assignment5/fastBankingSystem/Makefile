CXXFLAGS =	 -g3 -Wall -fmessage-length=0

OBJS =		fastBankingSystem.o Account.o AccountHolder.o CreditCard.o Bank.o DateOfBirth.o Transactions.o

LIBS =

TARGET =	fastBankingSystem.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

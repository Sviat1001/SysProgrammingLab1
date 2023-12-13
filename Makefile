
CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCDIR = .

OBJDIR = .

SOURCES = Main.cpp Renovation.cpp Database.cpp
HEADERS = Renovation.h Database.h

OBJECTS = $(SOURCES:%.cpp=$(OBJDIR)/%.o)

EXECUTABLE = lab1

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJDIR)/*.o $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

all: $(EXECUTABLE)

$(shell mkdir -p $(OBJDIR))

.PHONY: clean run all

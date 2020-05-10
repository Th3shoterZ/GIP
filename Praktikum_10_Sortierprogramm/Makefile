CXX = cl
CXXFLAGS = /EHsc /nologo
MAIN_EXECUTABLE = main.exe

all: $(MAIN_EXECUTABLE)
.PHONY: all

$(MAIN_EXECUTABLE): main.obj sort.obj
	link /nologo	$^ /OUT:$@ 

%.obj: %.cpp %.h
	$(CXX) $(CXXFLAGS) /c $<

main.obj: main.cpp
	$(CXX) $(CXXFLAGS) /c $<

clean:
	del *.obj
.PHONY: clean
distclean: clean
	del $(MAIN_EXECUTABLE)
.PHONY: clean distclean
# cpptest makefile

# variables
CXX = clang++
CPPFLAGS = -std=c++23 -stdlib=libc++
CXXFLAGS = -Wno-reserved-module-identifier
SRCDIR = src
INCDIR = include
BUILDDIR = build
#STDLIB_PCMS = $(INCDIR)/std.pcm $(INCDIR)/std.compat.pcm
STDLIB_PCMS = $(INCDIR)/std.pcm
TARGET_EXE = hellocpp

# rules

all : $(BUILDDIR) $(INCDIR) $(SRCDIR) $(TARGET_EXE)

$(BUILDDIR) : 
	@echo "Build directory $(BUILDDIR) does not exist"
	mkdir -p $(BUILDDIR)

$(INCDIR) : 
	@echo "Include directory $(INCDIR) does not exist"
	mkdir -p $(INCDIR)

$(SRCDIR) : 
	@echo "Source directory $(SRCDIR) does not exist"
	mkdir -p $(SRCDIR)

$(TARGET_EXE) : $(SRCDIR)/helloworld.cpp $(STDLIB_PCMS)
		$(CXX) $(CPPFLAGS) $(CXXFLAGS) -fmodule-file=std=$(INCDIR)/std.pcm $(SRCDIR)/helloworld.cpp -o $(BUILDDIR)/$(TARGET_EXE)

$(STDLIB_PCMS) :  
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) --precompile -o $(INCDIR)/std.pcm /usr/share/libc++/v1/std.cppm
#	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -fmodule-file=std=$(INCDIR)/std.pcm --precompile -o $(INCDIR)/std.compat.pcm /usr/share/libc++/v1/std.compat.cppm


# other standard targets
clean : 
	$(RM) $(BUILDDIR)/*

distclean :	
	$(RM) $(BUILDDIR)/*
	$(RM) $(INCDIR)/*

check : 
	@echo "target 'check' is no-op"

dist : 
	@echo "target 'dist' is no-op"

# $Id$

# debug = 1
# optimize = 1
# exceptions = 0

winsock2 ?= 1
exceptions ?= 1
debug ?= 1
optimize ?= 1
threads ?= 1
pipes ?= 0
inline ?= 0

ifeq ($(debug),0)
CFLAGS += -DNDEBUG /MD
else
CFLAGS += /MDd
endif

ifeq ($(buildbits),64)
  CFLAGS    += /Wp64 -DWIN64
endif

CC      = icl
CXX     = icl
RC      = rc

CFLAGS += -DWIN32 /nologo /GR

EXEEXT = .exe

DCFLAGS +=
DLD     = $(CXX)
LD      = $(CXX)

OCFLAGS += -O3
PIC        =
AR         = ar
ARFLAGS    = rsuv
RANLIB     = ranlib
SOEXT      = dll
OBJEXT     = obj
SOFLAGS    += $(MODEL_FLAGS) $(CPPFLAGS)
SOBUILD    = $(COMPILE.cc) $(PIC) -o $(VSHDIR)$*.so $<

CCFLAGS += $(CFLAGS) $(TEMPLATES_FLAG)

##  Process this file with automake to create Makefile.in
##
## $Id$
##
## This file was generated by MPC.  Any changes made directly to
## this file will be lost the next time it is generated.
##
## MPC Command:
## ./bin/mwc.pl -type automake -noreldefs ACE.mwc

ACE_BUILDDIR = $(top_builddir)
ACE_ROOT = $(top_srcdir)

## Makefile.blobby.am

noinst_PROGRAMS = blobby

blobby_CPPFLAGS = \
  -I$(ACE_ROOT) \
  -I$(ACE_BUILDDIR)

blobby_SOURCES = \
  Blob.cpp \
  Blob_Handler.cpp \
  Options.cpp \
  blobby.cpp \
  Blob.h \
  Blob_Handler.h \
  Options.h

blobby_LDADD = \
  $(ACE_BUILDDIR)/ace/libACE.la

## Clean up template repositories, etc.
clean-local:
	-rm -f *~ *.bak *.rpo *.sym lib*.*_pure_* core core.*
	-rm -f gcctemp.c gcctemp so_locations *.ics
	-rm -rf cxx_repository ptrepository ti_files
	-rm -rf templateregistry ir.out
	-rm -rf ptrepository SunWS_cache Templates.DB

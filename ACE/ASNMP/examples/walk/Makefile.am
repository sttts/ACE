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


## Makefile.asnmp_example_walk.am

if !BUILD_USES_WCHAR

noinst_PROGRAMS = walk

walk_CPPFLAGS = \
  -I$(ACE_ROOT) \
  -I$(ACE_BUILDDIR) \
  -I$(ACE_ROOT)/ASNMP

walk_SOURCES = \
  walk.cpp

walk_LDADD = \
  $(top_builddir)/ASNMP/asnmp/libasnmp.la \
  $(ACE_BUILDDIR)/ace/libACE.la

endif !BUILD_USES_WCHAR

## Clean up template repositories, etc.
clean-local:
	-rm -f *~ *.bak *.rpo *.sym lib*.*_pure_* core core.*
	-rm -f gcctemp.c gcctemp so_locations *.ics
	-rm -rf cxx_repository ptrepository ti_files
	-rm -rf templateregistry ir.out
	-rm -rf ptrepository SunWS_cache Templates.DB

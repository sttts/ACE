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

noinst_PROGRAMS =

## Makefile.Reactor_FIFO_Client.am

if !BUILD_ACE_FOR_TAO

noinst_PROGRAMS += client

client_CPPFLAGS = \
  -I$(ACE_ROOT) \
  -I$(ACE_BUILDDIR)

client_SOURCES = \
  client.cpp

client_LDADD = \
  $(ACE_BUILDDIR)/ace/libACE.la

endif !BUILD_ACE_FOR_TAO

## Makefile.Reactor_FIFO_Server.am

if !BUILD_ACE_FOR_TAO

noinst_PROGRAMS += server

server_CPPFLAGS = \
  -I$(ACE_ROOT) \
  -I$(ACE_BUILDDIR)

server_SOURCES = \
  server.cpp

server_LDADD = \
  $(ACE_BUILDDIR)/ace/libACE.la

endif !BUILD_ACE_FOR_TAO

## Clean up template repositories, etc.
clean-local:
	-rm -f *~ *.bak *.rpo *.sym lib*.*_pure_* core core.*
	-rm -f gcctemp.c gcctemp so_locations *.ics
	-rm -rf cxx_repository ptrepository ti_files
	-rm -rf templateregistry ir.out
	-rm -rf ptrepository SunWS_cache Templates.DB

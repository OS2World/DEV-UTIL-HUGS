# --------------------------------------------------------------------------
# Makefile for Hugs (adapted for use with djgpp2)
#
# The Hugs 98 system is Copyright (c) Mark P Jones, Alastair Reid, the
# Yale Haskell Group, and the OGI School of Science & Engineering at OHSU,
# 1994-2003, All rights reserved.  It is distributed as
# free software under the license in the file "License", which is
# included in the distribution.
# --------------------------------------------------------------------------



# Targets:
#
# <default>:   	 make hugs.exe
# hugs.exe:    	 make minimal working system
# runhugs.exe:   make standalone evaluator
# clean:       	 delete files not required in running system
# distclean:     delete files that can be regenerated using C compiler
# veryclean:     delete all machine generated files 
#                  (you need perl, bison/yacc, etc to rebuild these files)
# check:	 run regression tests
# TAGS:          build emacs TAGS table

# This rule goes first to make it the default choice
default		:: hugs.exe runhugs.exe

CC		= gcc
VERSTR          = -DMONTH_YEAR="\"Nov 2003\""
#CFLAGS		= -g -O
CFLAGS          = -g -O -MD $(VERSTR)


LD		= gcc
LDFLAGS    	= 
LIBS		= 

YACC		= bison -y
RM		= DEL
CP		= COPY

.SUFFIXES	:
.SUFFIXES	: .c .h .o

# PJ replaced with lines from Makefile.in
#HFILES		= prelude.h config.h options.h storage.h connect.h \
#		  errors.h command.h server.h HsFFI.h module.h machdep.h script.h
#CFILES		= hugs.c storage.c input.c static.c type.c subst.c \
#		  output.c compiler.c machine.c interp.c builtin.c \
#		  server.c ffi.c module.c machdep.c script.c
#INCFILES	= parser.c preds.c bignums.c scc.c timer.c \
#		  printer.c iomonad.c interns.c array.c
HFILES		= HsFFI.h builtin.h command.h config.h connect.h errors.h \
		  evaluator.h goal.h machdep.h module.h observe.h options.h \
		  opts.h output.h prelude.h script.h server.h storage.h \
		  strutil.h subst.h
CFILES		= hugs.c runhugs.c server.c edit.c observe.c \
		  builtin.c compiler.c errors.c evaluator.c \
		  ffi.c goal.c input.c machdep.c machine.c \
		  module.c opts.c output.c plugin.c script.c \
		  static.c storage.c strutil.c subst.c \
		  type.c version.c
INCFILES	= array.c bignums.c dirprim.c interns.c iomonad.c \
		  preds.c printer.c scc.c timeprim.c timer.c
YFILES		= parser.y
SOURCES		= $(HFILES) $(CFILES) $(INCFILES) $(YFILES) 
OBJECTS		= storage.o input.o static.o type.o subst.o compiler.o \
		  plugin.o builtin.o machine.o output.o ffi.o version.o module.o machdep.o \
                  errors.o evaluator.o goal.o opts.o script.o strutil.o \
                  server.o edit.o

IOBJECTS	= hugs.o $(OBJECTS)
PRELUDE		= config.h options.h prelude.h script.h

################################################################
# Hugs interpreter and standalone evaluator
################################################################

#hugs.exe	: $(IOBJECTS)  
#		  $(LD) $(LDFLAGS) -o hugs.exe $(IOBJECTS) $(LIBS)
hugs.exe	: observe.o $(IOBJECTS)  
		  $(LD) $(LDFLAGS) -o hugs.exe observe.o $(IOBJECTS) $(LIBS)

#		  strip hugs.exe
#		  coff2exe hugs.exe		# for DJGPP2

#SERVER_OBJECTS	= server.o $(OBJECTS) 
SERVER_OBJECTS	= $(OBJECTS) 

runhugs.o	: config.h options.h server.h runhugs.c
#runhugs.exe	: runhugs.o $(SERVER_OBJECTS)
#		  $(LD) $(LDFLAGS) -o runhugs.exe runhugs.o $(SERVER_OBJECTS) $(LIBS) 
runhugs.exe	: runhugs.o $(SERVER_OBJECTS)
		  $(LD) $(LDFLAGS) -o runhugs.exe runhugs.o $(SERVER_OBJECTS) $(LIBS) 

################################################################
# Clean, distclean, veryclean, TAGS
################################################################

clean		::
		  $(RM) *.o
		  $(RM) *.aux
		  $(RM) *.hp
		  $(RM) *.def
		  $(RM) *.exp
		  $(RM) *.ilk
		  $(RM) *.lib
		  $(RM) *.pdb
		  $(RM) *.td2
		  $(RM) *.map
		  $(RM) *.csm
		  $(RM) *.MAP
		  $(RM) *.TR2
		  $(RM) *.RES
		  $(RM) *.DSW
		  $(RM) *.OBJ
distclean	:: clean
distclean	::
		  $(RM) hugs.exe
		  $(RM) runhugs.exe 
		  $(RM) *.lib
		  $(RM) *.pdf
		  $(RM) TAGS
		  $(RM) *~
veryclean	:: distclean

TAGS		::
		  etags *.[ych]

################################################################
# Dependencies
################################################################

.c.o		:
		  $(CC) -c $(CFLAGS) $(OPTFLAGS) $<

# These are compiled with less optimisation to avoid optimisation bugs in
# certain compilers.  This may be overly conservative on some compilers.
compiler.o	: compiler.c
		  $(CC) -c $(CFLAGS) compiler.c
static.o	: static.c
		  $(CC) -c $(CFLAGS) static.c

# parser.c	: parser.y
# 		  -$(YACC) parser.y
# 		  mv y.tab.c parser.c
# veryclean	::
# 		  $(RM) parser.c

server.o	: $(PRELUDE) storage.h connect.h errors.h \
		  command.h machdep.h timer.c server.c server.h
hugs.o		: $(PRELUDE) storage.h connect.h errors.h \
		  command.h machdep.h timer.c
storage.o	: $(PRELUDE) storage.h connect.h errors.h
input.o		: $(PRELUDE) storage.h connect.h errors.h \
		  parser.c command.h module.h
subst.o		: $(PRELUDE) storage.h connect.h errors.h subst.h
static.o	: $(PRELUDE) storage.h connect.h errors.h subst.h \
		  scc.c module.h
type.o		: $(PRELUDE) storage.h connect.h errors.h subst.h \
		  scc.c preds.c
output.o	: $(PRELUDE) storage.h connect.h errors.h
compiler.o	: $(PRELUDE) storage.h connect.h errors.h \
		  compiler.c
machine.o	: $(PRELUDE) storage.h connect.h errors.h
plugin.o	: $(PRELUDE) storage.h connect.h errors.h
builtin.o	: $(PRELUDE) storage.h connect.h errors.h \
		  bignums.c printer.c iomonad.c interns.c array.c
ffi.o		: $(PRELUDE) storage.h connect.h errors.h
module.o	: $(PRELUDE) storage.h connect.h errors.h module.h
machdep.o	: $(PRELUDE) storage.h connect.h errors.h machdep.h
script.o	: $(PRELUDE) storage.h HsFFI.h connect.h errors.h 

# PJ (Unsure)
errors.o	: $(PRELUDE) storage.h connect.h errors.h 
evaluator.o	: $(PRELUDE) storage.h connect.h errors.h 
goal.o	        : $(PRELUDE) storage.h connect.h errors.h
opts.o          : $(PRELUDE) storage.h connect.h errors.h
#script.o 
strutil.o	: $(PRELUDE) storage.h connect.h errors.h 
version.o	: $(PRELUDE) storage.h connect.h errors.h
observe.o	: $(PRELUDE) storage.h connect.h errors.h
edit.o  	: $(PRELUDE) storage.h connect.h errors.h


################################################################
# Regression tests (none supplied)
################################################################

check		:


################################################################
# End of Makefile
################################################################

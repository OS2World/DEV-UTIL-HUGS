# Makefile for Documentation
# Note that some documentation is in other directories.

RM		= /usr/bin/rm -f

all::		server.ps hugs.man

server.ps:	server.dvi
		dvips server.dvi -o server.ps

server.dvi:	server.tex 
		latex server.tex

hugs.man:	hugs.1
		groff -Tascii -man hugs.1 | cat -s >$@

hugs.ps:	hugs.1
		groff -Tps -man hugs.1 >$@

hugs-package.man: hugs-package.1
		groff -Tascii -man hugs-package.1 | cat -s >$@

hugs-package.ps: hugs-package.1
		groff -Tps -man hugs-package.1 >$@

distclean:
		$(RM) server.ps server.dvi
		$(RM) hugs.man hugs.ps
		$(RM) hugs-package.man hugs-package.ps

veryclean:	distclean
		$(RM) Makefile hugs.1

# End of Makefile

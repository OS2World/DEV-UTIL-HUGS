j:
cd \hugs98

REM Helpful environment variables. See documentation for details.

REM The user's home directory.
SET HOME=J:\hugs98

REM This variable sets command line options for hugs
REM This option sets EPM as the editor invoked with the :editor command
REM %%s will be file name
REM %%d will be the line that is scrolled to - useful on :load errors!
SET HUGSFLAGS=-E"J:\os2\apps\epm.exe %%s '%%d'"

REM The EDITOR variable can be used to specify an editor, but HUGSFLAGS is better

REM The Hugs library directory.
SET HUGSDIR=J:\hugs98

cls
hugs
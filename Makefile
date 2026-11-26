# The intent of this Makefile is just to check that all MWEs actually build!

MWES = accumulatingPrerequisites

#OPTIONS = --no-print-directory

default : sweep

sweep : 
	$(MAKE) $(OPTIONS) -C accumulatingPrerequisites

clean :
	$(MAKE) $(OPTIONS) -C accumulatingPrerequisites clean

.PHONY: default sweep clean

# eof

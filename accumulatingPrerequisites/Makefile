# This MWE shows how the prerequisite file list for a target can
# accumulate over many rules.

# Recall that Makefile rules are traditionally composed of three
# parts: a target file, some prerequisite files and a recipe. Most
# often, the recipe is tasked with generating the target file, given
# the prerequisite files, e.g.

# target : prereq1 .. prereqN
#		   recipe

# This Makefile shows how the prerequisites need NOT all be listed in
# ONE rule.

# The program to build is p. Its main() is in p.c, and calls are made to
# routines defined in a.c and b.c.

# The prerequisite declarations are spread over not one but THREE rules.

# First we declare p as depending on a.o, then on p.o and finally on b.o.

# Note the recipe's use of the automatic variable $^. This variable
# resolves to the list of ALL the target's prerequisites, no matter
# HOW that list is accumulated. In particular, the prerequisite list
# does NOT have to stated in its entirety within the rule that
# contains the build recipe.

# The rule that contains the recipe itself (the one declaring
# prerequisite p.o) LOOKS as if $^ should resolve to just p.o, since
# that's the only prerequisite declared BY that rule. But make
# accumulates $^ over ALL rules.

# If you run 'make' on this Makefile, you'll see the echo show

# p.o a.o b.o

# which is NOT the lexical order of prerequisite declarations, which was

# a.o p.o b.o

# It appears that make (GNU make at least) will give precedent to
# prerequisites declared in the SAME rule that contains the recipe,
# which is just p.o in this case. The other prerequisites follow in
# lexical order, so a.o then b.o.

default: p

# The first stated prerequisite of p is a.o. Rule has no recipe.
p : a.o

# The next stated prerequisite of p is a.o. Rule has a recipe to build p.
p : p.o
	-echo $^
	$(CC) $^ $(OUTPUT_OPTION)

# Note also how 'make' declares variable OUTPUT_OPTION, so we don't
# have to say '-o p'. Nice!

# The final stated prerequisite of p is b.o. Rule has no recipe.
p : b.o

# Note how we have declared p as a rule target THREE times. This might
# look odd at first, but is NOT an error, far from it. In more complex
# Makefiles, it is v useful to be able to accumulate the prerequisites
# like this.

clean:
	$(RM) p *.o

# Declare all targets that aren't actually files as phonies.
.PHONY: default clean

# eof

# Minimum Working Examples - GNU Make

GNU Make is a popular build tool for software development. I have used
it for decades to build C and C++ programs on Linux. I use it for both
native and cross-compile builds, since most of the software I write
professionally is for embedded, bare-metal systems.

The GNU Make
[manual](https://www.gnu.org/software/make/manual/html_node/index.html)
is both thorough and straightforward. It does however omit or at least only
partially describe several really useful features of make. These
features can make your Makefiles more declarative, cleaner to read and
terser overall.

The intent of this project is to highlight these 'under-publicised'
features of GNU Make, via a set of minimum working examples
('mwes'). Each example presents an annotated Makefile, along with some
canned C files, that describes some feature of make that deserves to be wider
known. 

# Build Environment

To best follow along with the work presented here, you'll want GNU
make and gcc. Both are readily available on most platforms. I tend to
use Ubuntu Linux, and would install them via

```
$ sudo apt install make gcc
$ make --version
GNU Make 4.1
$ gcc --version
gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
```

# The Examples

* [Accumulating prerequisites](accumulatingPrerequisites)

* [Preprocessed files](preprocessedFiles)

* [Source files rule](sourceFilesRule)

* [VPATH vs vpath](vpath)

* [Automatic variables](automaticVariables)

* [Target and pattern specific variable values](variableValues)

* [Recipe echo](recipeEcho)

* [Link-time wrapping](linkTimeWrap)

* [A bit of everything](everything)
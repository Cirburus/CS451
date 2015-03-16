# tkConfig.sh --
#
# This shell script (for sh) is generated automatically by Tk's
# configure script.  It will create shell variables for most of
# the configuration options discovered by the configure script.
# This script is intended to be included by the configure scripts
# for Tk extensions so that they don't have to figure this all
# out for themselves.  This file does not duplicate information
# already provided by tclConfig.sh, so you may need to use that
# file in addition to this one.
#
# The information in this file is specific to a single platform.

# Tk's version number.
TK_VERSION='8.5'
TK_MAJOR_VERSION='8'
TK_MINOR_VERSION='5'
TK_PATCH_LEVEL='.18'

# -D flags for use with the C compiler.
TK_DEFS='-DHAVE_TK_CONFIG_H  -imacros tkConfig.h'

# Flag, 1: we built a shared lib, 0 we didn't
TK_SHARED_BUILD=1


# TK_DBGX used to be used to distinguish debug vs. non-debug builds.
# This was a righteous pain so the core doesn't do that any more.
TK_DBGX=

# The name of the Tk library (may be either a .a file or a shared library):
TK_LIB_FILE='libtk8.5.dylib'

# Additional libraries to use when linking Tk.
TK_LIBS='-L/usr/X11/lib -lX11 -Wl,-weak-lXss -lXext   -lpthread -framework CoreFoundation   -lpthread -framework CoreFoundation '

# Top-level directory in which Tk's platform-independent files are
# installed.
TK_PREFIX='/usr'

# Top-level directory in which Tk's platform-specific files (e.g.
# executables) are installed.
TK_EXEC_PREFIX='/usr'

# -I switch(es) to use to make all of the X11 include files accessible:
TK_XINCLUDES='-I/usr/X11/include'

# Linker switch(es) to use to link with the X11 library archive.
TK_XLIBSW='-L/usr/X11/lib -lX11 -Wl,-weak-lXss -lXext'

# -l flag to pass to the linker to pick up the Tk library
TK_LIB_FLAG='-ltk8.5'

# String to pass to linker to pick up the Tk library from its
# build directory.
TK_BUILD_LIB_SPEC='-L/Users/Sully/documents/CS451/additionalFiles/tk8.5.18/macosx -ltk8.5'

# String to pass to linker to pick up the Tk library from its
# installed directory.
TK_LIB_SPEC='-L/usr/lib -ltk8.5'

# String to pass to the compiler so that an extension can
# find installed Tk headers.
TK_INCLUDE_SPEC='-I/usr/include'

# Location of the top-level source directory from which Tk was built.
# This is the directory that contains a README file as well as
# subdirectories such as generic, unix, etc.  If Tk was compiled in a
# different place than the directory containing the source files, this
# points to the location of the sources, not the location where Tk was
# compiled.
TK_SRC_DIR='/Users/Sully/documents/CS451/additionalFiles/tk8.5.18'

# Needed if you want to make a 'fat' shared library library
# containing tk objects or link a different wish.
TK_CC_SEARCH_FLAGS=''
TK_LD_SEARCH_FLAGS=''

# The name of the Tk stub library (.a):
TK_STUB_LIB_FILE='libtkstub8.5.a'

# -l flag to pass to the linker to pick up the Tk stub library
TK_STUB_LIB_FLAG='-ltkstub8.5'

# String to pass to linker to pick up the Tk stub library from its
# build directory.
TK_BUILD_STUB_LIB_SPEC='-L/Users/Sully/documents/CS451/additionalFiles/tk8.5.18/macosx -ltkstub8.5'

# String to pass to linker to pick up the Tk stub library from its
# installed directory.
TK_STUB_LIB_SPEC='-L/usr/lib -ltkstub8.5'

# Path to the Tk stub library in the build directory.
TK_BUILD_STUB_LIB_PATH='/Users/Sully/documents/CS451/additionalFiles/tk8.5.18/macosx/libtkstub8.5.a'

# Path to the Tk stub library in the install directory.
TK_STUB_LIB_PATH='/usr/lib/libtkstub8.5.a'

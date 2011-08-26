# This file is part of mce-dev
#
# Copyright © 2005-2009 Nokia Corporation.
#
# Author: David Weinehall <david.weinehall@nokia.com>
# Modified by: Ilya Dogolazky, Tuomo Tanskanen

INSTALL_DIR := install -d
INSTALL_DATA := install -o root -g root --mode=644

DOXYGEN := doxygen

PCDIR := $(DESTDIR)/usr/lib/pkgconfig
INCLUDEDIR := $(DESTDIR)/usr/include/mce

TOPDIR := $(shell /bin/pwd)
INCDIR := $(TOPDIR)/include/mce
DOCDIR := $(TOPDIR)/doc

PCFILE  := mce.pc
INCLUDE_FILES := $(INCDIR)/dbus-names.h $(INCDIR)/mode-names.h

.PHONY: doc
doc:
	if [ ! -d $(DOCDIR) ]; then mkdir $(DOCDIR); fi
	@$(DOXYGEN) 2> $(TOPDIR)/doc/warnings > /dev/null

clean:
	@if [ x"$(DOCDIR)" != x"" ]; then	\
		rm -rf $(DOCDIR)/*;		\
	fi

.PHONY: install
install: doc
	$(INSTALL_DIR) $(PCDIR) $(INCLUDEDIR)				&&\
	$(INSTALL_DATA) $(PCFILE) $(PCDIR)				&&\
	$(INSTALL_DATA) $(INCLUDE_FILES) $(INCLUDEDIR)

.PHONY: distclean
distclean: clean

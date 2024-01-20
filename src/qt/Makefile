.PHONY: FORCE
all: FORCE
	$(MAKE) -C .. litedoge_qt test_bitcoin_qt
clean: FORCE
	$(MAKE) -C .. litedoge_qt_clean test_litedoge_qt_clean
check: FORCE
	$(MAKE) -C .. test_litedoge_qt_check
litedoge-qt litedoge-qt.exe: FORCE
	 $(MAKE) -C .. bitcoin_qt
apk: FORCE
	$(MAKE) -C .. litedoge_qt_apk

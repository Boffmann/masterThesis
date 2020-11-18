OPEN=xdg-open
PROJ=expose
VERSION=1_2
OUTNAME=$(PROJ)$(VERSION)

all: build open

build: $(PROJ).tex
	pdflatex $(PROJ)
	mv $(PROJ).pdf $(OUTNAME).pdf

open:
	$(OPEN) $(OUTNAME).pdf

clean:
	rm -f $(OUTNAME).pdf $(PROJ).log $(PROJ).aux

retouch:
	touch $(PROJ).tex

rebuild: retouch build

.PHONY: open clean

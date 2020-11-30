OPEN=xdg-open
PROJ=expose
OUTNAME=$(PROJ)

all: build open

build: $(PROJ).tex
	pdflatex $(PROJ)
	bibtex $(PROJ)
	pdflatex $(PROJ)
	pdflatex $(PROJ)
	# mv $(PROJ).pdf $(OUTNAME).pdf

open:
	$(OPEN) $(OUTNAME).pdf&

clean:
	rm -f $(OUTNAME).pdf $(PROJ).log $(PROJ).aux $(PROJ).bbl $(PROJ).blg $(PROJ).out

retouch:
	touch $(PROJ).tex

rebuild: retouch build

.PHONY: open clean

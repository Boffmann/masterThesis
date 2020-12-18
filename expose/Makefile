OPEN=xdg-open
PROJ=expose
OUTNAME=$(PROJ)

all: build open

build: $(PROJ).tex
	pdflatex $(PROJ)
	bibtex $(PROJ)
	makeglossaries $(PROJ)
	pdflatex $(PROJ)
	pdflatex $(PROJ)
	# mv $(PROJ).pdf $(OUTNAME).pdf

open:
	$(OPEN) $(OUTNAME).pdf&

clean:
	rm -f $(OUTNAME).pdf $(PROJ).log $(PROJ).aux $(PROJ).bbl $(PROJ).blg $(PROJ).out $(PROJ).acn $(PROJ).acr $(PROJ).alg $(PROJ).glg $(PROJ).glo $(PROJ).gls $(PROJ).ist $(PROJ).tex.bak

retouch:
	touch $(PROJ).tex

rebuild: retouch build

.PHONY: open clean

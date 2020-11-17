OPEN=xdg-open
PROJ=expose

all: build open

build: $(PROJ).tex
	pdflatex $(PROJ)

open:
	$(OPEN) $(PROJ).pdf

clean:
	rm -f $(PROJ).pdf $(PROJ).log $(PROJ).aux

retouch:
	touch $(PROJ).tex

rebuild: retouch build

.PHONY: open clean

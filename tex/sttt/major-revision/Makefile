name=main
all:
	pdflatex ${name}
	bibtex ${name}
	pdflatex ${name}
	pdflatex ${name}

ans: answer/answers.tex
	cd answer;pdflatex answers.tex;bibtex answers
	cd answer;pdflatex answers.tex
	cd answer;pdflatex answers.tex
	touch ans

clean:
	-rm -rf *.log *.aux *.dvi *.bbl *.blg *.tfm 




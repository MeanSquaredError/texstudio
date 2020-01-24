#ifndef LATEXTOKENSTREAM_H
#define LATEXTOKENSTREAM_H

class LatexTokenStream
{
public:
	LatexTokenStream(QDocument *pDocument, int startLine, int startColumn);
	bool getNextToken(Token &token, TokenList &args);

private:
	QDocument *m_pDocument;
	int m_curLine;
	TokenList m_curTokenList;
	int m_curTokenIndex;		// If -1 then m_curTokenList is not loaded yet
};

#endif // LATEXTOKENSTREAM_H

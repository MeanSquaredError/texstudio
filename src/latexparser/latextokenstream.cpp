#include "latextokenstream.h"

LatexTokenStream::LatexTokenStream(QDocument *pDocument, int startLine, int startColumn) :
	m_pDocument(pDocument),
	m_curLine(startLine),
	m_curTokenIndex(-1)
{
	loadCurrentLine();
}

bool LatexTokenStream::loadCurrentLine(void)
{
	if (m_curTokenIndex != -1) {
		return true;
	}
	m_curTokenList = dlh->getCookieLocked(QDocumentLine::LEXER_COOKIE).value<TokenList>();
	m_curTokenIndex = 0;
}

bool LatexTokenStream::getNextToken(Token &token, TokenList &args)
{
	if (loadCurrentLine() == false) {
		return false;
	}
	if (m_curTokenIndex == m_curTokenList.size()) {
		return false;
	}
}

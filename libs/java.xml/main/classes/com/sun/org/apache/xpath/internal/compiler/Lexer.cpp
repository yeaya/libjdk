#include <com/sun/org/apache/xpath/internal/compiler/Lexer.h>

#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/Keywords.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMapVector.h>
#include <com/sun/org/apache/xpath/internal/compiler/PsuedoNames.h>
#include <com/sun/org/apache/xpath/internal/compiler/XPathParser.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/ClassCastException.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BLOCKTOKENQUEUESIZE
#undef ER_EMPTY_EXPRESSION
#undef ER_EXPECTED_DOUBLE_QUOTE
#undef ER_EXPECTED_SINGLE_QUOTE
#undef ER_PREFIX_MUST_RESOLVE
#undef MAPINDEX_LENGTH
#undef MAXTOKENQUEUESIZE
#undef NODETYPE_ANYELEMENT
#undef NODETYPE_COMMENT
#undef NODETYPE_NODE
#undef NODETYPE_PI
#undef NODETYPE_ROOT
#undef NODETYPE_TEXT
#undef PSEUDONAME_ANY
#undef PSEUDONAME_COMMENT
#undef PSEUDONAME_ROOT
#undef PSEUDONAME_TEXT
#undef TARGETEXTRA

using $ObjectVector = ::com::sun::org::apache::xml::internal::utils::ObjectVector;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $Keywords = ::com::sun::org::apache::xpath::internal::compiler::Keywords;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $OpMapVector = ::com::sun::org::apache::xpath::internal::compiler::OpMapVector;
using $PsuedoNames = ::com::sun::org::apache::xpath::internal::compiler::PsuedoNames;
using $XPathParser = ::com::sun::org::apache::xpath::internal::compiler::XPathParser;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _Lexer_FieldInfo_[] = {
	{"m_compiler", "Lcom/sun/org/apache/xpath/internal/compiler/Compiler;", nullptr, $PRIVATE, $field(Lexer, m_compiler)},
	{"m_namespaceContext", "Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, 0, $field(Lexer, m_namespaceContext)},
	{"m_processor", "Lcom/sun/org/apache/xpath/internal/compiler/XPathParser;", nullptr, 0, $field(Lexer, m_processor)},
	{"TARGETEXTRA", "I", nullptr, $STATIC | $FINAL, $constField(Lexer, TARGETEXTRA)},
	{"m_patternMap", "[I", nullptr, $PRIVATE, $field(Lexer, m_patternMap)},
	{"m_patternMapSize", "I", nullptr, $PRIVATE, $field(Lexer, m_patternMapSize)},
	{}
};

$MethodInfo _Lexer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;Lcom/sun/org/apache/xpath/internal/compiler/XPathParser;)V", nullptr, 0, $method(Lexer, init$, void, $Compiler*, $PrefixResolver*, $XPathParser*)},
	{"addToTokenQueue", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $FINAL, $method(Lexer, addToTokenQueue, void, $String*)},
	{"getKeywordToken", "(Ljava/lang/String;)I", nullptr, $FINAL, $method(Lexer, getKeywordToken, int32_t, $String*)},
	{"getTokenQueuePosFromMap", "(I)I", nullptr, $PRIVATE, $method(Lexer, getTokenQueuePosFromMap, int32_t, int32_t)},
	{"mapNSTokens", "(Ljava/lang/String;III)I", nullptr, $PRIVATE, $method(Lexer, mapNSTokens, int32_t, $String*, int32_t, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"mapPatternElemPos", "(IZZ)Z", nullptr, $PRIVATE, $method(Lexer, mapPatternElemPos, bool, int32_t, bool, bool)},
	{"recordTokenString", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(Lexer, recordTokenString, void, $List*)},
	{"resetTokenMark", "(I)V", nullptr, $PRIVATE | $FINAL, $method(Lexer, resetTokenMark, void, int32_t)},
	{"tokenize", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(Lexer, tokenize, void, $String*), "javax.xml.transform.TransformerException"},
	{"tokenize", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", 0, $virtualMethod(Lexer, tokenize, void, $String*, $List*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Lexer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.Lexer",
	"java.lang.Object",
	nullptr,
	_Lexer_FieldInfo_,
	_Lexer_MethodInfo_
};

$Object* allocate$Lexer($Class* clazz) {
	return $of($alloc(Lexer));
}

void Lexer::init$($Compiler* compiler, $PrefixResolver* resolver, $XPathParser* xpathProcessor) {
	$set(this, m_patternMap, $new($ints, 100));
	$set(this, m_compiler, compiler);
	$set(this, m_namespaceContext, resolver);
	$set(this, m_processor, xpathProcessor);
}

void Lexer::tokenize($String* pat) {
	tokenize(pat, nullptr);
}

void Lexer::tokenize($String* pat, $List* targetStrings) {
	$useLocalCurrentObjectStackCache();
	$set($nc(this->m_compiler), m_currentPattern, pat);
	this->m_patternMapSize = 0;
	$set($nc(this->m_compiler), m_opMap, $new($OpMapVector, $OpMap::MAXTOKENQUEUESIZE * 5, $OpMap::BLOCKTOKENQUEUESIZE * 5, $OpMap::MAPINDEX_LENGTH));
	int32_t nChars = $nc(pat)->length();
	int32_t startSubstring = -1;
	int32_t posOfNSSep = -1;
	bool isStartOfPat = true;
	bool isAttrName = false;
	bool isNum = false;
	int32_t nesting = 0;
	for (int32_t i = 0; i < nChars; ++i) {
		char16_t c = pat->charAt(i);
		switch (c) {
		case u'\"':
			{
				{
					if (startSubstring != -1) {
						isNum = false;
						isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
						isAttrName = false;
						if (-1 != posOfNSSep) {
							posOfNSSep = mapNSTokens(pat, startSubstring, posOfNSSep, i);
						} else {
							addToTokenQueue($(pat->substring(startSubstring, i)));
						}
					}
					startSubstring = i;
					for (++i; (i < nChars) && ((c = pat->charAt(i)) != u'\"'); ++i) {
					}
					if (c == u'\"' && i < nChars) {
						addToTokenQueue($(pat->substring(startSubstring, i + 1)));
						startSubstring = -1;
					} else {
						$init($XPATHErrorResources);
						$nc(this->m_processor)->error($XPATHErrorResources::ER_EXPECTED_DOUBLE_QUOTE, nullptr);
					}
				}
				break;
			}
		case u'\'':
			{
				if (startSubstring != -1) {
					isNum = false;
					isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
					isAttrName = false;
					if (-1 != posOfNSSep) {
						posOfNSSep = mapNSTokens(pat, startSubstring, posOfNSSep, i);
					} else {
						addToTokenQueue($(pat->substring(startSubstring, i)));
					}
				}
				startSubstring = i;
				for (++i; (i < nChars) && ((c = pat->charAt(i)) != u'\''); ++i) {
				}
				if (c == u'\'' && i < nChars) {
					addToTokenQueue($(pat->substring(startSubstring, i + 1)));
					startSubstring = -1;
				} else {
					$init($XPATHErrorResources);
					$nc(this->m_processor)->error($XPATHErrorResources::ER_EXPECTED_SINGLE_QUOTE, nullptr);
				}
				break;
			}
		case 10:
			{}
		case 13:
			{}
		case u' ':
			{}
		case u'\t':
			{
				if (startSubstring != -1) {
					isNum = false;
					isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
					isAttrName = false;
					if (-1 != posOfNSSep) {
						posOfNSSep = mapNSTokens(pat, startSubstring, posOfNSSep, i);
					} else {
						addToTokenQueue($(pat->substring(startSubstring, i)));
					}
					startSubstring = -1;
				}
				break;
			}
		case u'@':
			{
				isAttrName = true;
			}
		case u'-':
			{
				if (u'-' == c) {
					if (!(isNum || (startSubstring == -1))) {
						break;
					}
					isNum = false;
				}
			}
		case u'(':
			{}
		case u'[':
			{}
		case u')':
			{}
		case u']':
			{}
		case u'|':
			{}
		case u'/':
			{}
		case u'*':
			{}
		case u'+':
			{}
		case u'=':
			{}
		case u',':
			{}
		case u'\\':
			{}
		case u'^':
			{}
		case u'!':
			{}
		case u'$':
			{}
		case u'<':
			{}
		case u'>':
			{
				if (startSubstring != -1) {
					isNum = false;
					isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
					isAttrName = false;
					if (-1 != posOfNSSep) {
						posOfNSSep = mapNSTokens(pat, startSubstring, posOfNSSep, i);
					} else {
						addToTokenQueue($(pat->substring(startSubstring, i)));
					}
					startSubstring = -1;
				} else if ((u'/' == c) && isStartOfPat) {
					isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
				} else if (u'*' == c) {
					isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
					isAttrName = false;
				}
				if (0 == nesting) {
					if (u'|' == c) {
						if (nullptr != targetStrings) {
							recordTokenString(targetStrings);
						}
						isStartOfPat = true;
					}
				}
				if ((u')' == c) || (u']' == c)) {
					--nesting;
				} else if ((u'(' == c) || (u'[' == c)) {
					++nesting;
				}
				addToTokenQueue($(pat->substring(i, i + 1)));
				break;
			}
		case u':':
			{
				if (i > 0) {
					if (posOfNSSep == (i - 1)) {
						if (startSubstring != -1) {
							if (startSubstring < (i - 1)) {
								addToTokenQueue($(pat->substring(startSubstring, i - 1)));
							}
						}
						isNum = false;
						isAttrName = false;
						startSubstring = -1;
						posOfNSSep = -1;
						addToTokenQueue($(pat->substring(i - 1, i + 1)));
						break;
					} else {
						posOfNSSep = i;
					}
				}
			}
		default:
			{
				if (-1 == startSubstring) {
					startSubstring = i;
					isNum = $Character::isDigit(c);
				} else if (isNum) {
					isNum = $Character::isDigit(c);
				}
			}
		}
	}
	if (startSubstring != -1) {
		isNum = false;
		isStartOfPat = mapPatternElemPos(nesting, isStartOfPat, isAttrName);
		if ((-1 != posOfNSSep) || ((this->m_namespaceContext != nullptr) && ($nc(this->m_namespaceContext)->handlesNullPrefixes()))) {
			posOfNSSep = mapNSTokens(pat, startSubstring, posOfNSSep, nChars);
		} else {
			addToTokenQueue($(pat->substring(startSubstring, nChars)));
		}
	}
	if (0 == $nc(this->m_compiler)->getTokenQueueSize()) {
		$init($XPATHErrorResources);
		$nc(this->m_processor)->error($XPATHErrorResources::ER_EMPTY_EXPRESSION, nullptr);
	} else if (nullptr != targetStrings) {
		recordTokenString(targetStrings);
	}
	$nc(this->m_processor)->m_queueMark = 0;
}

bool Lexer::mapPatternElemPos(int32_t nesting, bool isStart, bool isAttrName) {
	if (0 == nesting) {
		if (this->m_patternMapSize >= $nc(this->m_patternMap)->length) {
			$var($ints, patternMap, this->m_patternMap);
			int32_t len = $nc(this->m_patternMap)->length;
			$set(this, m_patternMap, $new($ints, this->m_patternMapSize + 100));
			$System::arraycopy(patternMap, 0, this->m_patternMap, 0, len);
		}
		if (!isStart) {
			(*$nc(this->m_patternMap))[this->m_patternMapSize - 1] -= Lexer::TARGETEXTRA;
		}
		$nc(this->m_patternMap)->set(this->m_patternMapSize, ($nc(this->m_compiler)->getTokenQueueSize() - (isAttrName ? 1 : 0)) + Lexer::TARGETEXTRA);
		++this->m_patternMapSize;
		isStart = false;
	}
	return isStart;
}

int32_t Lexer::getTokenQueuePosFromMap(int32_t i) {
	int32_t pos = $nc(this->m_patternMap)->get(i);
	return (pos >= Lexer::TARGETEXTRA) ? (pos - Lexer::TARGETEXTRA) : pos;
}

void Lexer::resetTokenMark(int32_t mark) {
	int32_t qsz = $nc(this->m_compiler)->getTokenQueueSize();
	$nc(this->m_processor)->m_queueMark = (mark > 0) ? ((mark <= qsz) ? mark - 1 : mark) : 0;
	if ($nc(this->m_processor)->m_queueMark < qsz) {
		$set($nc(this->m_processor), m_token, $cast($String, $nc($($nc(this->m_compiler)->getTokenQueue()))->elementAt($nc(this->m_processor)->m_queueMark++)));
		$nc(this->m_processor)->m_tokenChar = $nc($nc(this->m_processor)->m_token)->charAt(0);
	} else {
		$set($nc(this->m_processor), m_token, nullptr);
		$nc(this->m_processor)->m_tokenChar = (char16_t)0;
	}
}

int32_t Lexer::getKeywordToken($String* key) {
	int32_t tok = 0;
	try {
		$var($Integer, itok, $Keywords::getKeyWord(key));
		tok = (nullptr != itok) ? $nc(itok)->intValue() : 0;
	} catch ($NullPointerException& npe) {
		tok = 0;
	} catch ($ClassCastException& cce) {
		tok = 0;
	}
	return tok;
}

void Lexer::recordTokenString($List* targetStrings) {
	$useLocalCurrentObjectStackCache();
	int32_t tokPos = getTokenQueuePosFromMap(this->m_patternMapSize - 1);
	resetTokenMark(tokPos + 1);
	if ($nc(this->m_processor)->lookahead(u'(', 1)) {
		int32_t tok = getKeywordToken($nc(this->m_processor)->m_token);
		switch (tok) {
		case $OpCodes::NODETYPE_COMMENT:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_COMMENT);
				break;
			}
		case $OpCodes::NODETYPE_TEXT:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_TEXT);
				break;
			}
		case $OpCodes::NODETYPE_NODE:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_ANY);
				break;
			}
		case $OpCodes::NODETYPE_ROOT:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_ROOT);
				break;
			}
		case $OpCodes::NODETYPE_ANYELEMENT:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_ANY);
				break;
			}
		case $OpCodes::NODETYPE_PI:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_ANY);
				break;
			}
		default:
			{
				$init($PsuedoNames);
				$nc(targetStrings)->add($PsuedoNames::PSEUDONAME_ANY);
			}
		}
	} else {
		if ($nc(this->m_processor)->tokenIs(u'@')) {
			++tokPos;
			resetTokenMark(tokPos + 1);
		}
		if ($nc(this->m_processor)->lookahead(u':', 1)) {
			tokPos += 2;
		}
		$nc(targetStrings)->add($cast($String, $($nc($($nc(this->m_compiler)->getTokenQueue()))->elementAt(tokPos))));
	}
}

void Lexer::addToTokenQueue($String* s) {
	$nc($($nc(this->m_compiler)->getTokenQueue()))->addElement(s);
}

int32_t Lexer::mapNSTokens($String* pat, int32_t startSubstring, int32_t posOfNSSep, int32_t posOfScan) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, ""_s);
	if ((startSubstring >= 0) && (posOfNSSep >= 0)) {
		$assign(prefix, $nc(pat)->substring(startSubstring, posOfNSSep));
	}
	$var($String, uName, nullptr);
	bool var$0 = (nullptr != this->m_namespaceContext) && !prefix->equals("*"_s);
	if (var$0 && !prefix->equals("xmlns"_s)) {
		try {
			if (prefix->length() > 0) {
				$assign(uName, $nc(this->m_namespaceContext)->getNamespaceForPrefix(prefix));
			} else {
				{
					$assign(uName, $nc(this->m_namespaceContext)->getNamespaceForPrefix(prefix));
				}
			}
		} catch ($ClassCastException& cce) {
			$assign(uName, $nc(this->m_namespaceContext)->getNamespaceForPrefix(prefix));
		}
	} else {
		$assign(uName, prefix);
	}
	if ((nullptr != uName) && (uName->length() > 0)) {
		addToTokenQueue(uName);
		addToTokenQueue(":"_s);
		$var($String, s, $nc(pat)->substring(posOfNSSep + 1, posOfScan));
		if (s->length() > 0) {
			addToTokenQueue(s);
		}
	} else {
		$init($XPATHErrorResources);
		$nc(this->m_processor)->error($XPATHErrorResources::ER_PREFIX_MUST_RESOLVE, $$new($StringArray, {prefix}));
	}
	return -1;
}

Lexer::Lexer() {
}

$Class* Lexer::load$($String* name, bool initialize) {
	$loadClass(Lexer, name, initialize, &_Lexer_ClassInfo_, allocate$Lexer);
	return class$;
}

$Class* Lexer::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
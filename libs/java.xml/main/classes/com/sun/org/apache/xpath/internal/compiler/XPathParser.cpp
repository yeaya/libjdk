#include <com/sun/org/apache/xpath/internal/compiler/XPathParser.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/XPathProcessorException.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/compiler/Keywords.h>
#include <com/sun/org/apache/xpath/internal/compiler/Lexer.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StackOverflowError.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef CONTINUE_AFTER_FATAL_ERROR
#undef ELEMWILDCARD
#undef EMPTY
#undef ENDOP
#undef ER_AXES_NOT_ALLOWED
#undef ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL
#undef ER_COULDNOT_BE_FORMATTED_TO_NUMBER
#undef ER_COULDNOT_FIND_FUNCTION
#undef ER_EXPECTED_BUT_FOUND
#undef ER_EXPECTED_LOC_PATH
#undef ER_EXPECTED_LOC_PATH_AT_END_EXPR
#undef ER_EXPECTED_LOC_STEP
#undef ER_EXPECTED_NODE_TEST
#undef ER_EXPECTED_REL_LOC_PATH
#undef ER_EXPECTED_REL_PATH_PATTERN
#undef ER_EXPECTED_STEP_PATTERN
#undef ER_EXTRA_ILLEGAL_TOKENS
#undef ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG
#undef ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG
#undef ER_ILLEGAL_AXIS_NAME
#undef ER_INCORRECT_PROGRAMMER_ASSERTION
#undef ER_PATTERN_LITERAL_NEEDS_BE_QUOTED
#undef ER_PREDICATE_ILLEGAL_SYNTAX
#undef ER_PREDICATE_TOO_MANY_OPEN
#undef ER_UNKNOWN_NODETYPE
#undef FILTER_MATCH_FAILED
#undef FILTER_MATCH_PREDICATES
#undef FILTER_MATCH_PRIMARY
#undef FROM_ATTRIBUTES
#undef FROM_CHILDREN
#undef FROM_DESCENDANTS_OR_SELF
#undef FROM_PARENT
#undef FROM_ROOT
#undef FROM_SELF
#undef FUNC_ID_STRING
#undef FUNC_KEY_STRING
#undef MAPINDEX_LENGTH
#undef MATCH_ANY_ANCESTOR
#undef MATCH_ATTRIBUTE
#undef MATCH_IMMEDIATE_ANCESTOR
#undef NODENAME
#undef NODETYPE_COMMENT
#undef NODETYPE_FUNCTEST
#undef NODETYPE_NODE
#undef NODETYPE_PI
#undef NODETYPE_ROOT
#undef NODETYPE_TEXT
#undef OP_AND
#undef OP_ARGUMENT
#undef OP_BOOL
#undef OP_DIV
#undef OP_EQUALS
#undef OP_EXTFUNCTION
#undef OP_FUNCTION
#undef OP_GROUP
#undef OP_GT
#undef OP_GTE
#undef OP_LITERAL
#undef OP_LOCATIONPATH
#undef OP_LOCATIONPATHPATTERN
#undef OP_LT
#undef OP_LTE
#undef OP_MATCHPATTERN
#undef OP_MINUS
#undef OP_MOD
#undef OP_MULT
#undef OP_NEG
#undef OP_NOTEQUALS
#undef OP_NUMBER
#undef OP_NUMBERLIT
#undef OP_OR
#undef OP_PLUS
#undef OP_PREDICATE
#undef OP_QUO
#undef OP_STRING
#undef OP_UNION
#undef OP_VARIABLE
#undef OP_XPATH
#undef RELATIVE_PATH_NOT_PERMITTED
#undef RELATIVE_PATH_PERMITTED
#undef RELATIVE_PATH_REQUIRED

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $ObjectVector = ::com::sun::org::apache::xml::internal::utils::ObjectVector;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $XPathProcessorException = ::com::sun::org::apache::xpath::internal::XPathProcessorException;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $Keywords = ::com::sun::org::apache::xpath::internal::compiler::Keywords;
using $Lexer = ::com::sun::org::apache::xpath::internal::compiler::Lexer;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _XPathParser_FieldInfo_[] = {
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathParser, CONTINUE_AFTER_FATAL_ERROR)},
	{"m_ops", "Lcom/sun/org/apache/xpath/internal/compiler/OpMap;", nullptr, $PRIVATE, $field(XPathParser, m_ops)},
	{"m_token", "Ljava/lang/String;", nullptr, $TRANSIENT, $field(XPathParser, m_token)},
	{"m_tokenChar", "C", nullptr, $TRANSIENT, $field(XPathParser, m_tokenChar)},
	{"m_queueMark", "I", nullptr, 0, $field(XPathParser, m_queueMark)},
	{"FILTER_MATCH_FAILED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathParser, FILTER_MATCH_FAILED)},
	{"FILTER_MATCH_PRIMARY", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathParser, FILTER_MATCH_PRIMARY)},
	{"FILTER_MATCH_PREDICATES", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathParser, FILTER_MATCH_PREDICATES)},
	{"countPredicate", "I", nullptr, $PRIVATE, $field(XPathParser, countPredicate)},
	{"m_namespaceContext", "Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, 0, $field(XPathParser, m_namespaceContext)},
	{"m_errorListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(XPathParser, m_errorListener)},
	{"m_sourceLocator", "Ljavax/xml/transform/SourceLocator;", nullptr, 0, $field(XPathParser, m_sourceLocator)},
	{"m_functionTable", "Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;", nullptr, $PRIVATE, $field(XPathParser, m_functionTable)},
	{}
};

$MethodInfo _XPathParser_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/transform/ErrorListener;Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $method(XPathParser, init$, void, $ErrorListener*, $SourceLocator*)},
	{"AbbreviatedNodeTestStep", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(XPathParser, AbbreviatedNodeTestStep, bool, bool), "javax.xml.transform.TransformerException"},
	{"AdditiveExpr", "(I)I", nullptr, $PROTECTED, $virtualMethod(XPathParser, AdditiveExpr, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"AndExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, AndExpr, void), "javax.xml.transform.TransformerException"},
	{"Argument", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Argument, void), "javax.xml.transform.TransformerException"},
	{"AxisName", "()I", nullptr, $PROTECTED, $virtualMethod(XPathParser, AxisName, int32_t), "javax.xml.transform.TransformerException"},
	{"Basis", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Basis, void), "javax.xml.transform.TransformerException"},
	{"BooleanExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, BooleanExpr, void), "javax.xml.transform.TransformerException"},
	{"EqualityExpr", "(I)I", nullptr, $PROTECTED, $virtualMethod(XPathParser, EqualityExpr, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"Expr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Expr, void), "javax.xml.transform.TransformerException"},
	{"FilterExpr", "()I", nullptr, $PROTECTED, $virtualMethod(XPathParser, FilterExpr, int32_t), "javax.xml.transform.TransformerException"},
	{"FunctionCall", "()Z", nullptr, $PROTECTED, $virtualMethod(XPathParser, FunctionCall, bool), "javax.xml.transform.TransformerException"},
	{"IdKeyPattern", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, IdKeyPattern, void), "javax.xml.transform.TransformerException"},
	{"Literal", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Literal, void), "javax.xml.transform.TransformerException"},
	{"LocationPath", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, LocationPath, void), "javax.xml.transform.TransformerException"},
	{"LocationPathPattern", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, LocationPathPattern, void), "javax.xml.transform.TransformerException"},
	{"MultiplicativeExpr", "(I)I", nullptr, $PROTECTED, $virtualMethod(XPathParser, MultiplicativeExpr, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"NCName", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, NCName, void)},
	{"NodeTest", "(I)V", nullptr, $PROTECTED, $virtualMethod(XPathParser, NodeTest, void, int32_t), "javax.xml.transform.TransformerException"},
	{"Number", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Number, void), "javax.xml.transform.TransformerException"},
	{"NumberExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, NumberExpr, void), "javax.xml.transform.TransformerException"},
	{"OrExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, OrExpr, void), "javax.xml.transform.TransformerException"},
	{"PathExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, PathExpr, void), "javax.xml.transform.TransformerException"},
	{"Pattern", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Pattern, void), "javax.xml.transform.TransformerException"},
	{"Predicate", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, Predicate, void), "javax.xml.transform.TransformerException"},
	{"PredicateExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, PredicateExpr, void), "javax.xml.transform.TransformerException"},
	{"PrimaryExpr", "()Z", nullptr, $PROTECTED, $virtualMethod(XPathParser, PrimaryExpr, bool), "javax.xml.transform.TransformerException"},
	{"QName", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, QName, void), "javax.xml.transform.TransformerException"},
	{"RelationalExpr", "(I)I", nullptr, $PROTECTED, $virtualMethod(XPathParser, RelationalExpr, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"RelativeLocationPath", "()Z", nullptr, $PROTECTED, $virtualMethod(XPathParser, RelativeLocationPath, bool), "javax.xml.transform.TransformerException"},
	{"RelativePathPattern", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, RelativePathPattern, void), "javax.xml.transform.TransformerException"},
	{"Step", "()Z", nullptr, $PROTECTED, $virtualMethod(XPathParser, Step, bool), "javax.xml.transform.TransformerException"},
	{"StepPattern", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(XPathParser, StepPattern, bool, bool), "javax.xml.transform.TransformerException"},
	{"StringExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, StringExpr, void), "javax.xml.transform.TransformerException"},
	{"UnaryExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, UnaryExpr, void), "javax.xml.transform.TransformerException"},
	{"UnionExpr", "()V", nullptr, $PROTECTED, $virtualMethod(XPathParser, UnionExpr, void), "javax.xml.transform.TransformerException"},
	{"appendOp", "(II)V", nullptr, 0, $virtualMethod(XPathParser, appendOp, void, int32_t, int32_t)},
	{"assertion", "(ZLjava/lang/String;)V", nullptr, $PRIVATE, $method(XPathParser, assertion, void, bool, $String*)},
	{"consumeExpected", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $FINAL, $method(XPathParser, consumeExpected, void, $String*), "javax.xml.transform.TransformerException"},
	{"consumeExpected", "(C)V", nullptr, $PRIVATE | $FINAL, $method(XPathParser, consumeExpected, void, char16_t), "javax.xml.transform.TransformerException"},
	{"dumpRemainingTokenQueue", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XPathParser, dumpRemainingTokenQueue, $String*)},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(XPathParser, error, void, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC, $virtualMethod(XPathParser, getErrorListener, $ErrorListener*)},
	{"getFunctionToken", "(Ljava/lang/String;)I", nullptr, $FINAL, $method(XPathParser, getFunctionToken, int32_t, $String*)},
	{"getTokenRelative", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(XPathParser, getTokenRelative, $String*, int32_t)},
	{"initMatchPattern", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $virtualMethod(XPathParser, initMatchPattern, void, $Compiler*, $String*, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"initXPath", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $virtualMethod(XPathParser, initXPath, void, $Compiler*, $String*, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"insertOp", "(III)V", nullptr, 0, $virtualMethod(XPathParser, insertOp, void, int32_t, int32_t, int32_t)},
	{"lookahead", "(CI)Z", nullptr, $FINAL, $method(XPathParser, lookahead, bool, char16_t, int32_t)},
	{"lookahead", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(XPathParser, lookahead, bool, $String*, int32_t)},
	{"lookbehind", "(CI)Z", nullptr, $PRIVATE | $FINAL, $method(XPathParser, lookbehind, bool, char16_t, int32_t)},
	{"lookbehindHasToken", "(I)Z", nullptr, $PRIVATE | $FINAL, $method(XPathParser, lookbehindHasToken, bool, int32_t)},
	{"nextToken", "()V", nullptr, $PRIVATE | $FINAL, $method(XPathParser, nextToken, void)},
	{"prevToken", "()V", nullptr, $PRIVATE | $FINAL, $method(XPathParser, prevToken, void)},
	{"setErrorHandler", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $virtualMethod(XPathParser, setErrorHandler, void, $ErrorListener*)},
	{"tokenIs", "(Ljava/lang/String;)Z", nullptr, $FINAL, $method(XPathParser, tokenIs, bool, $String*)},
	{"tokenIs", "(C)Z", nullptr, $FINAL, $method(XPathParser, tokenIs, bool, char16_t)},
	{"warn", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(XPathParser, warn, void, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _XPathParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.XPathParser",
	"java.lang.Object",
	nullptr,
	_XPathParser_FieldInfo_,
	_XPathParser_MethodInfo_
};

$Object* allocate$XPathParser($Class* clazz) {
	return $of($alloc(XPathParser));
}

$String* XPathParser::CONTINUE_AFTER_FATAL_ERROR = nullptr;

void XPathParser::init$($ErrorListener* errorListener, $SourceLocator* sourceLocator) {
	this->m_tokenChar = (char16_t)0;
	this->m_queueMark = 0;
	$set(this, m_errorListener, errorListener);
	$set(this, m_sourceLocator, sourceLocator);
}

void XPathParser::initXPath($Compiler* compiler, $String* expression, $PrefixResolver* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	$set(this, m_ops, compiler);
	$set(this, m_namespaceContext, namespaceContext);
	$set(this, m_functionTable, $nc(compiler)->getFunctionTable());
	$var($Lexer, lexer, $new($Lexer, compiler, namespaceContext, this));
	lexer->tokenize(expression);
	$nc(this->m_ops)->setOp(0, $OpCodes::OP_XPATH);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, 2);
	try {
		nextToken();
		Expr();
		if (nullptr != this->m_token) {
			$var($String, extraTokens, ""_s);
			while (nullptr != this->m_token) {
				$plusAssign(extraTokens, $$str({"\'"_s, this->m_token, "\'"_s}));
				nextToken();
				if (nullptr != this->m_token) {
					$plusAssign(extraTokens, ", "_s);
				}
			}
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_EXTRA_ILLEGAL_TOKENS, $$new($ObjectArray, {$of(extraTokens)}));
		}
	} catch ($XPathProcessorException& e) {
		if ($nc(XPathParser::CONTINUE_AFTER_FATAL_ERROR)->equals($(e->getMessage()))) {
			initXPath(compiler, "/.."_s, namespaceContext);
		} else {
			$throw(e);
		}
	} catch ($StackOverflowError& sof) {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_PREDICATE_TOO_MANY_OPEN, $$new($ObjectArray, {
			$of(this->m_token),
			$($of($Integer::valueOf(this->m_queueMark))),
			$($of($Integer::valueOf(this->countPredicate)))
		}));
	}
	compiler->shrink();
}

void XPathParser::initMatchPattern($Compiler* compiler, $String* expression, $PrefixResolver* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	$set(this, m_ops, compiler);
	$set(this, m_namespaceContext, namespaceContext);
	$set(this, m_functionTable, $nc(compiler)->getFunctionTable());
	$var($Lexer, lexer, $new($Lexer, compiler, namespaceContext, this));
	lexer->tokenize(expression);
	$nc(this->m_ops)->setOp(0, $OpCodes::OP_MATCHPATTERN);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, 2);
	nextToken();
	try {
		Pattern();
	} catch ($StackOverflowError& sof) {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_PREDICATE_TOO_MANY_OPEN, $$new($ObjectArray, {
			$of(this->m_token),
			$($of($Integer::valueOf(this->m_queueMark))),
			$($of($Integer::valueOf(this->countPredicate)))
		}));
	}
	if (nullptr != this->m_token) {
		$var($String, extraTokens, ""_s);
		while (nullptr != this->m_token) {
			$plusAssign(extraTokens, $$str({"\'"_s, this->m_token, "\'"_s}));
			nextToken();
			if (nullptr != this->m_token) {
				$plusAssign(extraTokens, ", "_s);
			}
		}
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_EXTRA_ILLEGAL_TOKENS, $$new($ObjectArray, {$of(extraTokens)}));
	}
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ENDOP);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	$nc(this->m_ops)->shrink();
}

void XPathParser::setErrorHandler($ErrorListener* handler) {
	$set(this, m_errorListener, handler);
}

$ErrorListener* XPathParser::getErrorListener() {
	return this->m_errorListener;
}

bool XPathParser::tokenIs($String* s) {
	return (this->m_token != nullptr) ? ($nc(this->m_token)->equals(s)) : (s == nullptr);
}

bool XPathParser::tokenIs(char16_t c) {
	return (this->m_token != nullptr) ? (this->m_tokenChar == c) : false;
}

bool XPathParser::lookahead(char16_t c, int32_t n) {
	int32_t pos = (this->m_queueMark + n);
	bool b = false;
	bool var$0 = (pos <= $nc(this->m_ops)->getTokenQueueSize()) && (pos > 0);
	if (var$0 && ($nc(this->m_ops)->getTokenQueueSize() != 0)) {
		$var($String, tok, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(pos - 1)));
		b = ($nc(tok)->length() == 1) ? ($nc(tok)->charAt(0) == c) : false;
	} else {
		b = false;
	}
	return b;
}

bool XPathParser::lookbehind(char16_t c, int32_t n) {
	bool isToken = false;
	int32_t lookBehindPos = this->m_queueMark - (n + 1);
	if (lookBehindPos >= 0) {
		$var($String, lookbehind, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(lookBehindPos)));
		if ($nc(lookbehind)->length() == 1) {
			char16_t c0 = (lookbehind == nullptr) ? u'|' : lookbehind->charAt(0);
			isToken = (c0 == u'|') ? false : (c0 == c);
		} else {
			isToken = false;
		}
	} else {
		isToken = false;
	}
	return isToken;
}

bool XPathParser::lookbehindHasToken(int32_t n) {
	bool hasToken = false;
	if ((this->m_queueMark - n) > 0) {
		$var($String, lookbehind, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(this->m_queueMark - (n - 1))));
		char16_t c0 = (lookbehind == nullptr) ? u'|' : $nc(lookbehind)->charAt(0);
		hasToken = (c0 == u'|') ? false : true;
	} else {
		hasToken = false;
	}
	return hasToken;
}

bool XPathParser::lookahead($String* s, int32_t n) {
	bool isToken = false;
	if ((this->m_queueMark + n) <= $nc(this->m_ops)->getTokenQueueSize()) {
		$var($String, lookahead, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(this->m_queueMark + (n - 1))));
		isToken = (lookahead != nullptr) ? $nc(lookahead)->equals(s) : (s == nullptr);
	} else {
		isToken = (nullptr == s);
	}
	return isToken;
}

void XPathParser::nextToken() {
	if (this->m_queueMark < $nc(this->m_ops)->getTokenQueueSize()) {
		$set(this, m_token, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(this->m_queueMark++)));
		this->m_tokenChar = $nc(this->m_token)->charAt(0);
	} else {
		$set(this, m_token, nullptr);
		this->m_tokenChar = (char16_t)0;
	}
}

$String* XPathParser::getTokenRelative(int32_t i) {
	$var($String, tok, nullptr);
	int32_t relative = this->m_queueMark + i;
	if ((relative > 0) && (relative < $nc(this->m_ops)->getTokenQueueSize())) {
		$assign(tok, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(relative)));
	} else {
		$assign(tok, nullptr);
	}
	return tok;
}

void XPathParser::prevToken() {
	if (this->m_queueMark > 0) {
		--this->m_queueMark;
		$set(this, m_token, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(this->m_queueMark)));
		this->m_tokenChar = $nc(this->m_token)->charAt(0);
	} else {
		$set(this, m_token, nullptr);
		this->m_tokenChar = (char16_t)0;
	}
}

void XPathParser::consumeExpected($String* expected) {
	if (tokenIs(expected)) {
		nextToken();
	} else {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_EXPECTED_BUT_FOUND, $$new($ObjectArray, {
			$of(expected),
			$of(this->m_token)
		}));
		$throwNew($XPathProcessorException, XPathParser::CONTINUE_AFTER_FATAL_ERROR);
	}
}

void XPathParser::consumeExpected(char16_t expected) {
	$useLocalCurrentObjectStackCache();
	if (tokenIs(expected)) {
		nextToken();
	} else {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_EXPECTED_BUT_FOUND, $$new($ObjectArray, {
			$($of($String::valueOf(expected))),
			$of(this->m_token)
		}));
		$throwNew($XPathProcessorException, XPathParser::CONTINUE_AFTER_FATAL_ERROR);
	}
}

void XPathParser::warn($String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHWarning(msg, args));
	$var($ErrorListener, ehandler, this->getErrorListener());
	if (nullptr != ehandler) {
		ehandler->warning($$new($TransformerException, fmsg, this->m_sourceLocator));
	} else {
		$nc($System::err)->println(fmsg);
	}
}

void XPathParser::assertion(bool b, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (!b) {
		$init($XPATHErrorResources);
		$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {$of(msg)})));
		$throwNew($RuntimeException, fMsg);
	}
}

void XPathParser::error($String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHMessage(msg, args));
	$var($ErrorListener, ehandler, this->getErrorListener());
	$var($TransformerException, te, $new($TransformerException, fmsg, this->m_sourceLocator));
	if (nullptr != ehandler) {
		ehandler->fatalError(te);
	} else {
		$throw(te);
	}
}

$String* XPathParser::dumpRemainingTokenQueue() {
	$useLocalCurrentObjectStackCache();
	int32_t q = this->m_queueMark;
	$var($String, returnMsg, nullptr);
	if (q < $nc(this->m_ops)->getTokenQueueSize()) {
		$var($String, msg, "\n Remaining tokens: ("_s);
		while (q < $nc(this->m_ops)->getTokenQueueSize()) {
			$var($String, t, $cast($String, $nc($nc(this->m_ops)->m_tokenQueue)->elementAt(q++)));
			$plusAssign(msg, ($$str({" \'"_s, t, "\'"_s})));
		}
		$assign(returnMsg, $str({msg, ")"_s}));
	} else {
		$assign(returnMsg, ""_s);
	}
	return returnMsg;
}

int32_t XPathParser::getFunctionToken($String* key) {
	int32_t tok = 0;
	$var($Integer, id, nullptr);
	try {
		$assign(id, $Keywords::lookupNodeTest(key));
		if (nullptr == id) {
			$assign(id, $nc(this->m_functionTable)->getFunctionID(key));
		}
		tok = $nc(id)->intValue();
	} catch ($NullPointerException& npe) {
		tok = -1;
	} catch ($ClassCastException& cce) {
		tok = -1;
	}
	return tok;
}

void XPathParser::insertOp(int32_t pos, int32_t length, int32_t op) {
	int32_t totalLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	for (int32_t i = totalLen - 1; i >= pos; --i) {
		$nc(this->m_ops)->setOp(i + length, $nc(this->m_ops)->getOp(i));
	}
	$nc(this->m_ops)->setOp(pos, op);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, totalLen + length);
}

void XPathParser::appendOp(int32_t length, int32_t op) {
	int32_t totalLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	$nc(this->m_ops)->setOp(totalLen, op);
	$nc(this->m_ops)->setOp(totalLen + $OpMap::MAPINDEX_LENGTH, length);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, totalLen + length);
}

void XPathParser::Expr() {
	OrExpr();
}

void XPathParser::OrExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	AndExpr();
	if ((nullptr != this->m_token) && tokenIs("or"_s)) {
		nextToken();
		insertOp(opPos, 2, $OpCodes::OP_OR);
		OrExpr();
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
	}
}

void XPathParser::AndExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	EqualityExpr(-1);
	if ((nullptr != this->m_token) && tokenIs("and"_s)) {
		nextToken();
		insertOp(opPos, 2, $OpCodes::OP_AND);
		AndExpr();
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
	}
}

int32_t XPathParser::EqualityExpr(int32_t addPos) {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	if (-1 == addPos) {
		addPos = opPos;
	}
	RelationalExpr(-1);
	if (nullptr != this->m_token) {
		bool var$0 = tokenIs(u'!');
		if (var$0 && lookahead(u'=', 1)) {
			nextToken();
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_NOTEQUALS);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = EqualityExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		} else if (tokenIs(u'=')) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_EQUALS);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = EqualityExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		}
	}
	return addPos;
}

int32_t XPathParser::RelationalExpr(int32_t addPos) {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	if (-1 == addPos) {
		addPos = opPos;
	}
	AdditiveExpr(-1);
	if (nullptr != this->m_token) {
		if (tokenIs(u'<')) {
			nextToken();
			if (tokenIs(u'=')) {
				nextToken();
				insertOp(addPos, 2, $OpCodes::OP_LTE);
			} else {
				insertOp(addPos, 2, $OpCodes::OP_LT);
			}
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = RelationalExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		} else if (tokenIs(u'>')) {
			nextToken();
			if (tokenIs(u'=')) {
				nextToken();
				insertOp(addPos, 2, $OpCodes::OP_GTE);
			} else {
				insertOp(addPos, 2, $OpCodes::OP_GT);
			}
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = RelationalExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		}
	}
	return addPos;
}

int32_t XPathParser::AdditiveExpr(int32_t addPos) {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	if (-1 == addPos) {
		addPos = opPos;
	}
	MultiplicativeExpr(-1);
	if (nullptr != this->m_token) {
		if (tokenIs(u'+')) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_PLUS);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = AdditiveExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		} else if (tokenIs(u'-')) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_MINUS);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = AdditiveExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		}
	}
	return addPos;
}

int32_t XPathParser::MultiplicativeExpr(int32_t addPos) {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	if (-1 == addPos) {
		addPos = opPos;
	}
	UnaryExpr();
	if (nullptr != this->m_token) {
		if (tokenIs(u'*')) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_MULT);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = MultiplicativeExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		} else if (tokenIs("div"_s)) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_DIV);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = MultiplicativeExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		} else if (tokenIs("mod"_s)) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_MOD);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = MultiplicativeExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		} else if (tokenIs("quo"_s)) {
			nextToken();
			insertOp(addPos, 2, $OpCodes::OP_QUO);
			int32_t opPlusLeftHandLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - addPos;
			addPos = MultiplicativeExpr(addPos);
			$nc(this->m_ops)->setOp(addPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp(addPos + opPlusLeftHandLen + 1) + opPlusLeftHandLen);
			addPos += 2;
		}
	}
	return addPos;
}

void XPathParser::UnaryExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	bool isNeg = false;
	if (this->m_tokenChar == u'-') {
		nextToken();
		appendOp(2, $OpCodes::OP_NEG);
		isNeg = true;
	}
	UnionExpr();
	if (isNeg) {
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
	}
}

void XPathParser::StringExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	appendOp(2, $OpCodes::OP_STRING);
	Expr();
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

void XPathParser::BooleanExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	appendOp(2, $OpCodes::OP_BOOL);
	Expr();
	int32_t opLen = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos;
	if (opLen == 2) {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, nullptr);
	}
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, opLen);
}

void XPathParser::NumberExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	appendOp(2, $OpCodes::OP_NUMBER);
	Expr();
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

void XPathParser::UnionExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	bool continueOrLoop = true;
	bool foundUnion = false;
	do {
		PathExpr();
		if (tokenIs(u'|')) {
			if (false == foundUnion) {
				foundUnion = true;
				insertOp(opPos, 2, $OpCodes::OP_UNION);
			}
			nextToken();
		} else {
			break;
		}
	} while (continueOrLoop);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

void XPathParser::PathExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	int32_t filterExprMatch = FilterExpr();
	if (filterExprMatch != XPathParser::FILTER_MATCH_FAILED) {
		bool locationPathStarted = (filterExprMatch == XPathParser::FILTER_MATCH_PREDICATES);
		if (tokenIs(u'/')) {
			nextToken();
			if (!locationPathStarted) {
				insertOp(opPos, 2, $OpCodes::OP_LOCATIONPATH);
				locationPathStarted = true;
			}
			if (!RelativeLocationPath()) {
				$init($XPATHErrorResources);
				error($XPATHErrorResources::ER_EXPECTED_REL_LOC_PATH, nullptr);
			}
		}
		if (locationPathStarted) {
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ENDOP);
			$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
			$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		}
	} else {
		LocationPath();
	}
}

int32_t XPathParser::FilterExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	int32_t filterMatch = 0;
	if (PrimaryExpr()) {
		if (tokenIs(u'[')) {
			insertOp(opPos, 2, $OpCodes::OP_LOCATIONPATH);
			while (tokenIs(u'[')) {
				Predicate();
			}
			filterMatch = XPathParser::FILTER_MATCH_PREDICATES;
		} else {
			filterMatch = XPathParser::FILTER_MATCH_PRIMARY;
		}
	} else {
		filterMatch = XPathParser::FILTER_MATCH_FAILED;
	}
	return filterMatch;
}

bool XPathParser::PrimaryExpr() {
	bool matchFound = false;
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	if ((this->m_tokenChar == u'\'') || (this->m_tokenChar == u'\"')) {
		appendOp(2, $OpCodes::OP_LITERAL);
		Literal();
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		matchFound = true;
	} else if (this->m_tokenChar == u'$') {
		nextToken();
		appendOp(2, $OpCodes::OP_VARIABLE);
		QName();
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		matchFound = true;
	} else if (this->m_tokenChar == u'(') {
		nextToken();
		appendOp(2, $OpCodes::OP_GROUP);
		Expr();
		consumeExpected(u')');
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		matchFound = true;
	} else {
		bool var$3 = (nullptr != this->m_token);
		if (var$3) {
			bool var$5 = (u'.' == this->m_tokenChar) && ($nc(this->m_token)->length() > 1);
			bool var$4 = (var$5 && $Character::isDigit($nc(this->m_token)->charAt(1)));
			var$3 = (var$4 || $Character::isDigit(this->m_tokenChar));
		}
		if (var$3) {
			appendOp(2, $OpCodes::OP_NUMBERLIT);
			Number();
			$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
			matchFound = true;
		} else {
			bool var$8 = lookahead(u'(', 1);
			if (!var$8) {
				bool var$9 = lookahead(u':', 1);
				var$8 = (var$9 && lookahead(u'(', 3));
			}
			if (var$8) {
				matchFound = FunctionCall();
			} else {
				matchFound = false;
			}
		}
	}
	return matchFound;
}

void XPathParser::Argument() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	appendOp(2, $OpCodes::OP_ARGUMENT);
	Expr();
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

bool XPathParser::FunctionCall() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	if (lookahead(u':', 1)) {
		appendOp(4, $OpCodes::OP_EXTFUNCTION);
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH + 1, this->m_queueMark - 1);
		nextToken();
		consumeExpected(u':');
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH + 2, this->m_queueMark - 1);
		nextToken();
	} else {
		int32_t funcTok = getFunctionToken(this->m_token);
		if (-1 == funcTok) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_COULDNOT_FIND_FUNCTION, $$new($ObjectArray, {$of(this->m_token)}));
		}
		switch (funcTok) {
		case $OpCodes::NODETYPE_PI:
			{}
		case $OpCodes::NODETYPE_COMMENT:
			{}
		case $OpCodes::NODETYPE_TEXT:
			{}
		case $OpCodes::NODETYPE_NODE:
			{
				return false;
			}
		default:
			{
				appendOp(3, $OpCodes::OP_FUNCTION);
				$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH + 1, funcTok);
			}
		}
		nextToken();
	}
	consumeExpected(u'(');
	while (!tokenIs(u')') && this->m_token != nullptr) {
		if (tokenIs(u',')) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, nullptr);
		}
		Argument();
		if (!tokenIs(u')')) {
			consumeExpected(u',');
			if (tokenIs(u')')) {
				$init($XPATHErrorResources);
				error($XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, nullptr);
			}
		}
	}
	consumeExpected(u')');
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ENDOP);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
	return true;
}

void XPathParser::LocationPath() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	appendOp(2, $OpCodes::OP_LOCATIONPATH);
	bool seenSlash = tokenIs(u'/');
	if (seenSlash) {
		appendOp(4, $OpCodes::FROM_ROOT);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 2, 4);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 1, $OpCodes::NODETYPE_ROOT);
		nextToken();
	} else if (this->m_token == nullptr) {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_EXPECTED_LOC_PATH_AT_END_EXPR, nullptr);
	}
	if (this->m_token != nullptr) {
		if (!RelativeLocationPath() && !seenSlash) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_EXPECTED_LOC_PATH, $$new($ObjectArray, {$of(this->m_token)}));
		}
	}
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ENDOP);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

bool XPathParser::RelativeLocationPath() {
	if (!Step()) {
		return false;
	}
	while (tokenIs(u'/')) {
		nextToken();
		if (!Step()) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_EXPECTED_LOC_STEP, nullptr);
		}
	}
	return true;
}

bool XPathParser::Step() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	bool doubleSlash = tokenIs(u'/');
	if (doubleSlash) {
		nextToken();
		appendOp(2, $OpCodes::FROM_DESCENDANTS_OR_SELF);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::NODETYPE_NODE);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH + 1, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	}
	if (tokenIs("."_s)) {
		nextToken();
		if (tokenIs(u'[')) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_PREDICATE_ILLEGAL_SYNTAX, nullptr);
		}
		appendOp(4, $OpCodes::FROM_SELF);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 2, 4);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 1, $OpCodes::NODETYPE_NODE);
	} else if (tokenIs(".."_s)) {
		nextToken();
		appendOp(4, $OpCodes::FROM_PARENT);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 2, 4);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 1, $OpCodes::NODETYPE_NODE);
	} else {
		bool var$5 = tokenIs(u'*');
		bool var$4 = var$5 || tokenIs(u'@');
		bool var$3 = var$4 || tokenIs(u'_');
		if (var$3 || (this->m_token != nullptr && $Character::isLetter($nc(this->m_token)->charAt(0)))) {
			Basis();
			while (tokenIs(u'[')) {
				Predicate();
			}
			$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
		} else {
			if (doubleSlash) {
				$init($XPATHErrorResources);
				error($XPATHErrorResources::ER_EXPECTED_LOC_STEP, nullptr);
			}
			return false;
		}
	}
	return true;
}

void XPathParser::Basis() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	int32_t axesType = 0;
	if (lookahead("::"_s, 1)) {
		axesType = AxisName();
		nextToken();
		nextToken();
	} else if (tokenIs(u'@')) {
		axesType = $OpCodes::FROM_ATTRIBUTES;
		appendOp(2, axesType);
		nextToken();
	} else {
		axesType = $OpCodes::FROM_CHILDREN;
		appendOp(2, axesType);
	}
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	NodeTest(axesType);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH + 1, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

int32_t XPathParser::AxisName() {
	$useLocalCurrentObjectStackCache();
	$var($Object, val, $Keywords::getAxisName(this->m_token));
	if (nullptr == val) {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_ILLEGAL_AXIS_NAME, $$new($ObjectArray, {$of(this->m_token)}));
	}
	int32_t axesType = $nc(($cast($Integer, val)))->intValue();
	appendOp(2, axesType);
	return axesType;
}

void XPathParser::NodeTest(int32_t axesType) {
	$useLocalCurrentObjectStackCache();
	if (lookahead(u'(', 1)) {
		$var($Object, nodeTestOp, $Keywords::getNodeType(this->m_token));
		if (nullptr == nodeTestOp) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_UNKNOWN_NODETYPE, $$new($ObjectArray, {$of(this->m_token)}));
		} else {
			nextToken();
			int32_t nt = $nc(($cast($Integer, nodeTestOp)))->intValue();
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), nt);
			$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
			consumeExpected(u'(');
			if ($OpCodes::NODETYPE_PI == nt) {
				if (!tokenIs(u')')) {
					Literal();
				}
			}
			consumeExpected(u')');
		}
	} else {
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::NODENAME);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		if (lookahead(u':', 1)) {
			if (tokenIs(u'*')) {
				$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ELEMWILDCARD);
			} else {
				$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), this->m_queueMark - 1);
				bool var$0 = !$Character::isLetter(this->m_tokenChar);
				if (var$0 && !tokenIs(u'_')) {
					$init($XPATHErrorResources);
					error($XPATHErrorResources::ER_EXPECTED_NODE_TEST, nullptr);
				}
			}
			nextToken();
			consumeExpected(u':');
		} else {
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::EMPTY);
		}
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		if (tokenIs(u'*')) {
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ELEMWILDCARD);
		} else {
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), this->m_queueMark - 1);
			bool var$1 = !$Character::isLetter(this->m_tokenChar);
			if (var$1 && !tokenIs(u'_')) {
				$init($XPATHErrorResources);
				error($XPATHErrorResources::ER_EXPECTED_NODE_TEST, nullptr);
			}
		}
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		nextToken();
	}
}

void XPathParser::Predicate() {
	if (tokenIs(u'[')) {
		++this->countPredicate;
		nextToken();
		PredicateExpr();
		--this->countPredicate;
		consumeExpected(u']');
	}
}

void XPathParser::PredicateExpr() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	appendOp(2, $OpCodes::OP_PREDICATE);
	Expr();
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ENDOP);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

void XPathParser::QName() {
	if (lookahead(u':', 1)) {
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), this->m_queueMark - 1);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		nextToken();
		consumeExpected(u':');
	} else {
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::EMPTY);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	}
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), this->m_queueMark - 1);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	nextToken();
}

void XPathParser::NCName() {
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), this->m_queueMark - 1);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	nextToken();
}

void XPathParser::Literal() {
	$useLocalCurrentObjectStackCache();
	int32_t last = $nc(this->m_token)->length() - 1;
	char16_t c0 = this->m_tokenChar;
	char16_t cX = $nc(this->m_token)->charAt(last);
	if (((c0 == u'\"') && (cX == u'\"')) || ((c0 == u'\'') && (cX == u'\''))) {
		int32_t tokenQueuePos = this->m_queueMark - 1;
		$nc($nc(this->m_ops)->m_tokenQueue)->setElementAt(nullptr, tokenQueuePos);
		$var($Object, obj, $new($XString, $($nc(this->m_token)->substring(1, last))));
		$nc($nc(this->m_ops)->m_tokenQueue)->setElementAt(obj, tokenQueuePos);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), tokenQueuePos);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		nextToken();
	} else {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, $$new($ObjectArray, {$of(this->m_token)}));
	}
}

void XPathParser::Number() {
	$useLocalCurrentObjectStackCache();
	if (nullptr != this->m_token) {
		double num = 0.0;
		try {
			bool var$0 = ($nc(this->m_token)->indexOf((int32_t)u'e') > -1);
			if (var$0 || ($nc(this->m_token)->indexOf((int32_t)u'E') > -1)) {
				$throwNew($NumberFormatException);
			}
			num = $nc($($Double::valueOf(this->m_token)))->doubleValue();
		} catch ($NumberFormatException& nfe) {
			num = 0.0;
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, $$new($ObjectArray, {$of(this->m_token)}));
		}
		$nc($nc(this->m_ops)->m_tokenQueue)->setElementAt($$new($XNumber, num), this->m_queueMark - 1);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), this->m_queueMark - 1);
		$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
		nextToken();
	}
}

void XPathParser::Pattern() {
	while (true) {
		LocationPathPattern();
		if (tokenIs(u'|')) {
			nextToken();
		} else {
			break;
		}
	}
}

void XPathParser::LocationPathPattern() {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	int32_t RELATIVE_PATH_NOT_PERMITTED = 0;
	int32_t RELATIVE_PATH_PERMITTED = 1;
	int32_t RELATIVE_PATH_REQUIRED = 2;
	int32_t relativePathStatus = RELATIVE_PATH_NOT_PERMITTED;
	appendOp(2, $OpCodes::OP_LOCATIONPATHPATTERN);
	bool var$0 = lookahead(u'(', 1);
	if (var$0) {
		$init($Keywords);
		bool var$1 = tokenIs($Keywords::FUNC_ID_STRING);
		var$0 = (var$1 || tokenIs($Keywords::FUNC_KEY_STRING));
	}
	if (var$0) {
		IdKeyPattern();
		if (tokenIs(u'/')) {
			nextToken();
			if (tokenIs(u'/')) {
				appendOp(4, $OpCodes::MATCH_ANY_ANCESTOR);
				nextToken();
			} else {
				appendOp(4, $OpCodes::MATCH_IMMEDIATE_ANCESTOR);
			}
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 2, 4);
			$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 1, $OpCodes::NODETYPE_FUNCTEST);
			relativePathStatus = RELATIVE_PATH_REQUIRED;
		}
	} else if (tokenIs(u'/')) {
		if (lookahead(u'/', 1)) {
			appendOp(4, $OpCodes::MATCH_ANY_ANCESTOR);
			nextToken();
			relativePathStatus = RELATIVE_PATH_REQUIRED;
		} else {
			appendOp(4, $OpCodes::FROM_ROOT);
			relativePathStatus = RELATIVE_PATH_PERMITTED;
		}
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 2, 4);
		$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - 1, $OpCodes::NODETYPE_ROOT);
		nextToken();
	} else {
		relativePathStatus = RELATIVE_PATH_REQUIRED;
	}
	if (relativePathStatus != RELATIVE_PATH_NOT_PERMITTED) {
		if (!tokenIs(u'|') && (nullptr != this->m_token)) {
			RelativePathPattern();
		} else if (relativePathStatus == RELATIVE_PATH_REQUIRED) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_EXPECTED_REL_PATH_PATTERN, nullptr);
		}
	}
	$nc(this->m_ops)->setOp($nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH), $OpCodes::ENDOP);
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
}

void XPathParser::IdKeyPattern() {
	FunctionCall();
}

void XPathParser::RelativePathPattern() {
	bool trailingSlashConsumed = StepPattern(false);
	while (tokenIs(u'/')) {
		nextToken();
		trailingSlashConsumed = StepPattern(!trailingSlashConsumed);
	}
}

bool XPathParser::StepPattern(bool isLeadingSlashPermitted) {
	return AbbreviatedNodeTestStep(isLeadingSlashPermitted);
}

bool XPathParser::AbbreviatedNodeTestStep(bool isLeadingSlashPermitted) {
	int32_t opPos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
	int32_t axesType = 0;
	int32_t matchTypePos = -1;
	if (tokenIs(u'@')) {
		axesType = $OpCodes::MATCH_ATTRIBUTE;
		appendOp(2, axesType);
		nextToken();
	} else if (this->lookahead("::"_s, 1)) {
		if (tokenIs("attribute"_s)) {
			axesType = $OpCodes::MATCH_ATTRIBUTE;
			appendOp(2, axesType);
		} else if (tokenIs("child"_s)) {
			matchTypePos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
			axesType = $OpCodes::MATCH_IMMEDIATE_ANCESTOR;
			appendOp(2, axesType);
		} else {
			axesType = -1;
			$init($XPATHErrorResources);
			this->error($XPATHErrorResources::ER_AXES_NOT_ALLOWED, $$new($ObjectArray, {$of(this->m_token)}));
		}
		nextToken();
		nextToken();
	} else if (tokenIs(u'/')) {
		if (!isLeadingSlashPermitted) {
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_EXPECTED_STEP_PATTERN, nullptr);
		}
		axesType = $OpCodes::MATCH_ANY_ANCESTOR;
		appendOp(2, axesType);
		nextToken();
	} else {
		matchTypePos = $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH);
		axesType = $OpCodes::MATCH_IMMEDIATE_ANCESTOR;
		appendOp(2, axesType);
	}
	$nc(this->m_ops)->setOp($OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) + 1);
	NodeTest(axesType);
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH + 1, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
	while (tokenIs(u'[')) {
		Predicate();
	}
	bool trailingSlashConsumed = false;
	bool var$0 = (matchTypePos > -1) && tokenIs(u'/');
	if (var$0 && lookahead(u'/', 1)) {
		$nc(this->m_ops)->setOp(matchTypePos, $OpCodes::MATCH_ANY_ANCESTOR);
		nextToken();
		trailingSlashConsumed = true;
	} else {
		trailingSlashConsumed = false;
	}
	$nc(this->m_ops)->setOp(opPos + $OpMap::MAPINDEX_LENGTH, $nc(this->m_ops)->getOp($OpMap::MAPINDEX_LENGTH) - opPos);
	return trailingSlashConsumed;
}

XPathParser::XPathParser() {
}

void clinit$XPathParser($Class* class$) {
	$assignStatic(XPathParser::CONTINUE_AFTER_FATAL_ERROR, "CONTINUE_AFTER_FATAL_ERROR"_s);
}

$Class* XPathParser::load$($String* name, bool initialize) {
	$loadClass(XPathParser, name, initialize, &_XPathParser_ClassInfo_, clinit$XPathParser, allocate$XPathParser);
	return class$;
}

$Class* XPathParser::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
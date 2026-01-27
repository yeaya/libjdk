#include <com/sun/org/apache/xpath/internal/XPath.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/DefaultErrorHandler.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/SAXSourceLocator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/compiler/XPathParser.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/io/Serializable.h>
#include <java/util/List.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DEBUG_MATCHES
#undef ER_CANNOT_DEAL_XPATH_TYPE
#undef ER_INCORRECT_PROGRAMMER_ASSERTION
#undef ER_XPATH_ERROR
#undef MATCH
#undef MATCH_SCORE_NODETEST
#undef MATCH_SCORE_NONE
#undef MATCH_SCORE_NSWILD
#undef MATCH_SCORE_OTHER
#undef MATCH_SCORE_QNAME
#undef NEGATIVE_INFINITY
#undef SELECT

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DefaultErrorHandler = ::com::sun::org::apache::xml::internal::utils::DefaultErrorHandler;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $SAXSourceLocator = ::com::sun::org::apache::xml::internal::utils::SAXSourceLocator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $XPathParser = ::com::sun::org::apache::xpath::internal::compiler::XPathParser;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _XPath_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XPath, serialVersionUID)},
	{"m_mainExp", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $field(XPath, m_mainExp)},
	{"m_funcTable", "Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;", nullptr, $PRIVATE | $TRANSIENT, $field(XPath, m_funcTable)},
	{"m_patternString", "Ljava/lang/String;", nullptr, 0, $field(XPath, m_patternString)},
	{"SELECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath, SELECT)},
	{"MATCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath, MATCH)},
	{"DEBUG_MATCHES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath, DEBUG_MATCHES)},
	{"MATCH_SCORE_NONE", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath, MATCH_SCORE_NONE)},
	{"MATCH_SCORE_QNAME", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath, MATCH_SCORE_QNAME)},
	{"MATCH_SCORE_NSWILD", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath, MATCH_SCORE_NSWILD)},
	{"MATCH_SCORE_NODETEST", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath, MATCH_SCORE_NODETEST)},
	{"MATCH_SCORE_OTHER", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath, MATCH_SCORE_OTHER)},
	{}
};

$MethodInfo _XPath_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;ILjavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(XPath, init$, void, $String*, $SourceLocator*, $PrefixResolver*, int32_t, $ErrorListener*), "javax.xml.transform.TransformerException"},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;ILjavax/xml/transform/ErrorListener;Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;)V", nullptr, $PUBLIC, $method(XPath, init$, void, $String*, $SourceLocator*, $PrefixResolver*, int32_t, $ErrorListener*, $FunctionTable*), "javax.xml.transform.TransformerException"},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;I)V", nullptr, $PUBLIC, $method(XPath, init$, void, $String*, $SourceLocator*, $PrefixResolver*, int32_t), "javax.xml.transform.TransformerException"},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $method(XPath, init$, void, $Expression*)},
	{"assertion", "(ZLjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XPath, assertion, void, bool, $String*)},
	{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Z", nullptr, $PUBLIC, $virtualMethod(XPath, bool$, bool, $XPathContext*, int32_t, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(XPath, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"error", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILjava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XPath, error, void, $XPathContext*, int32_t, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lorg/w3c/dom/Node;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(XPath, execute, $XObject*, $XPathContext*, $Node*, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(XPath, execute, $XObject*, $XPathContext*, int32_t, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(XPath, fixupVariables, void, $List*, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(XPath, getExpression, $Expression*)},
	{"getLocator", "()Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC, $virtualMethod(XPath, getLocator, $SourceLocator*)},
	{"getMatchScore", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)D", nullptr, $PUBLIC, $virtualMethod(XPath, getMatchScore, double, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"getPatternString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPath, getPatternString, $String*)},
	{"initFunctionTable", "()V", nullptr, $PRIVATE, $method(XPath, initFunctionTable, void)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(XPath, setExpression, void, $Expression*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warn", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILjava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XPath, warn, void, $XPathContext*, int32_t, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _XPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPath",
	"java.lang.Object",
	"java.io.Serializable,com.sun.org.apache.xpath.internal.ExpressionOwner",
	_XPath_FieldInfo_,
	_XPath_MethodInfo_
};

$Object* allocate$XPath($Class* clazz) {
	return $of($alloc(XPath));
}

int32_t XPath::hashCode() {
	 return this->$Serializable::hashCode();
}

bool XPath::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* XPath::clone() {
	 return this->$Serializable::clone();
}

$String* XPath::toString() {
	 return this->$Serializable::toString();
}

void XPath::finalize() {
	this->$Serializable::finalize();
}

double XPath::MATCH_SCORE_NONE = 0.0;
double XPath::MATCH_SCORE_QNAME = 0.0;
double XPath::MATCH_SCORE_NSWILD = 0.0;
double XPath::MATCH_SCORE_NODETEST = 0.0;
double XPath::MATCH_SCORE_OTHER = 0.0;

void XPath::initFunctionTable() {
	$set(this, m_funcTable, $new($FunctionTable));
}

$Expression* XPath::getExpression() {
	return this->m_mainExp;
}

void XPath::fixupVariables($List* vars, int32_t globalsSize) {
	$nc(this->m_mainExp)->fixupVariables(vars, globalsSize);
}

void XPath::setExpression($Expression* exp) {
	if (nullptr != this->m_mainExp) {
		$nc(exp)->exprSetParent($($nc(this->m_mainExp)->exprGetParent()));
	}
	$set(this, m_mainExp, exp);
}

$SourceLocator* XPath::getLocator() {
	return this->m_mainExp;
}

$String* XPath::getPatternString() {
	return this->m_patternString;
}

void XPath::init$($String* exprString, $SourceLocator* locator, $PrefixResolver* prefixResolver, int32_t type, $ErrorListener* errorListener$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ErrorListener, errorListener, errorListener$renamed);
	$set(this, m_funcTable, nullptr);
	initFunctionTable();
	if (nullptr == errorListener) {
		$assign(errorListener, $new($DefaultErrorHandler));
	}
	$set(this, m_patternString, exprString);
	$var($XPathParser, parser, $new($XPathParser, errorListener, locator));
	$var($Compiler, compiler, $new($Compiler, errorListener, locator, this->m_funcTable));
	if (XPath::SELECT == type) {
		parser->initXPath(compiler, exprString, prefixResolver);
	} else if (XPath::MATCH == type) {
		parser->initMatchPattern(compiler, exprString, prefixResolver);
	} else {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_CANNOT_DEAL_XPATH_TYPE, $$new($ObjectArray, {$($of($Integer::toString(type)))}))));
	}
	$var($Expression, expr, compiler->compileExpression(0));
	this->setExpression(expr);
	if ((nullptr != locator) && $instanceOf($ExpressionNode, locator)) {
		$nc(expr)->exprSetParent($cast($ExpressionNode, locator));
	}
}

void XPath::init$($String* exprString, $SourceLocator* locator, $PrefixResolver* prefixResolver, int32_t type, $ErrorListener* errorListener$renamed, $FunctionTable* aTable) {
	$useLocalCurrentObjectStackCache();
	$var($ErrorListener, errorListener, errorListener$renamed);
	$set(this, m_funcTable, nullptr);
	$set(this, m_funcTable, aTable);
	if (nullptr == errorListener) {
		$assign(errorListener, $new($DefaultErrorHandler));
	}
	$set(this, m_patternString, exprString);
	$var($XPathParser, parser, $new($XPathParser, errorListener, locator));
	$var($Compiler, compiler, $new($Compiler, errorListener, locator, this->m_funcTable));
	if (XPath::SELECT == type) {
		parser->initXPath(compiler, exprString, prefixResolver);
	} else if (XPath::MATCH == type) {
		parser->initMatchPattern(compiler, exprString, prefixResolver);
	} else {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_CANNOT_DEAL_XPATH_TYPE, $$new($ObjectArray, {$($of($Integer::toString(type)))}))));
	}
	$var($Expression, expr, compiler->compileExpression(0));
	this->setExpression(expr);
	if ((nullptr != locator) && $instanceOf($ExpressionNode, locator)) {
		$nc(expr)->exprSetParent($cast($ExpressionNode, locator));
	}
}

void XPath::init$($String* exprString, $SourceLocator* locator, $PrefixResolver* prefixResolver, int32_t type) {
	XPath::init$(exprString, locator, prefixResolver, type, nullptr);
}

void XPath::init$($Expression* expr) {
	$set(this, m_funcTable, nullptr);
	this->setExpression(expr);
	initFunctionTable();
}

$XObject* XPath::execute($XPathContext* xctxt, $Node* contextNode, $PrefixResolver* namespaceContext) {
	return execute(xctxt, $nc(xctxt)->getDTMHandleFromNode(contextNode), namespaceContext);
}

$XObject* XPath::execute($XPathContext* xctxt, int32_t contextNode, $PrefixResolver* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	$nc(xctxt)->pushNamespaceContext(namespaceContext);
	xctxt->pushCurrentNodeAndExpression(contextNode, contextNode);
	$var($XObject, xobj, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assign(xobj, $nc(this->m_mainExp)->execute(xctxt));
			} catch ($TransformerException& te) {
				te->setLocator($(this->getLocator()));
				$var($ErrorListener, el, xctxt->getErrorListener());
				if (nullptr != el) {
					el->error(te);
				} else {
					$throw(te);
				}
			} catch ($Exception& e) {
				while ($instanceOf($WrappedRuntimeException, e)) {
					$assign(e, $nc(($cast($WrappedRuntimeException, e)))->getException());
				}
				$var($String, msg, $nc(e)->getMessage());
				if (msg == nullptr || $nc(msg)->length() == 0) {
					$init($XPATHErrorResources);
					$assign(msg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_XPATH_ERROR, nullptr));
				}
				$var($TransformerException, te, $new($TransformerException, msg, $(getLocator()), e));
				$var($ErrorListener, el, xctxt->getErrorListener());
				if (nullptr != el) {
					el->fatalError(te);
				} else {
					$throw(te);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			xctxt->popNamespaceContext();
			xctxt->popCurrentNodeAndExpression();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return xobj;
}

bool XPath::bool$($XPathContext* xctxt, int32_t contextNode, $PrefixResolver* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	$nc(xctxt)->pushNamespaceContext(namespaceContext);
	xctxt->pushCurrentNodeAndExpression(contextNode, contextNode);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->m_mainExp)->bool$(xctxt);
				return$1 = true;
				goto $finally;
			} catch ($TransformerException& te) {
				te->setLocator($(this->getLocator()));
				$var($ErrorListener, el, xctxt->getErrorListener());
				if (nullptr != el) {
					el->error(te);
				} else {
					$throw(te);
				}
			} catch ($Exception& e) {
				while ($instanceOf($WrappedRuntimeException, e)) {
					$assign(e, $nc(($cast($WrappedRuntimeException, e)))->getException());
				}
				$var($String, msg, $nc(e)->getMessage());
				if (msg == nullptr || $nc(msg)->length() == 0) {
					$init($XPATHErrorResources);
					$assign(msg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_XPATH_ERROR, nullptr));
				}
				$var($TransformerException, te, $new($TransformerException, msg, $(getLocator()), e));
				$var($ErrorListener, el, xctxt->getErrorListener());
				if (nullptr != el) {
					el->fatalError(te);
				} else {
					$throw(te);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			xctxt->popNamespaceContext();
			xctxt->popCurrentNodeAndExpression();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return false;
}

double XPath::getMatchScore($XPathContext* xctxt, int32_t context) {
	$useLocalCurrentObjectStackCache();
	$nc(xctxt)->pushCurrentNode(context);
	xctxt->pushCurrentExpressionNode(context);
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			$var($XObject, score, $nc(this->m_mainExp)->execute(xctxt));
			var$2 = $nc(score)->num();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			xctxt->popCurrentNode();
			xctxt->popCurrentExpressionNode();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XPath::warn($XPathContext* xctxt, int32_t sourceNode, $String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHWarning(msg, args));
	$var($ErrorListener, ehandler, $nc(xctxt)->getErrorListener());
	if (nullptr != ehandler) {
		ehandler->warning($$new($TransformerException, fmsg, $cast($SAXSourceLocator, $(xctxt->getSAXLocator()))));
	}
}

void XPath::assertion(bool b, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (!b) {
		$init($XPATHErrorResources);
		$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {$of(msg)})));
		$throwNew($RuntimeException, fMsg);
	}
}

void XPath::error($XPathContext* xctxt, int32_t sourceNode, $String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHMessage(msg, args));
	$var($ErrorListener, ehandler, $nc(xctxt)->getErrorListener());
	if (nullptr != ehandler) {
		ehandler->fatalError($$new($TransformerException, fmsg, $cast($SAXSourceLocator, $(xctxt->getSAXLocator()))));
	} else {
		$var($SourceLocator, slocator, xctxt->getSAXLocator());
		$var($String, var$2, $$str({fmsg, "; file "_s, $($nc(slocator)->getSystemId()), "; line "_s}));
		$var($String, var$1, $$concat(var$2, $$str(slocator->getLineNumber())));
		$var($String, var$0, $$concat(var$1, "; column "_s));
		$nc($System::out)->println($$concat(var$0, $$str(slocator->getColumnNumber())));
	}
}

void XPath::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	$nc(this->m_mainExp)->callVisitors(this, visitor);
}

XPath::XPath() {
}

void clinit$XPath($Class* class$) {
	$init($Double);
	XPath::MATCH_SCORE_NONE = $Double::NEGATIVE_INFINITY;
	XPath::MATCH_SCORE_QNAME = 0.0;
	XPath::MATCH_SCORE_NSWILD = -0.25;
	XPath::MATCH_SCORE_NODETEST = -0.5;
	XPath::MATCH_SCORE_OTHER = 0.5;
}

$Class* XPath::load$($String* name, bool initialize) {
	$loadClass(XPath, name, initialize, &_XPath_ClassInfo_, clinit$XPath, allocate$XPath);
	return class$;
}

$Class* XPath::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
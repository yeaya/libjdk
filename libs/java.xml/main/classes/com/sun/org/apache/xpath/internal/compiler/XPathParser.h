#ifndef _com_sun_org_apache_xpath_internal_compiler_XPathParser_h_
#define _com_sun_org_apache_xpath_internal_compiler_XPathParser_h_
//$ class com.sun.org.apache.xpath.internal.compiler.XPathParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("FILTER_MATCH_FAILED")
#undef FILTER_MATCH_FAILED
#pragma push_macro("FILTER_MATCH_PREDICATES")
#undef FILTER_MATCH_PREDICATES
#pragma push_macro("FILTER_MATCH_PRIMARY")
#undef FILTER_MATCH_PRIMARY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {
							class Compiler;
							class FunctionTable;
							class OpMap;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class SourceLocator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $export XPathParser : public ::java::lang::Object {
	$class(XPathParser, 0, ::java::lang::Object)
public:
	XPathParser();
	void init$(::javax::xml::transform::ErrorListener* errorListener, ::javax::xml::transform::SourceLocator* sourceLocator);
	virtual bool AbbreviatedNodeTestStep(bool isLeadingSlashPermitted);
	virtual int32_t AdditiveExpr(int32_t addPos);
	virtual void AndExpr();
	virtual void Argument();
	virtual int32_t AxisName();
	virtual void Basis();
	virtual void BooleanExpr();
	virtual int32_t EqualityExpr(int32_t addPos);
	virtual void Expr();
	virtual int32_t FilterExpr();
	virtual bool FunctionCall();
	virtual void IdKeyPattern();
	virtual void Literal();
	virtual void LocationPath();
	virtual void LocationPathPattern();
	virtual int32_t MultiplicativeExpr(int32_t addPos);
	virtual void NCName();
	virtual void NodeTest(int32_t axesType);
	virtual void Number();
	virtual void NumberExpr();
	virtual void OrExpr();
	virtual void PathExpr();
	virtual void Pattern();
	virtual void Predicate();
	virtual void PredicateExpr();
	virtual bool PrimaryExpr();
	virtual void QName();
	virtual int32_t RelationalExpr(int32_t addPos);
	virtual bool RelativeLocationPath();
	virtual void RelativePathPattern();
	virtual bool Step();
	virtual bool StepPattern(bool isLeadingSlashPermitted);
	virtual void StringExpr();
	virtual void UnaryExpr();
	virtual void UnionExpr();
	virtual void appendOp(int32_t length, int32_t op);
	void assertion(bool b, $String* msg);
	void consumeExpected($String* expected);
	void consumeExpected(char16_t expected);
	virtual $String* dumpRemainingTokenQueue();
	virtual void error($String* msg, $ObjectArray* args);
	virtual ::javax::xml::transform::ErrorListener* getErrorListener();
	int32_t getFunctionToken($String* key);
	$String* getTokenRelative(int32_t i);
	virtual void initMatchPattern(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, $String* expression, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* namespaceContext);
	virtual void initXPath(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, $String* expression, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* namespaceContext);
	virtual void insertOp(int32_t pos, int32_t length, int32_t op);
	bool lookahead(char16_t c, int32_t n);
	bool lookahead($String* s, int32_t n);
	bool lookbehind(char16_t c, int32_t n);
	bool lookbehindHasToken(int32_t n);
	void nextToken();
	void prevToken();
	virtual void setErrorHandler(::javax::xml::transform::ErrorListener* handler);
	bool tokenIs($String* s);
	bool tokenIs(char16_t c);
	virtual void warn($String* msg, $ObjectArray* args);
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	::com::sun::org::apache::xpath::internal::compiler::OpMap* m_ops = nullptr;
	$String* m_token = nullptr;
	char16_t m_tokenChar = 0;
	int32_t m_queueMark = 0;
	static const int32_t FILTER_MATCH_FAILED = 0;
	static const int32_t FILTER_MATCH_PRIMARY = 1;
	static const int32_t FILTER_MATCH_PREDICATES = 2;
	int32_t countPredicate = 0;
	::com::sun::org::apache::xml::internal::utils::PrefixResolver* m_namespaceContext = nullptr;
	::javax::xml::transform::ErrorListener* m_errorListener = nullptr;
	::javax::xml::transform::SourceLocator* m_sourceLocator = nullptr;
	::com::sun::org::apache::xpath::internal::compiler::FunctionTable* m_functionTable = nullptr;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("FILTER_MATCH_FAILED")
#pragma pop_macro("FILTER_MATCH_PREDICATES")
#pragma pop_macro("FILTER_MATCH_PRIMARY")

#endif // _com_sun_org_apache_xpath_internal_compiler_XPathParser_h_
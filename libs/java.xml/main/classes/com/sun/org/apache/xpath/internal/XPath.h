#ifndef _com_sun_org_apache_xpath_internal_XPath_h_
#define _com_sun_org_apache_xpath_internal_XPath_h_
//$ class com.sun.org.apache.xpath.internal.XPath
//$ extends java.io.Serializable
//$ implements com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_MATCHES")
#undef DEBUG_MATCHES
#pragma push_macro("MATCH")
#undef MATCH
#pragma push_macro("MATCH_SCORE_NODETEST")
#undef MATCH_SCORE_NODETEST
#pragma push_macro("MATCH_SCORE_NONE")
#undef MATCH_SCORE_NONE
#pragma push_macro("MATCH_SCORE_NSWILD")
#undef MATCH_SCORE_NSWILD
#pragma push_macro("MATCH_SCORE_OTHER")
#undef MATCH_SCORE_OTHER
#pragma push_macro("MATCH_SCORE_QNAME")
#undef MATCH_SCORE_QNAME
#pragma push_macro("SELECT")
#undef SELECT

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
						class Expression;
						class XPathContext;
						class XPathVisitor;
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
							class FunctionTable;
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
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $export XPath : public ::java::io::Serializable, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(XPath, 0, ::java::io::Serializable, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	XPath();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* exprString, ::javax::xml::transform::SourceLocator* locator, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver, int32_t type, ::javax::xml::transform::ErrorListener* errorListener);
	void init$($String* exprString, ::javax::xml::transform::SourceLocator* locator, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver, int32_t type, ::javax::xml::transform::ErrorListener* errorListener, ::com::sun::org::apache::xpath::internal::compiler::FunctionTable* aTable);
	void init$($String* exprString, ::javax::xml::transform::SourceLocator* locator, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver, int32_t type);
	void init$(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void assertion(bool b, $String* msg);
	virtual bool bool$(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t contextNode, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* namespaceContext);
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor);
	virtual void error(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t sourceNode, $String* msg, $ObjectArray* args);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::org::w3c::dom::Node* contextNode, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* namespaceContext);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t contextNode, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* namespaceContext);
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual ::javax::xml::transform::SourceLocator* getLocator();
	virtual double getMatchScore(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t context);
	virtual $String* getPatternString();
	void initFunctionTable();
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	virtual $String* toString() override;
	virtual void warn(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t sourceNode, $String* msg, $ObjectArray* args);
	static const int64_t serialVersionUID = (int64_t)0x372F57BFF437E299;
	::com::sun::org::apache::xpath::internal::Expression* m_mainExp = nullptr;
	::com::sun::org::apache::xpath::internal::compiler::FunctionTable* m_funcTable = nullptr;
	$String* m_patternString = nullptr;
	static const int32_t SELECT = 0;
	static const int32_t MATCH = 1;
	static const bool DEBUG_MATCHES = false;
	static double MATCH_SCORE_NONE;
	static double MATCH_SCORE_QNAME;
	static double MATCH_SCORE_NSWILD;
	static double MATCH_SCORE_NODETEST;
	static double MATCH_SCORE_OTHER;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_MATCHES")
#pragma pop_macro("MATCH")
#pragma pop_macro("MATCH_SCORE_NODETEST")
#pragma pop_macro("MATCH_SCORE_NONE")
#pragma pop_macro("MATCH_SCORE_NSWILD")
#pragma pop_macro("MATCH_SCORE_OTHER")
#pragma pop_macro("MATCH_SCORE_QNAME")
#pragma pop_macro("SELECT")

#endif // _com_sun_org_apache_xpath_internal_XPath_h_
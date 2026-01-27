#ifndef _com_sun_org_apache_xpath_internal_patterns_NodeTest_h_
#define _com_sun_org_apache_xpath_internal_patterns_NodeTest_h_
//$ class com.sun.org.apache.xpath.internal.patterns.NodeTest
//$ extends com.sun.org.apache.xpath.internal.Expression

#include <com/sun/org/apache/xpath/internal/Expression.h>

#pragma push_macro("SCORE_NODETEST")
#undef SCORE_NODETEST
#pragma push_macro("SCORE_NONE")
#undef SCORE_NONE
#pragma push_macro("SCORE_NSWILD")
#undef SCORE_NSWILD
#pragma push_macro("SCORE_OTHER")
#undef SCORE_OTHER
#pragma push_macro("SCORE_QNAME")
#undef SCORE_QNAME
#pragma push_macro("SHOW_BYFUNCTION")
#undef SHOW_BYFUNCTION
#pragma push_macro("SUPPORTS_PRE_STRIPPING")
#undef SUPPORTS_PRE_STRIPPING
#pragma push_macro("WILD")
#undef WILD

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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
						class ExpressionOwner;
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
						namespace objects {
							class XNumber;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {

class NodeTest : public ::com::sun::org::apache::xpath::internal::Expression {
	$class(NodeTest, 0, ::com::sun::org::apache::xpath::internal::Expression)
public:
	NodeTest();
	using ::com::sun::org::apache::xpath::internal::Expression::execute;
	void init$(int32_t whatToShow, $String* namespace$, $String* name);
	void init$(int32_t whatToShow);
	void init$();
	virtual void calcScore();
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	static void debugWhatToShow(int32_t whatToShow);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t context) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t context, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t expType) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual double getDefaultScore();
	virtual $String* getLocalName();
	virtual $String* getNamespace();
	static int32_t getNodeTypeTest(int32_t whatToShow);
	virtual ::com::sun::org::apache::xpath::internal::objects::XNumber* getStaticScore();
	virtual int32_t getWhatToShow();
	virtual void initNodeTest(int32_t whatToShow);
	virtual void initNodeTest(int32_t whatToShow, $String* namespace$, $String* name);
	virtual void setLocalName($String* name);
	virtual void setNamespace($String* ns);
	virtual void setStaticScore(::com::sun::org::apache::xpath::internal::objects::XNumber* score);
	virtual void setWhatToShow(int32_t what);
	static bool subPartMatch($String* p, $String* t);
	static bool subPartMatchNS($String* p, $String* t);
	static const int64_t serialVersionUID = (int64_t)0xB06311DB4D46777A;
	static $String* WILD;
	static $String* SUPPORTS_PRE_STRIPPING;
	int32_t m_whatToShow = 0;
	static const int32_t SHOW_BYFUNCTION = 0x00010000;
	$String* m_namespace = nullptr;
	$String* m_name = nullptr;
	::com::sun::org::apache::xpath::internal::objects::XNumber* m_score = nullptr;
	static ::com::sun::org::apache::xpath::internal::objects::XNumber* SCORE_NODETEST;
	static ::com::sun::org::apache::xpath::internal::objects::XNumber* SCORE_NSWILD;
	static ::com::sun::org::apache::xpath::internal::objects::XNumber* SCORE_QNAME;
	static ::com::sun::org::apache::xpath::internal::objects::XNumber* SCORE_OTHER;
	static ::com::sun::org::apache::xpath::internal::objects::XNumber* SCORE_NONE;
	bool m_isTotallyWild = false;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SCORE_NODETEST")
#pragma pop_macro("SCORE_NONE")
#pragma pop_macro("SCORE_NSWILD")
#pragma pop_macro("SCORE_OTHER")
#pragma pop_macro("SCORE_QNAME")
#pragma pop_macro("SHOW_BYFUNCTION")
#pragma pop_macro("SUPPORTS_PRE_STRIPPING")
#pragma pop_macro("WILD")

#endif // _com_sun_org_apache_xpath_internal_patterns_NodeTest_h_
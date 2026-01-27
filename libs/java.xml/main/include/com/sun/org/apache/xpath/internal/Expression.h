#ifndef _com_sun_org_apache_xpath_internal_Expression_h_
#define _com_sun_org_apache_xpath_internal_Expression_h_
//$ class com.sun.org.apache.xpath.internal.Expression
//$ extends java.io.Serializable
//$ implements com.sun.org.apache.xpath.internal.ExpressionNode,com.sun.org.apache.xpath.internal.XPathVisitable

#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitable.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
							class DTMIterator;
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
				namespace xml {
					namespace internal {
						namespace utils {
							class XMLString;
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
						class XPathContext;
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
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $import Expression : public ::java::io::Serializable, public ::com::sun::org::apache::xpath::internal::ExpressionNode, public ::com::sun::org::apache::xpath::internal::XPathVisitable {
	$class(Expression, $NO_CLASS_INIT, ::java::io::Serializable, ::com::sun::org::apache::xpath::internal::ExpressionNode, ::com::sun::org::apache::xpath::internal::XPathVisitable)
public:
	Expression();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* asIterator(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t contextNode);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* asIteratorRaw(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t contextNode);
	virtual int32_t asNode(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual void assertion(bool b, $String* msg);
	virtual bool bool$(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual bool canTraverseOutsideSubtree();
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) {return false;}
	virtual void error(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, $String* msg, $ObjectArray* args);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t currentNode);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t currentNode, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t expType);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) {return nullptr;}
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, bool destructiveOK);
	virtual void executeCharsToContentHandler(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::org::xml::sax::ContentHandler* handler);
	virtual void exprAddChild(::com::sun::org::apache::xpath::internal::ExpressionNode* n, int32_t i) override;
	virtual ::com::sun::org::apache::xpath::internal::ExpressionNode* exprGetChild(int32_t i) override;
	virtual int32_t exprGetNumChildren() override;
	virtual ::com::sun::org::apache::xpath::internal::ExpressionNode* exprGetParent() override;
	virtual void exprSetParent(::com::sun::org::apache::xpath::internal::ExpressionNode* n) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) {}
	virtual int32_t getColumnNumber() override;
	virtual ::com::sun::org::apache::xpath::internal::ExpressionNode* getExpressionOwner();
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual bool isNodesetExpr();
	bool isSameClass(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual bool isStableNumber();
	virtual double num(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual $String* toString() override;
	virtual void warn(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, $String* msg, $ObjectArray* args);
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* xstr(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	static const int64_t serialVersionUID = (int64_t)0x07D9A61C8DACACD6;
	::com::sun::org::apache::xpath::internal::ExpressionNode* m_parent = nullptr;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_Expression_h_
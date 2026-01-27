#ifndef _com_sun_org_apache_xpath_internal_XPathException_h_
#define _com_sun_org_apache_xpath_internal_XPathException_h_
//$ class com.sun.org.apache.xpath.internal.XPathException
//$ extends javax.xml.transform.TransformerException

#include <javax/xml/transform/TransformerException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class ExpressionNode;
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class Exception;
		class Throwable;
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

class $export XPathException : public ::javax::xml::transform::TransformerException {
	$class(XPathException, $NO_CLASS_INIT, ::javax::xml::transform::TransformerException)
public:
	XPathException();
	void init$($String* message, ::com::sun::org::apache::xpath::internal::ExpressionNode* ex);
	void init$($String* message);
	void init$($String* message, Object$* styleNode);
	void init$($String* message, ::org::w3c::dom::Node* styleNode, ::java::lang::Exception* e);
	void init$($String* message, ::java::lang::Exception* e);
	virtual $Throwable* getException() override;
	virtual ::com::sun::org::apache::xpath::internal::ExpressionNode* getExpressionOwner(::com::sun::org::apache::xpath::internal::ExpressionNode* ex);
	virtual $String* getMessage() override;
	virtual $Object* getStylesheetNode();
	virtual ::org::w3c::dom::Node* getStylesheetNode(::com::sun::org::apache::xpath::internal::ExpressionNode* ex);
	using ::javax::xml::transform::TransformerException::printStackTrace;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	virtual void setStylesheetNode(Object$* styleNode);
	static const int64_t serialVersionUID = (int64_t)0x3B2B2BE100E6764B;
	$Object* m_styleNode = nullptr;
	::java::lang::Exception* m_exception = nullptr;
	XPathException(const XPathException& e);
	virtual void throw$() override;
	inline XPathException* operator ->() {
		return (XPathException*)throwing$;
	}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathException_h_
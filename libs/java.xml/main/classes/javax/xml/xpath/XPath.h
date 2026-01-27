#ifndef _javax_xml_xpath_XPath_h_
#define _javax_xml_xpath_XPath_h_
//$ interface javax.xml.xpath.XPath
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPathEvaluationResult;
			class XPathExpression;
			class XPathFunctionResolver;
			class XPathVariableResolver;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPath : public ::java::lang::Object {
	$interface(XPath, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::xpath::XPathExpression* compile($String* expression) {return nullptr;}
	virtual $Object* evaluate($String* expression, Object$* item, ::javax::xml::namespace$::QName* returnType) {return nullptr;}
	virtual $String* evaluate($String* expression, Object$* item) {return nullptr;}
	virtual $Object* evaluate($String* expression, ::org::xml::sax::InputSource* source, ::javax::xml::namespace$::QName* returnType) {return nullptr;}
	virtual $String* evaluate($String* expression, ::org::xml::sax::InputSource* source) {return nullptr;}
	virtual $Object* evaluateExpression($String* expression, Object$* item, $Class* type);
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression($String* expression, Object$* item);
	virtual $Object* evaluateExpression($String* expression, ::org::xml::sax::InputSource* source, $Class* type);
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression($String* expression, ::org::xml::sax::InputSource* source);
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() {return nullptr;}
	virtual ::javax::xml::xpath::XPathFunctionResolver* getXPathFunctionResolver() {return nullptr;}
	virtual ::javax::xml::xpath::XPathVariableResolver* getXPathVariableResolver() {return nullptr;}
	virtual void reset() {}
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* nsContext) {}
	virtual void setXPathFunctionResolver(::javax::xml::xpath::XPathFunctionResolver* resolver) {}
	virtual void setXPathVariableResolver(::javax::xml::xpath::XPathVariableResolver* resolver) {}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPath_h_
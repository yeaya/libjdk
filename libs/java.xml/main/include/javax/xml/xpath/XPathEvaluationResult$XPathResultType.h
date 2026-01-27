#ifndef _javax_xml_xpath_XPathEvaluationResult$XPathResultType_h_
#define _javax_xml_xpath_XPathEvaluationResult$XPathResultType_h_
//$ class javax.xml.xpath.XPathEvaluationResult$XPathResultType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("NODE")
#undef NODE
#pragma push_macro("NODESET")
#undef NODESET
#pragma push_macro("NUMBER")
#undef NUMBER
#pragma push_macro("STRING")
#undef STRING

namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $import XPathEvaluationResult$XPathResultType : public ::java::lang::Enum {
	$class(XPathEvaluationResult$XPathResultType, 0, ::java::lang::Enum)
public:
	XPathEvaluationResult$XPathResultType();
	static $Array<::javax::xml::xpath::XPathEvaluationResult$XPathResultType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::javax::xml::namespace$::QName* qnameType, $Class* clsType);
	bool equalsClassType($Class* clsType);
	static ::javax::xml::namespace$::QName* getQNameType($Class* clsType);
	bool isAcceptedNumberSubType($Class* clsType);
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* valueOf($String* name);
	static $Array<::javax::xml::xpath::XPathEvaluationResult$XPathResultType>* values();
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* ANY;
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* BOOLEAN;
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* NUMBER;
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* STRING;
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* NODESET;
	static ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* NODE;
	static $Array<::javax::xml::xpath::XPathEvaluationResult$XPathResultType>* $VALUES;
	::javax::xml::namespace$::QName* qnameType = nullptr;
	$Class* clsType = nullptr;
};

		} // xpath
	} // xml
} // javax

#pragma pop_macro("ANY")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("NODE")
#pragma pop_macro("NODESET")
#pragma pop_macro("NUMBER")
#pragma pop_macro("STRING")

#endif // _javax_xml_xpath_XPathEvaluationResult$XPathResultType_h_
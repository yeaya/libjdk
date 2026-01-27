#ifndef _javax_xml_validation_TypeInfoProvider_h_
#define _javax_xml_validation_TypeInfoProvider_h_
//$ class javax.xml.validation.TypeInfoProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class TypeInfo;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class $export TypeInfoProvider : public ::java::lang::Object {
	$class(TypeInfoProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeInfoProvider();
	void init$();
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo(int32_t index) {return nullptr;}
	virtual ::org::w3c::dom::TypeInfo* getElementTypeInfo() {return nullptr;}
	virtual bool isIdAttribute(int32_t index) {return false;}
	virtual bool isSpecified(int32_t index) {return false;}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_TypeInfoProvider_h_
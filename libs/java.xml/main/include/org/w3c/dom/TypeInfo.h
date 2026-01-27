#ifndef _org_w3c_dom_TypeInfo_h_
#define _org_w3c_dom_TypeInfo_h_
//$ interface org.w3c.dom.TypeInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DERIVATION_EXTENSION")
#undef DERIVATION_EXTENSION
#pragma push_macro("DERIVATION_LIST")
#undef DERIVATION_LIST
#pragma push_macro("DERIVATION_RESTRICTION")
#undef DERIVATION_RESTRICTION
#pragma push_macro("DERIVATION_UNION")
#undef DERIVATION_UNION

namespace org {
	namespace w3c {
		namespace dom {

class $import TypeInfo : public ::java::lang::Object {
	$interface(TypeInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getTypeName() {return nullptr;}
	virtual $String* getTypeNamespace() {return nullptr;}
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {return false;}
	static const int32_t DERIVATION_RESTRICTION = 1;
	static const int32_t DERIVATION_EXTENSION = 2;
	static const int32_t DERIVATION_UNION = 4;
	static const int32_t DERIVATION_LIST = 8;
};

		} // dom
	} // w3c
} // org

#pragma pop_macro("DERIVATION_EXTENSION")
#pragma pop_macro("DERIVATION_LIST")
#pragma pop_macro("DERIVATION_RESTRICTION")
#pragma pop_macro("DERIVATION_UNION")

#endif // _org_w3c_dom_TypeInfo_h_
#ifndef _com_sun_org_apache_xerces_internal_xs_XSTypeDefinition_h_
#define _com_sun_org_apache_xerces_internal_xs_XSTypeDefinition_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSTypeDefinition
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

#pragma push_macro("COMPLEX_TYPE")
#undef COMPLEX_TYPE
#pragma push_macro("SIMPLE_TYPE")
#undef SIMPLE_TYPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

class XSTypeDefinition : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSTypeDefinition, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual bool derivedFrom($String* namespace$, $String* name, int16_t derivationMethod) {return false;}
	virtual bool derivedFromType(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* ancestorType, int16_t derivationMethod) {return false;}
	virtual bool getAnonymous() {return false;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getBaseType() {return nullptr;}
	virtual int16_t getFinal() {return 0;}
	virtual int16_t getTypeCategory() {return 0;}
	virtual bool isFinal(int16_t restriction) {return false;}
	static const int16_t COMPLEX_TYPE = 15;
	static const int16_t SIMPLE_TYPE = 16;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("COMPLEX_TYPE")
#pragma pop_macro("SIMPLE_TYPE")

#endif // _com_sun_org_apache_xerces_internal_xs_XSTypeDefinition_h_
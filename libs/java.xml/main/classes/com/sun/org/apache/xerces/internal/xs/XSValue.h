#ifndef _com_sun_org_apache_xerces_internal_xs_XSValue_h_
#define _com_sun_org_apache_xerces_internal_xs_XSValue_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class ShortList;
							class XSObjectList;
							class XSSimpleTypeDefinition;
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
				namespace xerces {
					namespace internal {
						namespace xs {

class XSValue : public ::java::lang::Object {
	$interface(XSValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getActualValue() {return nullptr;}
	virtual int16_t getActualValueType() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getListValueTypes() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMemberTypeDefinitions() {return nullptr;}
	virtual $String* getNormalizedValue() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getTypeDefinition() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSValue_h_
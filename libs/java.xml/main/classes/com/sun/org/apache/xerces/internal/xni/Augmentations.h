#ifndef _com_sun_org_apache_xerces_internal_xni_Augmentations_h_
#define _com_sun_org_apache_xerces_internal_xni_Augmentations_h_
//$ interface com.sun.org.apache.xerces.internal.xni.Augmentations
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class Augmentations : public ::java::lang::Object {
	$interface(Augmentations, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getItem($String* key) {return nullptr;}
	virtual ::java::util::Enumeration* keys() {return nullptr;}
	virtual $Object* putItem($String* key, Object$* item) {return nullptr;}
	virtual void removeAllItems() {}
	virtual $Object* removeItem($String* key) {return nullptr;}
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_Augmentations_h_
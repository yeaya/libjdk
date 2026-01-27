#ifndef _com_sun_org_apache_xerces_internal_dom_LCount_h_
#define _com_sun_org_apache_xerces_internal_dom_LCount_h_
//$ class com.sun.org.apache.xerces.internal.dom.LCount
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class LCount : public ::java::lang::Object {
	$class(LCount, 0, ::java::lang::Object)
public:
	LCount();
	void init$();
	static ::com::sun::org::apache::xerces::internal::dom::LCount* lambda$lookup$0($String* key);
	static ::com::sun::org::apache::xerces::internal::dom::LCount* lookup($String* evtName);
	static ::java::util::Map* lCounts;
	int32_t captures = 0;
	int32_t bubbles = 0;
	int32_t defaults = 0;
	int32_t total = 0;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_LCount_h_
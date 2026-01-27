#ifndef _com_sun_org_apache_xerces_internal_util_SymbolHash$Entry_h_
#define _com_sun_org_apache_xerces_internal_util_SymbolHash$Entry_h_
//$ class com.sun.org.apache.xerces.internal.util.SymbolHash$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class SymbolHash$Entry : public ::java::lang::Object {
	$class(SymbolHash$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymbolHash$Entry();
	void init$();
	void init$(Object$* key, Object$* value, ::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry* next);
	::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry* makeClone();
	$Object* key = nullptr;
	$Object* value = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry* next = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_SymbolHash$Entry_h_
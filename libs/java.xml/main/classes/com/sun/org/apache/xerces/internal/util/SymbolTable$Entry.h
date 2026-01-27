#ifndef _com_sun_org_apache_xerces_internal_util_SymbolTable$Entry_h_
#define _com_sun_org_apache_xerces_internal_util_SymbolTable$Entry_h_
//$ class com.sun.org.apache.xerces.internal.util.SymbolTable$Entry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class SymbolTable$Entry : public ::java::lang::Object {
	$class(SymbolTable$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymbolTable$Entry();
	void init$($String* symbol, ::com::sun::org::apache::xerces::internal::util::SymbolTable$Entry* next);
	void init$($chars* ch, int32_t offset, int32_t length, ::com::sun::org::apache::xerces::internal::util::SymbolTable$Entry* next);
	$String* symbol = nullptr;
	$chars* characters = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable$Entry* next = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_SymbolTable$Entry_h_
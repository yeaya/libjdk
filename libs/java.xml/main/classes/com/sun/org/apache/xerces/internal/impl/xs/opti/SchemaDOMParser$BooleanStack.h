#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMParser$BooleanStack_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMParser$BooleanStack_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser$BooleanStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

class SchemaDOMParser$BooleanStack : public ::java::lang::Object {
	$class(SchemaDOMParser$BooleanStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SchemaDOMParser$BooleanStack();
	void init$();
	void clear();
	void ensureCapacity(int32_t size);
	bool pop();
	void push(bool value);
	int32_t size();
	int32_t fDepth = 0;
	$booleans* fData = nullptr;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMParser$BooleanStack_h_
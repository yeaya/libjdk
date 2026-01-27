#ifndef _com_sun_org_apache_xerces_internal_util_IntStack_h_
#define _com_sun_org_apache_xerces_internal_util_IntStack_h_
//$ class com.sun.org.apache.xerces.internal.util.IntStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class IntStack : public ::java::lang::Object {
	$class(IntStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntStack();
	void init$();
	void clear();
	int32_t elementAt(int32_t depth);
	void ensureCapacity(int32_t size);
	int32_t peek();
	int32_t pop();
	void print();
	void push(int32_t value);
	int32_t size();
	int32_t fDepth = 0;
	$ints* fData = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_IntStack_h_
#ifndef _com_sun_org_apache_bcel_internal_generic_IndexedInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_IndexedInstruction_h_
//$ interface com.sun.org.apache.bcel.internal.generic.IndexedInstruction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class IndexedInstruction : public ::java::lang::Object {
	$interface(IndexedInstruction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getIndex() {return 0;}
	virtual void setIndex(int32_t index) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_IndexedInstruction_h_
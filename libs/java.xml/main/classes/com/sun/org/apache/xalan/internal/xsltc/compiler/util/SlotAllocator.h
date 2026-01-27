#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_SlotAllocator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_SlotAllocator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.SlotAllocator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class LocalVariableGen;
							class Type;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class SlotAllocator : public ::java::lang::Object {
	$class(SlotAllocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SlotAllocator();
	void init$();
	int32_t allocateSlot(::com::sun::org::apache::bcel::internal::generic::Type* type);
	void initialize($Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>* vars);
	void releaseSlot(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lvg);
	int32_t _firstAvailableSlot = 0;
	int32_t _size = 0;
	int32_t _free = 0;
	$ints* _slotsTaken = nullptr;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_SlotAllocator_h_
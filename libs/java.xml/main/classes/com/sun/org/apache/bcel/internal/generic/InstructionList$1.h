#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionList$1_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionList$1_h_
//$ class com.sun.org.apache.bcel.internal.generic.InstructionList$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
							class InstructionList;
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
				namespace bcel {
					namespace internal {
						namespace generic {

class InstructionList$1 : public ::java::util::Iterator {
	$class(InstructionList$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	InstructionList$1();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionList* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::org::apache::bcel::internal::generic::InstructionList* this$0 = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionList$1_h_
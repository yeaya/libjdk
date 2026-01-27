#ifndef _com_sun_org_apache_bcel_internal_generic_LDC_W_h_
#define _com_sun_org_apache_bcel_internal_generic_LDC_W_h_
//$ class com.sun.org.apache.bcel.internal.generic.LDC_W
//$ extends com.sun.org.apache.bcel.internal.generic.LDC

#include <com/sun/org/apache/bcel/internal/generic/LDC.h>

#pragma push_macro("LDC_W")
#undef LDC_W

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {
							class ByteSequence;
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

class LDC_W : public ::com::sun::org::apache::bcel::internal::generic::LDC {
	$class(LDC_W, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::LDC)
public:
	LDC_W();
	void init$();
	void init$(int32_t index);
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	using ::com::sun::org::apache::bcel::internal::generic::LDC::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LDC_W")

#endif // _com_sun_org_apache_bcel_internal_generic_LDC_W_h_
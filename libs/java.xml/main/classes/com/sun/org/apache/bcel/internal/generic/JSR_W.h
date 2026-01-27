#ifndef _com_sun_org_apache_bcel_internal_generic_JSR_W_h_
#define _com_sun_org_apache_bcel_internal_generic_JSR_W_h_
//$ class com.sun.org.apache.bcel.internal.generic.JSR_W
//$ extends com.sun.org.apache.bcel.internal.generic.JsrInstruction

#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>

#pragma push_macro("JSR_W")
#undef JSR_W

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
							class Visitor;
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
						namespace util {
							class ByteSequence;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class JSR_W : public ::com::sun::org::apache::bcel::internal::generic::JsrInstruction {
	$class(JSR_W, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::JsrInstruction)
public:
	JSR_W();
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	using ::com::sun::org::apache::bcel::internal::generic::JsrInstruction::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("JSR_W")

#endif // _com_sun_org_apache_bcel_internal_generic_JSR_W_h_
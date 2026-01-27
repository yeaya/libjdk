#ifndef _com_sun_org_apache_bcel_internal_generic_LOOKUPSWITCH_h_
#define _com_sun_org_apache_bcel_internal_generic_LOOKUPSWITCH_h_
//$ class com.sun.org.apache.bcel.internal.generic.LOOKUPSWITCH
//$ extends com.sun.org.apache.bcel.internal.generic.Select

#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <java/lang/Array.h>

#pragma push_macro("LOOKUPSWITCH")
#undef LOOKUPSWITCH

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

class LOOKUPSWITCH : public ::com::sun::org::apache::bcel::internal::generic::Select {
	$class(LOOKUPSWITCH, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Select)
public:
	LOOKUPSWITCH();
	using ::com::sun::org::apache::bcel::internal::generic::Select::getTarget;
	void init$();
	void init$($ints* match, $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* defaultTarget);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	using ::com::sun::org::apache::bcel::internal::generic::Select::toString;
	using ::com::sun::org::apache::bcel::internal::generic::Select::setTarget;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOOKUPSWITCH")

#endif // _com_sun_org_apache_bcel_internal_generic_LOOKUPSWITCH_h_
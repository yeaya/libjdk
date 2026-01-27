#ifndef _com_sun_org_apache_bcel_internal_generic_INVOKEINTERFACE_h_
#define _com_sun_org_apache_bcel_internal_generic_INVOKEINTERFACE_h_
//$ class com.sun.org.apache.bcel.internal.generic.INVOKEINTERFACE
//$ extends com.sun.org.apache.bcel.internal.generic.InvokeInstruction

#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("INVOKEINTERFACE")
#undef INVOKEINTERFACE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
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
							class ConstantPoolGen;
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

class INVOKEINTERFACE : public ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction {
	$class(INVOKEINTERFACE, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction)
public:
	INVOKEINTERFACE();
	using ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction::getName;
	void init$();
	void init$(int32_t index, int32_t nargs);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	int32_t getCount();
	virtual $ClassArray* getExceptions() override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	using ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction::toString;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
	int32_t nargs = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INVOKEINTERFACE")

#endif // _com_sun_org_apache_bcel_internal_generic_INVOKEINTERFACE_h_
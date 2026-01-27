#ifndef _com_sun_org_apache_bcel_internal_generic_INVOKEDYNAMIC_h_
#define _com_sun_org_apache_bcel_internal_generic_INVOKEDYNAMIC_h_
//$ class com.sun.org.apache.bcel.internal.generic.INVOKEDYNAMIC
//$ extends com.sun.org.apache.bcel.internal.generic.InvokeInstruction

#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("INVOKEDYNAMIC")
#undef INVOKEDYNAMIC

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
							class ReferenceType;
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

class INVOKEDYNAMIC : public ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction {
	$class(INVOKEDYNAMIC, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction)
public:
	INVOKEDYNAMIC();
	using ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction::getName;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual $String* getClassName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $ClassArray* getExceptions() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::ReferenceType* getReferenceType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	using ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction::toString;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INVOKEDYNAMIC")

#endif // _com_sun_org_apache_bcel_internal_generic_INVOKEDYNAMIC_h_
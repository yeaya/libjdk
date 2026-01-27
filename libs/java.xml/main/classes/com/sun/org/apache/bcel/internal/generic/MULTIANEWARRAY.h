#ifndef _com_sun_org_apache_bcel_internal_generic_MULTIANEWARRAY_h_
#define _com_sun_org_apache_bcel_internal_generic_MULTIANEWARRAY_h_
//$ class com.sun.org.apache.bcel.internal.generic.MULTIANEWARRAY
//$ extends com.sun.org.apache.bcel.internal.generic.CPInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.LoadClass,com.sun.org.apache.bcel.internal.generic.AllocationInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower

#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <java/lang/Array.h>

#pragma push_macro("MULTIANEWARRAY")
#undef MULTIANEWARRAY

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
							class ObjectType;
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

class MULTIANEWARRAY : public ::com::sun::org::apache::bcel::internal::generic::CPInstruction, public ::com::sun::org::apache::bcel::internal::generic::LoadClass, public ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower {
	$class(MULTIANEWARRAY, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CPInstruction, ::com::sun::org::apache::bcel::internal::generic::LoadClass, ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower)
public:
	MULTIANEWARRAY();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index, int16_t dimensions);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	int16_t getDimensions();
	virtual $ClassArray* getExceptions() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::ObjectType* getLoadClassType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
	int16_t dimensions = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MULTIANEWARRAY")

#endif // _com_sun_org_apache_bcel_internal_generic_MULTIANEWARRAY_h_
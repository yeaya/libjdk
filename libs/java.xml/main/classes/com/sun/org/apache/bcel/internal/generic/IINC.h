#ifndef _com_sun_org_apache_bcel_internal_generic_IINC_h_
#define _com_sun_org_apache_bcel_internal_generic_IINC_h_
//$ class com.sun.org.apache.bcel.internal.generic.IINC
//$ extends com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction

#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>

#pragma push_macro("IINC")
#undef IINC

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Type;
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

class IINC : public ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction {
	$class(IINC, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction)
public:
	IINC();
	void init$();
	void init$(int32_t n, int32_t c);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	int32_t getIncrement();
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	void setIncrement(int32_t c);
	virtual void setIndex(int32_t n) override;
	void setWide();
	using ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction::toString;
	virtual $String* toString(bool verbose) override;
	bool wide = false;
	int32_t c = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("IINC")

#endif // _com_sun_org_apache_bcel_internal_generic_IINC_h_
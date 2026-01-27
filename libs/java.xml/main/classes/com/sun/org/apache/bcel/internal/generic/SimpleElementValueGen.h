#ifndef _com_sun_org_apache_bcel_internal_generic_SimpleElementValueGen_h_
#define _com_sun_org_apache_bcel_internal_generic_SimpleElementValueGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.SimpleElementValueGen
//$ extends com.sun.org.apache.bcel.internal.generic.ElementValueGen

#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ElementValue;
							class SimpleElementValue;
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

class SimpleElementValueGen : public ::com::sun::org::apache::bcel::internal::generic::ElementValueGen {
	$class(SimpleElementValueGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen)
public:
	SimpleElementValueGen();
	void init$(int32_t type, int32_t idx, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, int32_t value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, int64_t value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, double value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, float value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, int16_t value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, int8_t value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, char16_t value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, bool value);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen, $String* value);
	void init$(::com::sun::org::apache::bcel::internal::classfile::SimpleElementValue* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValue* getElementValue() override;
	virtual int32_t getIndex();
	virtual int32_t getValueInt();
	virtual $String* getValueString();
	virtual $String* stringifyValue() override;
	int32_t idx = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_SimpleElementValueGen_h_
#ifndef _com_sun_org_apache_bcel_internal_generic_EnumElementValueGen_h_
#define _com_sun_org_apache_bcel_internal_generic_EnumElementValueGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.EnumElementValueGen
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
							class EnumElementValue;
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

class EnumElementValueGen : public ::com::sun::org::apache::bcel::internal::generic::ElementValueGen {
	$class(EnumElementValueGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen)
public:
	EnumElementValueGen();
	void init$(int32_t typeIdx, int32_t valueIdx, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::generic::ObjectType* t, $String* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::classfile::EnumElementValue* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValue* getElementValue() override;
	virtual $String* getEnumTypeString();
	virtual $String* getEnumValueString();
	virtual int32_t getTypeIndex();
	virtual int32_t getValueIndex();
	virtual $String* stringifyValue() override;
	int32_t typeIdx = 0;
	int32_t valueIdx = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_EnumElementValueGen_h_
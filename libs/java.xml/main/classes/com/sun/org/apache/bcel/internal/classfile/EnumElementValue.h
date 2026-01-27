#ifndef _com_sun_org_apache_bcel_internal_classfile_EnumElementValue_h_
#define _com_sun_org_apache_bcel_internal_classfile_EnumElementValue_h_
//$ class com.sun.org.apache.bcel.internal.classfile.EnumElementValue
//$ extends com.sun.org.apache.bcel.internal.classfile.ElementValue

#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>

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
						namespace classfile {

class EnumElementValue : public ::com::sun::org::apache::bcel::internal::classfile::ElementValue {
	$class(EnumElementValue, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ElementValue)
public:
	EnumElementValue();
	void init$(int32_t type, int32_t typeIdx, int32_t valueIdx, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual $String* getEnumTypeString();
	virtual $String* getEnumValueString();
	virtual int32_t getTypeIndex();
	virtual int32_t getValueIndex();
	virtual $String* stringifyValue() override;
	int32_t typeIdx = 0;
	int32_t valueIdx = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_EnumElementValue_h_
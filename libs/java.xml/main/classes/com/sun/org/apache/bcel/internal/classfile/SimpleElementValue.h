#ifndef _com_sun_org_apache_bcel_internal_classfile_SimpleElementValue_h_
#define _com_sun_org_apache_bcel_internal_classfile_SimpleElementValue_h_
//$ class com.sun.org.apache.bcel.internal.classfile.SimpleElementValue
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

class SimpleElementValue : public ::com::sun::org::apache::bcel::internal::classfile::ElementValue {
	$class(SimpleElementValue, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ElementValue)
public:
	SimpleElementValue();
	void init$(int32_t type, int32_t index, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual int32_t getIndex();
	virtual bool getValueBoolean();
	virtual int8_t getValueByte();
	virtual char16_t getValueChar();
	virtual double getValueDouble();
	virtual float getValueFloat();
	virtual int32_t getValueInt();
	virtual int64_t getValueLong();
	virtual int16_t getValueShort();
	virtual $String* getValueString();
	virtual void setIndex(int32_t index);
	virtual $String* stringifyValue() override;
	virtual $String* toString() override;
	int32_t index = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_SimpleElementValue_h_
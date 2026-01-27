#ifndef _com_sun_org_apache_bcel_internal_classfile_ArrayElementValue_h_
#define _com_sun_org_apache_bcel_internal_classfile_ArrayElementValue_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ArrayElementValue
//$ extends com.sun.org.apache.bcel.internal.classfile.ElementValue

#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <java/lang/Array.h>

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

class ArrayElementValue : public ::com::sun::org::apache::bcel::internal::classfile::ElementValue {
	$class(ArrayElementValue, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ElementValue)
public:
	ArrayElementValue();
	void init$(int32_t type, $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>* datums, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>* getElementValuesArray();
	virtual int32_t getElementValuesArraySize();
	virtual $String* stringifyValue() override;
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>* elementValues = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ArrayElementValue_h_
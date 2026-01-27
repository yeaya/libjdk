#ifndef _com_sun_org_apache_bcel_internal_classfile_ClassElementValue_h_
#define _com_sun_org_apache_bcel_internal_classfile_ClassElementValue_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ClassElementValue
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

class ClassElementValue : public ::com::sun::org::apache::bcel::internal::classfile::ElementValue {
	$class(ClassElementValue, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ElementValue)
public:
	ClassElementValue();
	void init$(int32_t type, int32_t idx, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual $String* getClassString();
	virtual int32_t getIndex();
	virtual $String* stringifyValue() override;
	int32_t idx = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ClassElementValue_h_
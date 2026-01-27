#ifndef _com_sun_org_apache_bcel_internal_classfile_PMGClass_h_
#define _com_sun_org_apache_bcel_internal_classfile_PMGClass_h_
//$ class com.sun.org.apache.bcel.internal.classfile.PMGClass
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class Visitor;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataInput;
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

class PMGClass : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(PMGClass, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	PMGClass();
	void init$(::com::sun::org::apache::bcel::internal::classfile::PMGClass* pgmClass);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, int32_t pmgIndex, int32_t pmgClassIndex, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getPMGClassIndex();
	$String* getPMGClassName();
	int32_t getPMGIndex();
	$String* getPMGName();
	void setPMGClassIndex(int32_t pmgClassIndex);
	void setPMGIndex(int32_t pmgIndex);
	virtual $String* toString() override;
	int32_t pmgClassIndex = 0;
	int32_t pmgIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_PMGClass_h_
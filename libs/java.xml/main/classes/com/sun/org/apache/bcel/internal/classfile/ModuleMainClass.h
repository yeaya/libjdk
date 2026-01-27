#ifndef _com_sun_org_apache_bcel_internal_classfile_ModuleMainClass_h_
#define _com_sun_org_apache_bcel_internal_classfile_ModuleMainClass_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ModuleMainClass
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

class ModuleMainClass : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(ModuleMainClass, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	ModuleMainClass();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass* c);
	void init$(int32_t name_index, int32_t length, int32_t mainClassIndex, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void init$(int32_t nameIndex, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getHostClassIndex();
	void setHostClassIndex(int32_t mainClassIndex);
	virtual $String* toString() override;
	int32_t mainClassIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ModuleMainClass_h_
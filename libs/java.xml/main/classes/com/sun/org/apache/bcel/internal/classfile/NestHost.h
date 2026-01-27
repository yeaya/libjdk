#ifndef _com_sun_org_apache_bcel_internal_classfile_NestHost_h_
#define _com_sun_org_apache_bcel_internal_classfile_NestHost_h_
//$ class com.sun.org.apache.bcel.internal.classfile.NestHost
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

class NestHost : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(NestHost, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	NestHost();
	void init$(::com::sun::org::apache::bcel::internal::classfile::NestHost* c);
	void init$(int32_t nameIndex, int32_t length, int32_t hostClassIndex, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getHostClassIndex();
	void setHostClassIndex(int32_t hostClassIndex);
	virtual $String* toString() override;
	int32_t hostClassIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_NestHost_h_
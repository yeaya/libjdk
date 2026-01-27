#ifndef _com_sun_org_apache_bcel_internal_classfile_StackMapType_h_
#define _com_sun_org_apache_bcel_internal_classfile_StackMapType_h_
//$ class com.sun.org.apache.bcel.internal.classfile.StackMapType
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

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

class StackMapType : public ::java::lang::Cloneable {
	$class(StackMapType, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	StackMapType();
	void init$(::java::io::DataInput* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int8_t type, int32_t index, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	::com::sun::org::apache::bcel::internal::classfile::StackMapType* copy();
	void dump(::java::io::DataOutputStream* file);
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	int32_t getIndex();
	int8_t getType();
	bool hasIndex();
	$String* printIndex();
	void setConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void setIndex(int32_t t);
	void setType(int8_t t);
	virtual $String* toString() override;
	int8_t type = 0;
	int32_t index = 0;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_StackMapType_h_
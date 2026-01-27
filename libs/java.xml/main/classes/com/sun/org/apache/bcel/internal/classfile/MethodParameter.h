#ifndef _com_sun_org_apache_bcel_internal_classfile_MethodParameter_h_
#define _com_sun_org_apache_bcel_internal_classfile_MethodParameter_h_
//$ class com.sun.org.apache.bcel.internal.classfile.MethodParameter
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

class MethodParameter : public ::java::lang::Cloneable {
	$class(MethodParameter, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	MethodParameter();
	void init$();
	void init$(::java::io::DataInput* input);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v);
	virtual ::com::sun::org::apache::bcel::internal::classfile::MethodParameter* copy();
	void dump(::java::io::DataOutputStream* file);
	virtual int32_t getAccessFlags();
	virtual int32_t getNameIndex();
	virtual $String* getParameterName(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual bool isFinal();
	virtual bool isMandated();
	virtual bool isSynthetic();
	virtual void setAccessFlags(int32_t access_flags);
	virtual void setNameIndex(int32_t name_index);
	int32_t nameIndex = 0;
	int32_t accessFlags = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_MethodParameter_h_
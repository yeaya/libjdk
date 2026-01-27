#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantInteger_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantInteger_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantInteger
//$ extends com.sun.org.apache.bcel.internal.classfile.Constant
//$ implements com.sun.org.apache.bcel.internal.classfile.ConstantObject

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantObject.h>

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

class ConstantInteger : public ::com::sun::org::apache::bcel::internal::classfile::Constant, public ::com::sun::org::apache::bcel::internal::classfile::ConstantObject {
	$class(ConstantInteger, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant, ::com::sun::org::apache::bcel::internal::classfile::ConstantObject)
public:
	ConstantInteger();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t bytes);
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantInteger* c);
	void init$(::java::io::DataInput* file);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getBytes();
	virtual $Object* getConstantValue(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
	void setBytes(int32_t bytes);
	virtual $String* toString() override;
	int32_t bytes = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantInteger_h_
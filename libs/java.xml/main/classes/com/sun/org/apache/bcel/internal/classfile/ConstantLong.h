#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantLong_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantLong_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantLong
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

class ConstantLong : public ::com::sun::org::apache::bcel::internal::classfile::Constant, public ::com::sun::org::apache::bcel::internal::classfile::ConstantObject {
	$class(ConstantLong, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant, ::com::sun::org::apache::bcel::internal::classfile::ConstantObject)
public:
	ConstantLong();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t bytes);
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantLong* c);
	void init$(::java::io::DataInput* file);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int64_t getBytes();
	virtual $Object* getConstantValue(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
	void setBytes(int64_t bytes);
	virtual $String* toString() override;
	int64_t bytes = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantLong_h_
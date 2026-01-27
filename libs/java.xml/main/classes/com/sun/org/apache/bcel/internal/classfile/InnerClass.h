#ifndef _com_sun_org_apache_bcel_internal_classfile_InnerClass_h_
#define _com_sun_org_apache_bcel_internal_classfile_InnerClass_h_
//$ class com.sun.org.apache.bcel.internal.classfile.InnerClass
//$ extends java.lang.Cloneable
//$ implements com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
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

class InnerClass : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(InnerClass, $NO_CLASS_INIT, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	InnerClass();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::classfile::InnerClass* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t innerClassIndex, int32_t outerClassIndex, int32_t innerNameIndex, int32_t innerAccessFlags);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::InnerClass* copy();
	void dump(::java::io::DataOutputStream* file);
	int32_t getInnerAccessFlags();
	int32_t getInnerClassIndex();
	int32_t getInnerNameIndex();
	int32_t getOuterClassIndex();
	void setInnerAccessFlags(int32_t innerAccessFlags);
	void setInnerClassIndex(int32_t innerClassIndex);
	void setInnerNameIndex(int32_t innerNameIndex);
	void setOuterClassIndex(int32_t outerClassIndex);
	virtual $String* toString() override;
	$String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	int32_t innerClassIndex = 0;
	int32_t outerClassIndex = 0;
	int32_t innerNameIndex = 0;
	int32_t innerAccessFlags = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_InnerClass_h_
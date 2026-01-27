#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantPool_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantPool_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantPool
//$ extends java.lang.Cloneable
//$ implements com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Constant;
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

class ConstantPool : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(ConstantPool, $NO_CLASS_INIT, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	ConstantPool();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* constantPool);
	void init$(::java::io::DataInput* input);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual $String* constantToString(::com::sun::org::apache::bcel::internal::classfile::Constant* c);
	virtual $String* constantToString(int32_t index, int8_t tag);
	virtual ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* copy();
	virtual void dump(::java::io::DataOutputStream* file);
	static $String* escape($String* str);
	virtual ::com::sun::org::apache::bcel::internal::classfile::Constant* getConstant(int32_t index);
	virtual ::com::sun::org::apache::bcel::internal::classfile::Constant* getConstant(int32_t index, int8_t tag);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* getConstantPool();
	virtual $String* getConstantString(int32_t index, int8_t tag);
	virtual int32_t getLength();
	virtual void setConstant(int32_t index, ::com::sun::org::apache::bcel::internal::classfile::Constant* constant);
	virtual void setConstantPool($Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* constantPool);
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* constantPool = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantPool_h_
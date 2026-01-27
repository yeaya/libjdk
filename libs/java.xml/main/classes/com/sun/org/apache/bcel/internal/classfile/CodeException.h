#ifndef _com_sun_org_apache_bcel_internal_classfile_CodeException_h_
#define _com_sun_org_apache_bcel_internal_classfile_CodeException_h_
//$ class com.sun.org.apache.bcel.internal.classfile.CodeException
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

class CodeException : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(CodeException, $NO_CLASS_INIT, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	CodeException();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::classfile::CodeException* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t startPc, int32_t endPc, int32_t handlerPc, int32_t catchType);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::CodeException* copy();
	void dump(::java::io::DataOutputStream* file);
	int32_t getCatchType();
	int32_t getEndPC();
	int32_t getHandlerPC();
	int32_t getStartPC();
	void setCatchType(int32_t catchType);
	void setEndPC(int32_t endPc);
	void setHandlerPC(int32_t handlerPc);
	void setStartPC(int32_t startPc);
	virtual $String* toString() override;
	$String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp, bool verbose);
	$String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp);
	int32_t startPc = 0;
	int32_t endPc = 0;
	int32_t handlerPc = 0;
	int32_t catchType = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_CodeException_h_
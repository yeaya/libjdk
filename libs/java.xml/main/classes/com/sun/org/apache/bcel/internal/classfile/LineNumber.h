#ifndef _com_sun_org_apache_bcel_internal_classfile_LineNumber_h_
#define _com_sun_org_apache_bcel_internal_classfile_LineNumber_h_
//$ class com.sun.org.apache.bcel.internal.classfile.LineNumber
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

class LineNumber : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(LineNumber, $NO_CLASS_INIT, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	LineNumber();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::classfile::LineNumber* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t startPc, int32_t lineNumber);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::LineNumber* copy();
	void dump(::java::io::DataOutputStream* file);
	int32_t getLineNumber();
	int32_t getStartPC();
	void setLineNumber(int32_t lineNumber);
	void setStartPC(int32_t startPc);
	virtual $String* toString() override;
	int16_t startPc = 0;
	int16_t lineNumber = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_LineNumber_h_
#ifndef _com_sun_org_apache_bcel_internal_classfile_ModuleRequires_h_
#define _com_sun_org_apache_bcel_internal_classfile_ModuleRequires_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ModuleRequires
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

class ModuleRequires : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(ModuleRequires, $NO_CLASS_INIT, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	ModuleRequires();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::DataInput* file);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::ModuleRequires* copy();
	void dump(::java::io::DataOutputStream* file);
	virtual $String* toString() override;
	$String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	int32_t requiresIndex = 0;
	int32_t requiresFlags = 0;
	int32_t requiresVersionIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ModuleRequires_h_
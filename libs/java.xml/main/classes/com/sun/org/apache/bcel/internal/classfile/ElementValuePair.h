#ifndef _com_sun_org_apache_bcel_internal_classfile_ElementValuePair_h_
#define _com_sun_org_apache_bcel_internal_classfile_ElementValuePair_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ElementValuePair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class ElementValue;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
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

class ElementValuePair : public ::java::lang::Object {
	$class(ElementValuePair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementValuePair();
	void init$(int32_t elementNameIndex, ::com::sun::org::apache::bcel::internal::classfile::ElementValue* elementValue, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	virtual void dump(::java::io::DataOutputStream* dos);
	virtual int32_t getNameIndex();
	virtual $String* getNameString();
	::com::sun::org::apache::bcel::internal::classfile::ElementValue* getValue();
	virtual $String* toShortString();
	::com::sun::org::apache::bcel::internal::classfile::ElementValue* elementValue = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	int32_t elementNameIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ElementValuePair_h_
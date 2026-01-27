#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantObject_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantObject_h_
//$ interface com.sun.org.apache.bcel.internal.classfile.ConstantObject
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
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class ConstantObject : public ::java::lang::Object {
	$interface(ConstantObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getConstantValue(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) {return nullptr;}
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantObject_h_
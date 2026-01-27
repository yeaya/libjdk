#ifndef _com_sun_org_apache_bcel_internal_util_ConstantHTML_h_
#define _com_sun_org_apache_bcel_internal_util_ConstantHTML_h_
//$ class com.sun.org.apache.bcel.internal.util.ConstantHTML
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Constant;
							class ConstantPool;
							class Method;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ConstantHTML : public ::java::lang::Object {
	$class(ConstantHTML, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConstantHTML();
	void init$($String* dir, $String* class_name, $String* class_package, $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	int32_t getMethodNumber($String* str);
	$String* referenceConstant(int32_t index);
	void writeConstant(int32_t index);
	$String* className = nullptr;
	$String* classPackage = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	::java::io::PrintWriter* file = nullptr;
	$StringArray* constantRef = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* constants = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_ConstantHTML_h_
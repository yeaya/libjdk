#ifndef _com_sun_org_apache_bcel_internal_util_ClassStack_h_
#define _com_sun_org_apache_bcel_internal_util_ClassStack_h_
//$ class com.sun.org.apache.bcel.internal.util.ClassStack
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class JavaClass;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Stack;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ClassStack : public ::java::lang::Object {
	$class(ClassStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassStack();
	void init$();
	virtual bool empty();
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* pop();
	virtual void push(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* top();
	::java::util::Stack* stack = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_ClassStack_h_
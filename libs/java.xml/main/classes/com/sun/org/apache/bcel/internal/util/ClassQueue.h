#ifndef _com_sun_org_apache_bcel_internal_util_ClassQueue_h_
#define _com_sun_org_apache_bcel_internal_util_ClassQueue_h_
//$ class com.sun.org.apache.bcel.internal.util.ClassQueue
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
		class LinkedList;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ClassQueue : public ::java::lang::Object {
	$class(ClassQueue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassQueue();
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* dequeue();
	virtual bool empty();
	virtual void enqueue(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	virtual $String* toString() override;
	::java::util::LinkedList* vec = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_ClassQueue_h_
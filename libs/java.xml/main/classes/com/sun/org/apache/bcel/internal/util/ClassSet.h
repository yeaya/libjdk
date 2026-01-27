#ifndef _com_sun_org_apache_bcel_internal_util_ClassSet_h_
#define _com_sun_org_apache_bcel_internal_util_ClassSet_h_
//$ class com.sun.org.apache.bcel.internal.util.ClassSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ClassSet : public ::java::lang::Object {
	$class(ClassSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassSet();
	void init$();
	virtual bool add(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	virtual bool empty();
	virtual $StringArray* getClassNames();
	virtual void remove(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* toArray();
	::java::util::Map* map = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_ClassSet_h_
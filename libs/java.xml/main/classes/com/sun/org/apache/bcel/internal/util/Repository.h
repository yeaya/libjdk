#ifndef _com_sun_org_apache_bcel_internal_util_Repository_h_
#define _com_sun_org_apache_bcel_internal_util_Repository_h_
//$ interface com.sun.org.apache.bcel.internal.util.Repository
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class Repository : public ::java::lang::Object {
	$interface(Repository, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clear() {}
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* findClass($String* className) {return nullptr;}
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* loadClass($String* className) {return nullptr;}
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* loadClass($Class* clazz) {return nullptr;}
	virtual void removeClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz) {}
	virtual void storeClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz) {}
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_Repository_h_
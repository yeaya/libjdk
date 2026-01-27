#ifndef _com_sun_org_apache_bcel_internal_Repository_h_
#define _com_sun_org_apache_bcel_internal_Repository_h_
//$ class com.sun.org.apache.bcel.internal.Repository
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {
							class Repository;
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

class Repository : public ::java::lang::Object {
	$class(Repository, 0, ::java::lang::Object)
public:
	Repository();
	void init$();
	static ::com::sun::org::apache::bcel::internal::classfile::JavaClass* addClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	static void clearCache();
	static $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getInterfaces(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	static $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getInterfaces($String* class_name);
	static ::com::sun::org::apache::bcel::internal::util::Repository* getRepository();
	static $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getSuperClasses(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	static $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getSuperClasses($String* class_name);
	static bool implementationOf(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz, ::com::sun::org::apache::bcel::internal::classfile::JavaClass* inter);
	static bool implementationOf($String* clazz, $String* inter);
	static bool implementationOf(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz, $String* inter);
	static bool implementationOf($String* clazz, ::com::sun::org::apache::bcel::internal::classfile::JavaClass* inter);
	static bool instanceOf(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz, ::com::sun::org::apache::bcel::internal::classfile::JavaClass* super_class);
	static bool instanceOf($String* clazz, $String* super_class);
	static bool instanceOf(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz, $String* super_class);
	static bool instanceOf($String* clazz, ::com::sun::org::apache::bcel::internal::classfile::JavaClass* super_class);
	static ::com::sun::org::apache::bcel::internal::classfile::JavaClass* lookupClass($String* class_name);
	static ::com::sun::org::apache::bcel::internal::classfile::JavaClass* lookupClass($Class* clazz);
	static void removeClass($String* clazz);
	static void removeClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	static void setRepository(::com::sun::org::apache::bcel::internal::util::Repository* rep);
	static ::com::sun::org::apache::bcel::internal::util::Repository* repository;
};

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_Repository_h_
#ifndef _com_sun_org_apache_bcel_internal_util_SyntheticRepository_h_
#define _com_sun_org_apache_bcel_internal_util_SyntheticRepository_h_
//$ class com.sun.org.apache.bcel.internal.util.SyntheticRepository
//$ extends com.sun.org.apache.bcel.internal.util.Repository

#include <com/sun/org/apache/bcel/internal/util/Repository.h>

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
	namespace io {
		class InputStream;
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

class SyntheticRepository : public ::com::sun::org::apache::bcel::internal::util::Repository {
	$class(SyntheticRepository, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::util::Repository)
public:
	SyntheticRepository();
	void init$();
	virtual void clear() override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* findClass($String* className) override;
	static ::com::sun::org::apache::bcel::internal::util::SyntheticRepository* getInstance();
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* loadClass($String* className) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* loadClass($Class* clazz) override;
	::com::sun::org::apache::bcel::internal::classfile::JavaClass* loadClass(::java::io::InputStream* is, $String* className);
	virtual void removeClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz) override;
	virtual void storeClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz) override;
	::java::util::Map* loadedClasses = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_SyntheticRepository_h_
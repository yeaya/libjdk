#ifndef _javax_management_MBeanServerPermissionCollection_h_
#define _javax_management_MBeanServerPermissionCollection_h_
//$ class javax.management.MBeanServerPermissionCollection
//$ extends java.security.PermissionCollection

#include <java/security/PermissionCollection.h>

namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace management {
		class MBeanServerPermission;
	}
}

namespace javax {
	namespace management {

class MBeanServerPermissionCollection : public ::java::security::PermissionCollection {
	$class(MBeanServerPermissionCollection, $NO_CLASS_INIT, ::java::security::PermissionCollection)
public:
	MBeanServerPermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	::javax::management::MBeanServerPermission* collectionPermission = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xb16c9a6bd5fae3d2;
};

	} // management
} // javax

#endif // _javax_management_MBeanServerPermissionCollection_h_
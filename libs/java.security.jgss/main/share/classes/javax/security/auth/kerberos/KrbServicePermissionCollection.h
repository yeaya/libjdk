#ifndef _javax_security_auth_kerberos_KrbServicePermissionCollection_h_
#define _javax_security_auth_kerberos_KrbServicePermissionCollection_h_
//$ class javax.security.auth.kerberos.KrbServicePermissionCollection
//$ extends java.security.PermissionCollection

#include <java/lang/Array.h>
#include <java/security/PermissionCollection.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
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
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

class KrbServicePermissionCollection : public ::java::security::PermissionCollection {
	$class(KrbServicePermissionCollection, 0, ::java::security::PermissionCollection)
public:
	KrbServicePermissionCollection();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::concurrent::ConcurrentHashMap* perms = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xc6d6f61b6f680505;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

			} // kerberos
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_kerberos_KrbServicePermissionCollection_h_
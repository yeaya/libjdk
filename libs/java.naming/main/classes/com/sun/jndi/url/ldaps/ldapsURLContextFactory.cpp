#include <com/sun/jndi/url/ldaps/ldapsURLContextFactory.h>

#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>
#include <jcpp.h>

using $ldapURLContextFactory = ::com::sun::jndi::url::ldap::ldapURLContextFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace url {
				namespace ldaps {

$MethodInfo _ldapsURLContextFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ldapsURLContextFactory, init$, void)},
	{}
};

$ClassInfo _ldapsURLContextFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.url.ldaps.ldapsURLContextFactory",
	"com.sun.jndi.url.ldap.ldapURLContextFactory",
	nullptr,
	nullptr,
	_ldapsURLContextFactory_MethodInfo_
};

$Object* allocate$ldapsURLContextFactory($Class* clazz) {
	return $of($alloc(ldapsURLContextFactory));
}

void ldapsURLContextFactory::init$() {
	$ldapURLContextFactory::init$();
}

ldapsURLContextFactory::ldapsURLContextFactory() {
}

$Class* ldapsURLContextFactory::load$($String* name, bool initialize) {
	$loadClass(ldapsURLContextFactory, name, initialize, &_ldapsURLContextFactory_ClassInfo_, allocate$ldapsURLContextFactory);
	return class$;
}

$Class* ldapsURLContextFactory::class$ = nullptr;

				} // ldaps
			} // url
		} // jndi
	} // sun
} // com
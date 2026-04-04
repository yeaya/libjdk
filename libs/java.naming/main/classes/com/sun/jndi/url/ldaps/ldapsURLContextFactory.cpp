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

void ldapsURLContextFactory::init$() {
	$ldapURLContextFactory::init$();
}

ldapsURLContextFactory::ldapsURLContextFactory() {
}

$Class* ldapsURLContextFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ldapsURLContextFactory, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.jndi.url.ldaps.ldapsURLContextFactory",
		"com.sun.jndi.url.ldap.ldapURLContextFactory",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ldapsURLContextFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ldapsURLContextFactory);
	});
	return class$;
}

$Class* ldapsURLContextFactory::class$ = nullptr;

				} // ldaps
			} // url
		} // jndi
	} // sun
} // com
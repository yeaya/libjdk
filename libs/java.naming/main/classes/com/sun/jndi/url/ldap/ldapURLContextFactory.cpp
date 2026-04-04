#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapCtxFactory.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/url/ldap/ldapURLContext.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapCtxFactory = ::com::sun::jndi::ldap::LdapCtxFactory;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $ComponentDirContext = ::com::sun::jndi::toolkit::ctx::ComponentDirContext;
using $ldapURLContext = ::com::sun::jndi::url::ldap::ldapURLContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $DirContext = ::javax::naming::directory::DirContext;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace url {
				namespace ldap {

void ldapURLContextFactory::init$() {
}

$Object* ldapURLContextFactory::getObjectInstance(Object$* urlInfo, $Name* name, $Context* nameCtx, $Hashtable* env) {
	if (urlInfo == nullptr) {
		return $of($new($ldapURLContext, env));
	} else {
		return $LdapCtxFactory::getLdapCtxInstance(urlInfo, env);
	}
}

$ResolveResult* ldapURLContextFactory::getUsingURLIgnoreRootDN($String* url, $Hashtable* env) {
	$init(ldapURLContextFactory);
	$useLocalObjectStack();
	$var($LdapURL, ldapUrl, $new($LdapURL, url));
	$var($String, var$0, ""_s);
	$var($String, var$1, ldapUrl->getHost());
	int32_t var$2 = ldapUrl->getPort();
	$var($DirContext, ctx, $cast($ComponentDirContext, $new($LdapCtx, var$0, var$1, var$2, env, ldapUrl->useSsl())));
	$var($String, dn, ldapUrl->getDN() != nullptr ? ldapUrl->getDN() : ""_s);
	$var($CompositeName, remaining, $new($CompositeName));
	if (!""_s->equals(dn)) {
		remaining->add(dn);
	}
	return $new($ResolveResult, ctx, remaining);
}

ldapURLContextFactory::ldapURLContextFactory() {
}

$Class* ldapURLContextFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ldapURLContextFactory, init$, void)},
		{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC, $virtualMethod(ldapURLContextFactory, getObjectInstance, $Object*, Object$*, $Name*, $Context*, $Hashtable*), "java.lang.Exception"},
		{"getUsingURLIgnoreRootDN", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/ResolveResult;", $STATIC, $staticMethod(ldapURLContextFactory, getUsingURLIgnoreRootDN, $ResolveResult*, $String*, $Hashtable*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jndi.url.ldap.ldapURLContextFactory",
		"java.lang.Object",
		"javax.naming.spi.ObjectFactory",
		nullptr,
		methodInfos$$
	};
	$loadClass(ldapURLContextFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ldapURLContextFactory);
	});
	return class$;
}

$Class* ldapURLContextFactory::class$ = nullptr;

				} // ldap
			} // url
		} // jndi
	} // sun
} // com
#include <com/sun/jndi/ldap/LdapNameParser.h>
#include <javax/naming/Name.h>
#include <javax/naming/ldap/LdapName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $LdapName = ::javax::naming::ldap::LdapName;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void LdapNameParser::init$() {
}

$Name* LdapNameParser::parse($String* name) {
	return $new($LdapName, name);
}

LdapNameParser::LdapNameParser() {
}

$Class* LdapNameParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LdapNameParser, init$, void)},
		{"parse", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(LdapNameParser, parse, $Name*, $String*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.LdapNameParser",
		"java.lang.Object",
		"javax.naming.NameParser",
		nullptr,
		methodInfos$$
	};
	$loadClass(LdapNameParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapNameParser);
	});
	return class$;
}

$Class* LdapNameParser::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
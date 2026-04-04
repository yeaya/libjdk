#include <com/sun/jndi/ldap/LdapCtx$SearchArgs.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void LdapCtx$SearchArgs::init$($Name* name, $String* filter, $SearchControls* cons, $StringArray* ra) {
	$set(this, name, name);
	$set(this, filter, filter);
	$set(this, cons, cons);
	$set(this, reqAttrs, ra);
}

LdapCtx$SearchArgs::LdapCtx$SearchArgs() {
}

$Class* LdapCtx$SearchArgs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljavax/naming/Name;", nullptr, 0, $field(LdapCtx$SearchArgs, name)},
		{"filter", "Ljava/lang/String;", nullptr, 0, $field(LdapCtx$SearchArgs, filter)},
		{"cons", "Ljavax/naming/directory/SearchControls;", nullptr, 0, $field(LdapCtx$SearchArgs, cons)},
		{"reqAttrs", "[Ljava/lang/String;", nullptr, 0, $field(LdapCtx$SearchArgs, reqAttrs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;[Ljava/lang/String;)V", nullptr, 0, $method(LdapCtx$SearchArgs, init$, void, $Name*, $String*, $SearchControls*, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.LdapCtx$SearchArgs", "com.sun.jndi.ldap.LdapCtx", "SearchArgs", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.LdapCtx$SearchArgs",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.LdapCtx"
	};
	$loadClass(LdapCtx$SearchArgs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapCtx$SearchArgs);
	});
	return class$;
}

$Class* LdapCtx$SearchArgs::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
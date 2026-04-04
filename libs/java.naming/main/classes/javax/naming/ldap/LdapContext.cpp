#include <javax/naming/ldap/LdapContext.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <jcpp.h>

#undef CONTROL_FACTORIES

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExtendedRequest = ::javax::naming::ldap::ExtendedRequest;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;

namespace javax {
	namespace naming {
		namespace ldap {

$String* LdapContext::CONTROL_FACTORIES = nullptr;

void LdapContext::clinit$($Class* clazz) {
	$assignStatic(LdapContext::CONTROL_FACTORIES, "java.naming.factory.control"_s);
}

$Class* LdapContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONTROL_FACTORIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LdapContext, CONTROL_FACTORIES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"extendedOperation", "(Ljavax/naming/ldap/ExtendedRequest;)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, extendedOperation, $ExtendedResponse*, $ExtendedRequest*), "javax.naming.NamingException"},
		{"getConnectControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, getConnectControls, $ControlArray*), "javax.naming.NamingException"},
		{"getRequestControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, getRequestControls, $ControlArray*), "javax.naming.NamingException"},
		{"getResponseControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, getResponseControls, $ControlArray*), "javax.naming.NamingException"},
		{"newInstance", "([Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/LdapContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, newInstance, LdapContext*, $ControlArray*), "javax.naming.NamingException"},
		{"reconnect", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, reconnect, void, $ControlArray*), "javax.naming.NamingException"},
		{"setRequestControls", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LdapContext, setRequestControls, void, $ControlArray*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.ldap.LdapContext",
		nullptr,
		"javax.naming.directory.DirContext",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapContext, name, initialize, &classInfo$$, LdapContext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LdapContext);
	});
	return class$;
}

$Class* LdapContext::class$ = nullptr;

		} // ldap
	} // naming
} // javax
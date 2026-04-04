#include <javax/naming/ldap/HasControls.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$Class* HasControls::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HasControls, getControls, $ControlArray*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.ldap.HasControls",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HasControls, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HasControls);
	});
	return class$;
}

$Class* HasControls::class$ = nullptr;

		} // ldap
	} // naming
} // javax
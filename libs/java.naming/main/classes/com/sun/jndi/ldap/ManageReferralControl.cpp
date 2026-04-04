#include <com/sun/jndi/ldap/ManageReferralControl.h>
#include <com/sun/jndi/ldap/BasicControl.h>
#include <jcpp.h>

#undef OID

using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$String* ManageReferralControl::OID = nullptr;

void ManageReferralControl::init$() {
	$BasicControl::init$(ManageReferralControl::OID, true, nullptr);
}

void ManageReferralControl::init$(bool criticality) {
	$BasicControl::init$(ManageReferralControl::OID, criticality, nullptr);
}

ManageReferralControl::ManageReferralControl() {
}

void ManageReferralControl::clinit$($Class* clazz) {
	$assignStatic(ManageReferralControl::OID, "2.16.840.1.113730.3.4.2"_s);
}

$Class* ManageReferralControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManageReferralControl, OID)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManageReferralControl, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManageReferralControl, init$, void)},
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(ManageReferralControl, init$, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.ManageReferralControl",
		"com.sun.jndi.ldap.BasicControl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ManageReferralControl, name, initialize, &classInfo$$, ManageReferralControl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ManageReferralControl);
	});
	return class$;
}

$Class* ManageReferralControl::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
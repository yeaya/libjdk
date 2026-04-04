#include <javax/naming/ldap/LdapReferralException.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/ReferralException.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $ReferralException = ::javax::naming::ReferralException;

namespace javax {
	namespace naming {
		namespace ldap {

void LdapReferralException::init$($String* explanation) {
	$ReferralException::init$(explanation);
}

void LdapReferralException::init$() {
	$ReferralException::init$();
}

LdapReferralException::LdapReferralException() {
}

LdapReferralException::LdapReferralException(const LdapReferralException& e) : $ReferralException(e) {
}

void LdapReferralException::throw$() {
	throw *this;
}

$Class* LdapReferralException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapReferralException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getReferralContext", "()Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT},
		{"getReferralContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(LdapReferralException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PROTECTED, $method(LdapReferralException, init$, void)},
		{"getReferralContext", "(Ljava/util/Hashtable;[Ljavax/naming/ldap/Control;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;[Ljavax/naming/ldap/Control;)Ljavax/naming/Context;", $PUBLIC | $ABSTRACT, $virtualMethod(LdapReferralException, getReferralContext, $Context*, $Hashtable*, $ControlArray*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.naming.ldap.LdapReferralException",
		"javax.naming.ReferralException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapReferralException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapReferralException);
	});
	return class$;
}

$Class* LdapReferralException::class$ = nullptr;

		} // ldap
	} // naming
} // javax
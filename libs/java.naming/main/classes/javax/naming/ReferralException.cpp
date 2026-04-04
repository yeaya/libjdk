#include <javax/naming/ReferralException.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void ReferralException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ReferralException::init$() {
	$NamingException::init$();
}

ReferralException::ReferralException() {
}

ReferralException::ReferralException(const ReferralException& e) : $NamingException(e) {
}

void ReferralException::throw$() {
	throw *this;
}

$Class* ReferralException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferralException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ReferralException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PROTECTED, $method(ReferralException, init$, void)},
		{"getReferralContext", "()Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferralException, getReferralContext, $Context*), "javax.naming.NamingException"},
		{"getReferralContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC | $ABSTRACT, $virtualMethod(ReferralException, getReferralContext, $Context*, $Hashtable*), "javax.naming.NamingException"},
		{"getReferralInfo", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferralException, getReferralInfo, $Object*)},
		{"retryReferral", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferralException, retryReferral, void)},
		{"skipReferral", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferralException, skipReferral, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.naming.ReferralException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReferralException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferralException);
	});
	return class$;
}

$Class* ReferralException::class$ = nullptr;

	} // naming
} // javax
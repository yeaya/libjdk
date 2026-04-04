#include <javax/security/sasl/RealmCallback.h>
#include <javax/security/auth/callback/TextInputCallback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextInputCallback = ::javax::security::auth::callback::TextInputCallback;

namespace javax {
	namespace security {
		namespace sasl {

void RealmCallback::init$($String* prompt) {
	$TextInputCallback::init$(prompt);
}

void RealmCallback::init$($String* prompt, $String* defaultRealmInfo) {
	$TextInputCallback::init$(prompt, defaultRealmInfo);
}

RealmCallback::RealmCallback() {
}

$Class* RealmCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RealmCallback, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RealmCallback, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RealmCallback, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.sasl.RealmCallback",
		"javax.security.auth.callback.TextInputCallback",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RealmCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RealmCallback));
	});
	return class$;
}

$Class* RealmCallback::class$ = nullptr;

		} // sasl
	} // security
} // javax
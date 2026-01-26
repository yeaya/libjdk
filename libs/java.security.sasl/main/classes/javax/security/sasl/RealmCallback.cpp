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

$FieldInfo _RealmCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RealmCallback, serialVersionUID)},
	{}
};

$MethodInfo _RealmCallback_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RealmCallback, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RealmCallback, init$, void, $String*, $String*)},
	{}
};

$ClassInfo _RealmCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.sasl.RealmCallback",
	"javax.security.auth.callback.TextInputCallback",
	nullptr,
	_RealmCallback_FieldInfo_,
	_RealmCallback_MethodInfo_
};

$Object* allocate$RealmCallback($Class* clazz) {
	return $of($alloc(RealmCallback));
}

void RealmCallback::init$($String* prompt) {
	$TextInputCallback::init$(prompt);
}

void RealmCallback::init$($String* prompt, $String* defaultRealmInfo) {
	$TextInputCallback::init$(prompt, defaultRealmInfo);
}

RealmCallback::RealmCallback() {
}

$Class* RealmCallback::load$($String* name, bool initialize) {
	$loadClass(RealmCallback, name, initialize, &_RealmCallback_ClassInfo_, allocate$RealmCallback);
	return class$;
}

$Class* RealmCallback::class$ = nullptr;

		} // sasl
	} // security
} // javax
#include <com/sun/net/httpserver/HttpPrincipal.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Principal = ::java::security::Principal;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _HttpPrincipal_FieldInfo_[] = {
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpPrincipal, username)},
	{"realm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpPrincipal, realm)},
	{}
};

$MethodInfo _HttpPrincipal_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpPrincipal::*)($String*,$String*)>(&HttpPrincipal::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRealm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUsername", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpPrincipal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.HttpPrincipal",
	"java.lang.Object",
	"java.security.Principal",
	_HttpPrincipal_FieldInfo_,
	_HttpPrincipal_MethodInfo_
};

$Object* allocate$HttpPrincipal($Class* clazz) {
	return $of($alloc(HttpPrincipal));
}

void HttpPrincipal::init$($String* username, $String* realm) {
	if (username == nullptr || realm == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, username, username);
	$set(this, realm, realm);
}

bool HttpPrincipal::equals(Object$* another) {
	if (!($instanceOf(HttpPrincipal, another))) {
		return false;
	}
	$var(HttpPrincipal, theother, $cast(HttpPrincipal, another));
	bool var$0 = $nc(this->username)->equals($nc(theother)->username);
	return (var$0 && $nc(this->realm)->equals($nc(theother)->realm));
}

$String* HttpPrincipal::getName() {
	return $String::format("%s:%s"_s, $$new($ObjectArray, {
		$of(this->realm),
		$of(this->username)
	}));
}

$String* HttpPrincipal::getUsername() {
	return this->username;
}

$String* HttpPrincipal::getRealm() {
	return this->realm;
}

int32_t HttpPrincipal::hashCode() {
	return $nc(($$str({this->username, this->realm})))->hashCode();
}

$String* HttpPrincipal::toString() {
	return getName();
}

HttpPrincipal::HttpPrincipal() {
}

$Class* HttpPrincipal::load$($String* name, bool initialize) {
	$loadClass(HttpPrincipal, name, initialize, &_HttpPrincipal_ClassInfo_, allocate$HttpPrincipal);
	return class$;
}

$Class* HttpPrincipal::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com
#include <com/sun/net/httpserver/BasicAuthenticator.h>

#include <com/sun/net/httpserver/Authenticator$Failure.h>
#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator$Retry.h>
#include <com/sun/net/httpserver/Authenticator$Success.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef UTF_8

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $Authenticator$Failure = ::com::sun::net::httpserver::Authenticator$Failure;
using $Authenticator$Result = ::com::sun::net::httpserver::Authenticator$Result;
using $Authenticator$Retry = ::com::sun::net::httpserver::Authenticator$Retry;
using $Authenticator$Success = ::com::sun::net::httpserver::Authenticator$Success;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _BasicAuthenticator_FieldInfo_[] = {
	{"realm", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(BasicAuthenticator, realm)},
	{"charset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $FINAL, $field(BasicAuthenticator, charset)},
	{"isUTF8", "Z", nullptr, $PRIVATE | $FINAL, $field(BasicAuthenticator, isUTF8)},
	{}
};

$MethodInfo _BasicAuthenticator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAuthenticator::*)($String*)>(&BasicAuthenticator::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAuthenticator::*)($String*,$Charset*)>(&BasicAuthenticator::init$))},
	{"authenticate", "(Lcom/sun/net/httpserver/HttpExchange;)Lcom/sun/net/httpserver/Authenticator$Result;", nullptr, $PUBLIC},
	{"checkCredentials", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getRealm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAuthHeader", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicAuthenticator::*)($HttpExchange*)>(&BasicAuthenticator::setAuthHeader))},
	{}
};

$ClassInfo _BasicAuthenticator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.BasicAuthenticator",
	"com.sun.net.httpserver.Authenticator",
	nullptr,
	_BasicAuthenticator_FieldInfo_,
	_BasicAuthenticator_MethodInfo_
};

$Object* allocate$BasicAuthenticator($Class* clazz) {
	return $of($alloc(BasicAuthenticator));
}

void BasicAuthenticator::init$($String* realm) {
	BasicAuthenticator::init$(realm, $($Charset::defaultCharset()));
}

void BasicAuthenticator::init$($String* realm, $Charset* charset) {
	$Authenticator::init$();
	$Objects::requireNonNull(charset);
	if ($nc(realm)->isEmpty()) {
		$throwNew($IllegalArgumentException, "realm must not be empty"_s);
	}
	$set(this, realm, realm);
	$set(this, charset, charset);
	$init($StandardCharsets);
	this->isUTF8 = charset->equals($StandardCharsets::UTF_8);
}

$String* BasicAuthenticator::getRealm() {
	return this->realm;
}

$Authenticator$Result* BasicAuthenticator::authenticate($HttpExchange* t) {
	$useLocalCurrentObjectStackCache();
	$var($Headers, rmap, $nc(t)->getRequestHeaders());
	$var($String, auth, $nc(rmap)->getFirst("Authorization"_s));
	if (auth == nullptr) {
		setAuthHeader(t);
		return $new($Authenticator$Retry, 401);
	}
	int32_t sp = $nc(auth)->indexOf((int32_t)u' ');
	if (sp == -1 || !$(auth->substring(0, sp))->equals("Basic"_s)) {
		return $new($Authenticator$Failure, 401);
	}
	$var($bytes, b, $nc($($Base64::getDecoder()))->decode($(auth->substring(sp + 1))));
	$var($String, userpass, $new($String, b, this->charset));
	int32_t colon = userpass->indexOf((int32_t)u':');
	$var($String, uname, userpass->substring(0, colon));
	$var($String, pass, userpass->substring(colon + 1));
	if (checkCredentials(uname, pass)) {
		return $new($Authenticator$Success, $$new($HttpPrincipal, uname, this->realm));
	} else {
		setAuthHeader(t);
		return $new($Authenticator$Failure, 401);
	}
}

void BasicAuthenticator::setAuthHeader($HttpExchange* t) {
	$useLocalCurrentObjectStackCache();
	$var($Headers, map, $nc(t)->getResponseHeaders());
	$var($String, authString, $str({"Basic realm=\""_s, this->realm, "\""_s, (this->isUTF8 ? ", charset=\"UTF-8\""_s : ""_s)}));
	$nc(map)->set("WWW-Authenticate"_s, authString);
}

BasicAuthenticator::BasicAuthenticator() {
}

$Class* BasicAuthenticator::load$($String* name, bool initialize) {
	$loadClass(BasicAuthenticator, name, initialize, &_BasicAuthenticator_ClassInfo_, allocate$BasicAuthenticator);
	return class$;
}

$Class* BasicAuthenticator::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com
#include <sun/net/httpserver/AuthFilter.h>

#include <com/sun/net/httpserver/Authenticator$Failure.h>
#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator$Retry.h>
#include <com/sun/net/httpserver/Authenticator$Success.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/Filter$Chain.h>
#include <com/sun/net/httpserver/Filter.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <java/io/InputStream.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <jcpp.h>

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $Authenticator$Failure = ::com::sun::net::httpserver::Authenticator$Failure;
using $Authenticator$Result = ::com::sun::net::httpserver::Authenticator$Result;
using $Authenticator$Retry = ::com::sun::net::httpserver::Authenticator$Retry;
using $Authenticator$Success = ::com::sun::net::httpserver::Authenticator$Success;
using $Filter = ::com::sun::net::httpserver::Filter;
using $Filter$Chain = ::com::sun::net::httpserver::Filter$Chain;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _AuthFilter_FieldInfo_[] = {
	{"authenticator", "Lcom/sun/net/httpserver/Authenticator;", nullptr, $PRIVATE, $field(AuthFilter, authenticator)},
	{}
};

$MethodInfo _AuthFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/net/httpserver/Authenticator;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthFilter::*)($Authenticator*)>(&AuthFilter::init$))},
	{"consumeInput", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"doFilter", "(Lcom/sun/net/httpserver/HttpExchange;Lcom/sun/net/httpserver/Filter$Chain;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setAuthenticator", "(Lcom/sun/net/httpserver/Authenticator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.httpserver.AuthFilter",
	"com.sun.net.httpserver.Filter",
	nullptr,
	_AuthFilter_FieldInfo_,
	_AuthFilter_MethodInfo_
};

$Object* allocate$AuthFilter($Class* clazz) {
	return $of($alloc(AuthFilter));
}

void AuthFilter::init$($Authenticator* authenticator) {
	$Filter::init$();
	$set(this, authenticator, authenticator);
}

$String* AuthFilter::description() {
	return "Authentication filter"_s;
}

void AuthFilter::setAuthenticator($Authenticator* a) {
	$set(this, authenticator, a);
}

void AuthFilter::consumeInput($HttpExchange* t) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, i, $nc(t)->getRequestBody());
	$var($bytes, b, $new($bytes, 4096));
	while ($nc(i)->read(b) != -1) {
	}
	$nc(i)->close();
}

void AuthFilter::doFilter($HttpExchange* t, $Filter$Chain* chain) {
	$useLocalCurrentObjectStackCache();
	if (this->authenticator != nullptr) {
		$var($Authenticator$Result, r, $nc(this->authenticator)->authenticate(t));
		if ($instanceOf($Authenticator$Success, r)) {
			$var($Authenticator$Success, s, $cast($Authenticator$Success, r));
			$var($ExchangeImpl, e, $ExchangeImpl::get(t));
			$nc(e)->setPrincipal($($nc(s)->getPrincipal()));
			$nc(chain)->doFilter(t);
		} else if ($instanceOf($Authenticator$Retry, r)) {
			$var($Authenticator$Retry, ry, $cast($Authenticator$Retry, r));
			consumeInput(t);
			$nc(t)->sendResponseHeaders($nc(ry)->getResponseCode(), -1);
		} else if ($instanceOf($Authenticator$Failure, r)) {
			$var($Authenticator$Failure, f, $cast($Authenticator$Failure, r));
			consumeInput(t);
			$nc(t)->sendResponseHeaders($nc(f)->getResponseCode(), -1);
		}
	} else {
		$nc(chain)->doFilter(t);
	}
}

AuthFilter::AuthFilter() {
}

$Class* AuthFilter::load$($String* name, bool initialize) {
	$loadClass(AuthFilter, name, initialize, &_AuthFilter_ClassInfo_, allocate$AuthFilter);
	return class$;
}

$Class* AuthFilter::class$ = nullptr;

		} // httpserver
	} // net
} // sun
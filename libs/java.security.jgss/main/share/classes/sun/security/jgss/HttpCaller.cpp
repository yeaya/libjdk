#include <sun/security/jgss/HttpCaller.h>
#include <sun/net/www/protocol/http/HttpCallerInfo.h>
#include <sun/security/jgss/GSSCaller.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCallerInfo = ::sun::net::www::protocol::http::HttpCallerInfo;
using $GSSCaller = ::sun::security::jgss::GSSCaller;

namespace sun {
	namespace security {
		namespace jgss {

void HttpCaller::init$($HttpCallerInfo* hci) {
	$GSSCaller::init$("HTTP_CLIENT"_s);
	$set(this, hci, hci);
}

$HttpCallerInfo* HttpCaller::info() {
	return this->hci;
}

HttpCaller::HttpCaller() {
}

$Class* HttpCaller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hci", "Lsun/net/www/protocol/http/HttpCallerInfo;", nullptr, $PRIVATE | $FINAL, $field(HttpCaller, hci)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpCallerInfo;)V", nullptr, $PUBLIC, $method(HttpCaller, init$, void, $HttpCallerInfo*)},
		{"info", "()Lsun/net/www/protocol/http/HttpCallerInfo;", nullptr, $PUBLIC, $virtualMethod(HttpCaller, info, $HttpCallerInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.jgss.HttpCaller",
		"sun.security.jgss.GSSCaller",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpCaller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpCaller);
	});
	return class$;
}

$Class* HttpCaller::class$ = nullptr;

		} // jgss
	} // security
} // sun
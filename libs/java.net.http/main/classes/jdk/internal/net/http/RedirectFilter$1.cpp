#include <jdk/internal/net/http/RedirectFilter$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient.h>
#include <jdk/internal/net/http/RedirectFilter.h>
#include <jcpp.h>

#undef ALWAYS
#undef NEVER
#undef NORMAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$ints* RedirectFilter$1::$SwitchMap$java$net$http$HttpClient$Redirect = nullptr;

void RedirectFilter$1::clinit$($Class* clazz) {
	$assignStatic(RedirectFilter$1::$SwitchMap$java$net$http$HttpClient$Redirect, $new($ints, $($HttpClient$Redirect::values())->length));
	{
		try {
			RedirectFilter$1::$SwitchMap$java$net$http$HttpClient$Redirect->set($HttpClient$Redirect::ALWAYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RedirectFilter$1::$SwitchMap$java$net$http$HttpClient$Redirect->set($HttpClient$Redirect::NEVER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RedirectFilter$1::$SwitchMap$java$net$http$HttpClient$Redirect->set($HttpClient$Redirect::NORMAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

RedirectFilter$1::RedirectFilter$1() {
}

$Class* RedirectFilter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$net$http$HttpClient$Redirect", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RedirectFilter$1, $SwitchMap$java$net$http$HttpClient$Redirect)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.RedirectFilter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RedirectFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.RedirectFilter$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RedirectFilter"
	};
	$loadClass(RedirectFilter$1, name, initialize, &classInfo$$, RedirectFilter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RedirectFilter$1);
	});
	return class$;
}

$Class* RedirectFilter$1::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
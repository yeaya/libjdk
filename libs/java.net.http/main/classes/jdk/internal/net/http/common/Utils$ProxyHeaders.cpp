#include <jdk/internal/net/http/common/Utils$ProxyHeaders.h>
#include <java/lang/Record.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <java/net/http/HttpHeaders.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Record = ::java::lang::Record;
using $HttpHeaders = ::java::net::http::HttpHeaders;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void Utils$ProxyHeaders::init$($HttpHeaders* userHeaders, $HttpHeaders* systemHeaders) {
	$Record::init$();
	$set(this, userHeaders$, userHeaders);
	$set(this, systemHeaders$, systemHeaders);
}

$HttpHeaders* Utils$ProxyHeaders::userHeaders() {
	return this->userHeaders$;
}

$HttpHeaders* Utils$ProxyHeaders::systemHeaders() {
	return this->systemHeaders$;
}

$String* Utils$ProxyHeaders::toString() {
	return Utils$ProxyHeaders::class$->bootstrapToString(this);
}

int32_t Utils$ProxyHeaders::hashCode() {
	return Utils$ProxyHeaders::class$->bootstrapHashCode(this);
}

bool Utils$ProxyHeaders::equals(Object$* o) {
	return Utils$ProxyHeaders::class$->bootstrapEquals(this, o);
}

Utils$ProxyHeaders::Utils$ProxyHeaders() {
}

$Class* Utils$ProxyHeaders::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"userHeaders", "Ljava/net/http/HttpHeaders;", nullptr, $PRIVATE | $FINAL, $field(Utils$ProxyHeaders, userHeaders$)},
		{"systemHeaders", "Ljava/net/http/HttpHeaders;", nullptr, $PRIVATE | $FINAL, $field(Utils$ProxyHeaders, systemHeaders$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpHeaders;Ljava/net/http/HttpHeaders;)V", nullptr, $PUBLIC, $method(Utils$ProxyHeaders, init$, void, $HttpHeaders*, $HttpHeaders*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Utils$ProxyHeaders, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Utils$ProxyHeaders, hashCode, int32_t)},
		{"systemHeaders", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $method(Utils$ProxyHeaders, systemHeaders, $HttpHeaders*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Utils$ProxyHeaders, toString, $String*)},
		{"userHeaders", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $method(Utils$ProxyHeaders, userHeaders, $HttpHeaders*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.Utils$ProxyHeaders", "jdk.internal.net.http.common.Utils", "ProxyHeaders", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.Utils$ProxyHeaders",
		"java.lang.Record",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.Utils"
	};
	$loadClass(Utils$ProxyHeaders, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Utils$ProxyHeaders);
	});
	return class$;
}

$Class* Utils$ProxyHeaders::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk
#include <java/net/http/HttpClient$Version.h>
#include <java/lang/Enum.h>
#include <java/net/http/HttpClient.h>
#include <jcpp.h>

#undef HTTP_1_1
#undef HTTP_2

using $HttpClient$VersionArray = $Array<::java::net::http::HttpClient$Version>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {
		namespace http {

HttpClient$Version* HttpClient$Version::HTTP_1_1 = nullptr;
HttpClient$Version* HttpClient$Version::HTTP_2 = nullptr;
$HttpClient$VersionArray* HttpClient$Version::$VALUES = nullptr;

$HttpClient$VersionArray* HttpClient$Version::$values() {
	$init(HttpClient$Version);
	return $new($HttpClient$VersionArray, {
		HttpClient$Version::HTTP_1_1,
		HttpClient$Version::HTTP_2
	});
}

$HttpClient$VersionArray* HttpClient$Version::values() {
	$init(HttpClient$Version);
	return $cast($HttpClient$VersionArray, HttpClient$Version::$VALUES->clone());
}

HttpClient$Version* HttpClient$Version::valueOf($String* name) {
	$init(HttpClient$Version);
	return $cast(HttpClient$Version, $Enum::valueOf(HttpClient$Version::class$, name));
}

void HttpClient$Version::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void HttpClient$Version::clinit$($Class* clazz) {
	$assignStatic(HttpClient$Version::HTTP_1_1, $new(HttpClient$Version, "HTTP_1_1"_s, 0));
	$assignStatic(HttpClient$Version::HTTP_2, $new(HttpClient$Version, "HTTP_2"_s, 1));
	$assignStatic(HttpClient$Version::$VALUES, HttpClient$Version::$values());
}

HttpClient$Version::HttpClient$Version() {
}

$Class* HttpClient$Version::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HTTP_1_1", "Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpClient$Version, HTTP_1_1)},
		{"HTTP_2", "Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpClient$Version, HTTP_2)},
		{"$VALUES", "[Ljava/net/http/HttpClient$Version;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpClient$Version, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/net/http/HttpClient$Version;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpClient$Version, $values, $HttpClient$VersionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(HttpClient$Version, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpClient$Version, valueOf, HttpClient$Version*, $String*)},
		{"values", "()[Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpClient$Version, values, $HttpClient$VersionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpClient$Version", "java.net.http.HttpClient", "Version", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.net.http.HttpClient$Version",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/net/http/HttpClient$Version;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.HttpClient"
	};
	$loadClass(HttpClient$Version, name, initialize, &classInfo$$, HttpClient$Version::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(HttpClient$Version));
	});
	return class$;
}

$Class* HttpClient$Version::class$ = nullptr;

		} // http
	} // net
} // java
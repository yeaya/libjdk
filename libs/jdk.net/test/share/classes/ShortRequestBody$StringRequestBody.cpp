#include <ShortRequestBody$StringRequestBody.h>
#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef UTF_8

using $ShortRequestBody$AbstractDelegateRequestBody = ::ShortRequestBody$AbstractDelegateRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

void ShortRequestBody$StringRequestBody::init$($String* body, int32_t additionalLength) {
	$useLocalObjectStack();
	$var($HttpRequest$BodyPublisher, var$0, $HttpRequest$BodyPublishers::ofString(body));
	$init($StandardCharsets);
	$ShortRequestBody$AbstractDelegateRequestBody::init$(var$0, $($nc(body)->getBytes($StandardCharsets::UTF_8))->length + additionalLength);
}

ShortRequestBody$StringRequestBody::ShortRequestBody$StringRequestBody() {
}

$Class* ShortRequestBody$StringRequestBody::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(ShortRequestBody$StringRequestBody, init$, void, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortRequestBody$StringRequestBody", "ShortRequestBody", "StringRequestBody", $STATIC},
		{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShortRequestBody$StringRequestBody",
		"ShortRequestBody$AbstractDelegateRequestBody",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ShortRequestBody"
	};
	$loadClass(ShortRequestBody$StringRequestBody, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody$StringRequestBody);
	});
	return class$;
}

$Class* ShortRequestBody$StringRequestBody::class$ = nullptr;
#include <ShortRequestBody$ByteArrayRequestBody.h>
#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <jcpp.h>

using $ShortRequestBody$AbstractDelegateRequestBody = ::ShortRequestBody$AbstractDelegateRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;

void ShortRequestBody$ByteArrayRequestBody::init$($bytes* body, int32_t additionalLength) {
	$ShortRequestBody$AbstractDelegateRequestBody::init$($($HttpRequest$BodyPublishers::ofByteArray(body)), $nc(body)->length + additionalLength);
}

ShortRequestBody$ByteArrayRequestBody::ShortRequestBody$ByteArrayRequestBody() {
}

$Class* ShortRequestBody$ByteArrayRequestBody::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BI)V", nullptr, 0, $method(ShortRequestBody$ByteArrayRequestBody, init$, void, $bytes*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortRequestBody$ByteArrayRequestBody", "ShortRequestBody", "ByteArrayRequestBody", $STATIC},
		{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShortRequestBody$ByteArrayRequestBody",
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
	$loadClass(ShortRequestBody$ByteArrayRequestBody, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody$ByteArrayRequestBody);
	});
	return class$;
}

$Class* ShortRequestBody$ByteArrayRequestBody::class$ = nullptr;
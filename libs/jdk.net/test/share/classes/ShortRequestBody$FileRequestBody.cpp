#include <ShortRequestBody$FileRequestBody.h>
#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ShortRequestBody$AbstractDelegateRequestBody = ::ShortRequestBody$AbstractDelegateRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

void ShortRequestBody$FileRequestBody::init$($Path* path, int32_t additionalLength) {
	$var($HttpRequest$BodyPublisher, var$0, $HttpRequest$BodyPublishers::ofFile(path));
	$ShortRequestBody$AbstractDelegateRequestBody::init$(var$0, $Files::size(path) + additionalLength);
}

ShortRequestBody$FileRequestBody::ShortRequestBody$FileRequestBody() {
}

$Class* ShortRequestBody$FileRequestBody::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;I)V", nullptr, 0, $method(ShortRequestBody$FileRequestBody, init$, void, $Path*, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortRequestBody$FileRequestBody", "ShortRequestBody", "FileRequestBody", $STATIC},
		{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShortRequestBody$FileRequestBody",
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
	$loadClass(ShortRequestBody$FileRequestBody, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody$FileRequestBody);
	});
	return class$;
}

$Class* ShortRequestBody$FileRequestBody::class$ = nullptr;
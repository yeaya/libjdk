#include <MultiAuthTest$HttpRequestBuilderFactory.h>
#include <MultiAuthTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;

$HttpRequest$Builder* MultiAuthTest$HttpRequestBuilderFactory::request($URI* uri) {
	return $cast($HttpRequest$Builder, this->apply(uri));
}

$Class* MultiAuthTest$HttpRequestBuilderFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"request", "(Ljava/net/URI;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC, $virtualMethod(MultiAuthTest$HttpRequestBuilderFactory, request, $HttpRequest$Builder*, $URI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiAuthTest$HttpRequestBuilderFactory", "MultiAuthTest", "HttpRequestBuilderFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.net.http.HttpRequest$Builder", "java.net.http.HttpRequest", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MultiAuthTest$HttpRequestBuilderFactory",
		nullptr,
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/net/URI;Ljava/net/http/HttpRequest$Builder;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiAuthTest"
	};
	$loadClass(MultiAuthTest$HttpRequestBuilderFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiAuthTest$HttpRequestBuilderFactory);
	});
	return class$;
}

$Class* MultiAuthTest$HttpRequestBuilderFactory::class$ = nullptr;
#include <MethodsTest$1.h>
#include <MethodsTest.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef TEST_URI

using $MethodsTest = ::MethodsTest;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

class MethodsTest$1$$Lambda$lambda$headers$0 : public $BiPredicate {
	$class(MethodsTest$1$$Lambda$lambda$headers$0, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x, Object$* y) override {
		return MethodsTest$1::lambda$headers$0($cast($String, x), $cast($String, y));
	}
};
$Class* MethodsTest$1$$Lambda$lambda$headers$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodsTest$1$$Lambda$lambda$headers$0, init$, void)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodsTest$1$$Lambda$lambda$headers$0, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MethodsTest$1$$Lambda$lambda$headers$0",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(MethodsTest$1$$Lambda$lambda$headers$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodsTest$1$$Lambda$lambda$headers$0);
	});
	return class$;
}
$Class* MethodsTest$1$$Lambda$lambda$headers$0::class$ = nullptr;

void MethodsTest$1::init$($String* val$name) {
	$set(this, val$name, val$name);
	$HttpRequest::init$();
}

$Optional* MethodsTest$1::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* MethodsTest$1::method() {
	return this->val$name;
}

$Optional* MethodsTest$1::timeout() {
	return $Optional::empty();
}

bool MethodsTest$1::expectContinue() {
	return false;
}

$URI* MethodsTest$1::uri() {
	$init($MethodsTest);
	return $MethodsTest::TEST_URI;
}

$Optional* MethodsTest$1::version() {
	return $Optional::empty();
}

$HttpHeaders* MethodsTest$1::headers() {
	$useLocalObjectStack();
	$var($Map, var$0, $Map::of());
	return $HttpHeaders::of(var$0, $$new(MethodsTest$1$$Lambda$lambda$headers$0));
}

bool MethodsTest$1::lambda$headers$0($String* x, $String* y) {
	$init(MethodsTest$1);
	return true;
}

MethodsTest$1::MethodsTest$1() {
}

$Class* MethodsTest$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MethodsTest$1$$Lambda$lambda$headers$0")) {
			return MethodsTest$1$$Lambda$lambda$headers$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(MethodsTest$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(MethodsTest$1, init$, void, $String*)},
		{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC, $virtualMethod(MethodsTest$1, bodyPublisher, $Optional*)},
		{"expectContinue", "()Z", nullptr, $PUBLIC, $virtualMethod(MethodsTest$1, expectContinue, bool)},
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(MethodsTest$1, headers, $HttpHeaders*)},
		{"lambda$headers$0", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MethodsTest$1, lambda$headers$0, bool, $String*, $String*)},
		{"method", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodsTest$1, method, $String*)},
		{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC, $virtualMethod(MethodsTest$1, timeout, $Optional*)},
		{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(MethodsTest$1, uri, $URI*)},
		{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC, $virtualMethod(MethodsTest$1, version, $Optional*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"MethodsTest",
		"bad",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MethodsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MethodsTest$1",
		"java.net.http.HttpRequest",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MethodsTest"
	};
	$loadClass(MethodsTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodsTest$1);
	});
	return class$;
}

$Class* MethodsTest$1::class$ = nullptr;
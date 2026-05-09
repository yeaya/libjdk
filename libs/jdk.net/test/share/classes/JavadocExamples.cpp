#include <JavadocExamples.h>
#include <JavadocExamples$Foo.h>
#include <JavadocExamples$FromMappingSubscriber.h>
#include <JavadocExamples$LineParserSubscriber.h>
#include <JavadocExamples$PrintSubscriber.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/Authenticator.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$BodySubscribers.h>
#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/time/Duration.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef HTTP_1_1
#undef NORMAL
#undef UTF_8

using $JavadocExamples$Foo = ::JavadocExamples$Foo;
using $JavadocExamples$FromMappingSubscriber = ::JavadocExamples$FromMappingSubscriber;
using $JavadocExamples$LineParserSubscriber = ::JavadocExamples$LineParserSubscriber;
using $JavadocExamples$PrintSubscriber = ::JavadocExamples$PrintSubscriber;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Authenticator = ::java::net::Authenticator;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$BodySubscribers = ::java::net::http::HttpResponse$BodySubscribers;
using $HttpResponse$ResponseInfo = ::java::net::http::HttpResponse$ResponseInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Paths = ::java::nio::file::Paths;
using $Duration = ::java::time::Duration;
using $List = ::java::util::List;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Pattern = ::java::util::regex::Pattern;

class JavadocExamples$$Lambda$body : public $Function {
	$class(JavadocExamples$$Lambda$body, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($HttpResponse, inst$)->body();
	}
};
$Class* JavadocExamples$$Lambda$body::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$body, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$body, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$body",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$body, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$body);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$body::class$ = nullptr;

class JavadocExamples$$Lambda$println$1 : public $Consumer {
	$class(JavadocExamples$$Lambda$println$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println($cast($String, arg0));
	}
	$PrintStream* inst$ = nullptr;
};
$Class* JavadocExamples$$Lambda$println$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocExamples$$Lambda$println$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$println$1, init$, void, $PrintStream*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$println$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$println$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$println$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$println$1);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$println$1::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2 : public $BiPredicate {
	$class(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n, Object$* v) override {
		return JavadocExamples::lambda$fromHttpRequest$0($cast($String, n), $cast($String, v));
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2, init$, void)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3 : public $BiPredicate {
	$class(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n, Object$* v) override {
		return JavadocExamples::lambda$fromHttpRequest$1($cast($String, n), $cast($String, v));
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3, init$, void)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4 : public $BiPredicate {
	$class(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* name, Object$* value) override {
		return JavadocExamples::lambda$fromHttpRequest$2($cast($String, name), $cast($String, value));
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4, init$, void)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::class$ = nullptr;

class JavadocExamples$$Lambda$println$5 : public $Consumer {
	$class(JavadocExamples$$Lambda$println$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println(arg0);
	}
	$PrintStream* inst$ = nullptr;
};
$Class* JavadocExamples$$Lambda$println$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocExamples$$Lambda$println$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$println$5, init$, void, $PrintStream*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$println$5, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$println$5",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$println$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$println$5);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$println$5::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* info) override {
		return JavadocExamples::lambda$fromHttpResponse$3(info);
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return JavadocExamples::lambda$fromHttpResponse$4(responseInfo);
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return JavadocExamples::lambda$fromHttpResponse$5(responseInfo);
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return JavadocExamples::lambda$fromHttpResponse$6(responseInfo);
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return JavadocExamples::lambda$fromHttpResponse$7(responseInfo);
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* resp) override {
		return JavadocExamples::lambda$fromHttpResponse$8(resp);
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::class$ = nullptr;

class JavadocExamples$$Lambda$statusCode$12 : public $Function {
	$class(JavadocExamples$$Lambda$statusCode$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($HttpResponse, inst$)->statusCode());
	}
};
$Class* JavadocExamples$$Lambda$statusCode$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$statusCode$12, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$statusCode$12, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$statusCode$12",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$statusCode$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$statusCode$12);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$statusCode$12::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13 : public $Consumer {
	$class(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* status) override {
		JavadocExamples::lambda$fromLineSubscriber1$9($cast($Integer, status));
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14 : public $Function {
	$class(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		return JavadocExamples::lambda$fromLineSubscriber2$10($cast($JavadocExamples$LineParserSubscriber, s));
	}
};
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::class$ = nullptr;

class JavadocExamples$$Lambda$getBytes$15 : public $Function {
	$class(JavadocExamples$$Lambda$getBytes$15, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($String, inst$)->getBytes();
	}
};
$Class* JavadocExamples$$Lambda$getBytes$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples$$Lambda$getBytes$15, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$$Lambda$getBytes$15, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JavadocExamples$$Lambda$getBytes$15",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocExamples$$Lambda$getBytes$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$$Lambda$getBytes$15);
	});
	return class$;
}
$Class* JavadocExamples$$Lambda$getBytes$15::class$ = nullptr;

void JavadocExamples::init$() {
	$set(this, request, nullptr);
	$set(this, client, nullptr);
	$set(this, p, nullptr);
}

void JavadocExamples::fromHttpClientClasslevelDescription() {
	$useLocalObjectStack();
	$init($HttpClient$Version);
	$init($HttpClient$Redirect);
	$var($HttpClient, client, $$nc($$nc($$nc($$nc($$nc($$nc($HttpClient::newBuilder())->version($HttpClient$Version::HTTP_1_1))->followRedirects($HttpClient$Redirect::NORMAL))->connectTimeout($($Duration::ofSeconds(20))))->proxy($($ProxySelector::of($$new($InetSocketAddress, "proxy.example.com"_s, 80)))))->authenticator($($Authenticator::getDefault())))->build());
	$var($HttpResponse, response, $nc(client)->send(this->request, $($HttpResponse$BodyHandlers::ofString())));
	$nc($System::out)->println($nc(response)->statusCode());
	$System::out->println($$cast($String, response->body()));
	$var($HttpRequest, request, $$nc($$nc($$nc($$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("https://foo.com/"_s))))->timeout($($Duration::ofMinutes(2))))->header("Content-Type"_s, "application/json"_s))->POST($($HttpRequest$BodyPublishers::ofFile($($Paths::get("file.json"_s, $$new($StringArray, 0)))))))->build());
	$$sure($CompletableFuture, $$nc(client->sendAsync(request, $($HttpResponse$BodyHandlers::ofString())))->thenApply($$new(JavadocExamples$$Lambda$body)))->thenAccept($$new(JavadocExamples$$Lambda$println$1, $System::out));
}

void JavadocExamples::fromHttpRequest() {
	$useLocalObjectStack();
	$var($HttpClient, client, $HttpClient::newHttpClient());
	$var($HttpRequest, request, $$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("http://foo.com/"_s))))->build());
	$$sure($CompletableFuture, $$sure($CompletableFuture, $$nc($nc(client)->sendAsync(request, $($HttpResponse$BodyHandlers::ofString())))->thenApply($$new(JavadocExamples$$Lambda$body)))->thenAccept($$new(JavadocExamples$$Lambda$println$1, $nc($System::out))))->join();
	$var($HttpRequest, request1, $$nc($$nc($$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("https://foo.com/"_s))))->header("Content-Type"_s, "text/plain; charset=UTF-8"_s))->POST($($HttpRequest$BodyPublishers::ofString("some body text"_s))))->build());
	$var($HttpRequest, request2, $$nc($$nc($$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("https://foo.com/"_s))))->header("Content-Type"_s, "application/json"_s))->POST($($HttpRequest$BodyPublishers::ofFile($($Paths::get("file.json"_s, $$new($StringArray, 0)))))))->build());
	$var($HttpRequest, request3, $$nc($$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("https://foo.com/"_s))))->POST($($HttpRequest$BodyPublishers::ofByteArray($$new($bytes, 0)))))->build());
	$HttpRequest::newBuilder(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2));
	$HttpRequest::newBuilder(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3));
	$HttpRequest::newBuilder(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4));
}

void JavadocExamples::fromHttpResponse() {
	$useLocalObjectStack();
	$var($HttpResponse, response, $nc(this->client)->send(this->request, $($HttpResponse$BodyHandlers::ofString())));
	$var($HttpRequest, request, $$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("http://www.foo.com/"_s))))->build());
	$$sure($CompletableFuture, $$nc($nc(this->client)->sendAsync(request, $($HttpResponse$BodyHandlers::ofFile($($Paths::get("/tmp/f"_s, $$new($StringArray, 0)))))))->thenApply($$new(JavadocExamples$$Lambda$body)))->thenAccept($$new(JavadocExamples$$Lambda$println$5, $nc($System::out)));
	$var($HttpRequest, request1, $$nc($$nc($HttpRequest::newBuilder())->uri($($URI::create("http://www.foo.com/"_s))))->build());
	$var($HttpResponse$BodyHandler, bodyHandler, $new(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6));
	$$sure($CompletableFuture, $$nc($nc(this->client)->sendAsync(request, bodyHandler))->thenApply($$new(JavadocExamples$$Lambda$body)))->thenAccept($$new(JavadocExamples$$Lambda$println$5, $System::out));
	$var($HttpResponse, response1, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::ofString())));
	$var($HttpResponse, response2, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::ofFile($($Paths::get("example.html"_s, $$new($StringArray, 0)))))));
	$var($HttpResponse, respons3, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::ofInputStream())));
	$var($HttpResponse, respons4, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::discarding())));
	$var($HttpResponse, response5, $nc(this->client)->send(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7)));
	$var($HttpResponse, response6, $nc(this->client)->send(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8)));
	$var($HttpResponse, response7, $nc(this->client)->send(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9)));
	$var($HttpResponse, response8, $nc(this->client)->send(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10)));
	$var($HttpResponse, response9, $nc(this->client)->send(request, $$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11)));
	$var($String, resp, $$sure($JavadocExamples$Foo, $$sure($Supplier, $nc(response9)->body())->get())->asString());
}

void JavadocExamples::fromLineSubscriber1() {
	$useLocalObjectStack();
	$var($JavadocExamples$PrintSubscriber, subscriber, $new($JavadocExamples$PrintSubscriber, $System::out));
	$$sure($CompletableFuture, $$nc($nc(this->client)->sendAsync(this->request, $($HttpResponse$BodyHandlers::fromLineSubscriber(subscriber))))->thenApply($$new(JavadocExamples$$Lambda$statusCode$12)))->thenAccept($$new(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13));
}

void JavadocExamples::fromLineSubscriber2() {
	$useLocalObjectStack();
	$var($Pattern, pattern, this->p);
	$var($JavadocExamples$LineParserSubscriber, subscriber, $new($JavadocExamples$LineParserSubscriber, pattern));
	$var($HttpResponse, response, $nc(this->client)->send(this->request, $($HttpResponse$BodyHandlers::fromLineSubscriber(subscriber, $$new(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14), "\n"_s))));
	if ($nc(response)->statusCode() != 200) {
		$nc($System::err)->printf("ERROR: %d status received%n"_s, $$new($ObjectArray, {$($Integer::valueOf(response->statusCode()))}));
	}
}

$List* JavadocExamples::lambda$fromLineSubscriber2$10($JavadocExamples$LineParserSubscriber* s) {
	return $nc(s)->getMatchingLines();
}

void JavadocExamples::lambda$fromLineSubscriber1$9($Integer* status) {
	if ($nc(status)->intValue() != 200) {
		$nc($System::err)->printf("ERROR: %d status received%n"_s, $$new($ObjectArray, {status}));
	}
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$8($HttpResponse$ResponseInfo* resp) {
	$load($JavadocExamples$Foo);
	return $JavadocExamples$FromMappingSubscriber::asJSON($JavadocExamples$Foo::class$);
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$7($HttpResponse$ResponseInfo* responseInfo) {
	$useLocalObjectStack();
	$init($StandardCharsets);
	$var($HttpResponse$BodySubscriber, var$0, $HttpResponse$BodySubscribers::ofString($StandardCharsets::UTF_8));
	return $HttpResponse$BodySubscribers::mapping(var$0, $$new(JavadocExamples$$Lambda$getBytes$15));
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$6($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::discarding();
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$5($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofByteArray();
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$4($HttpResponse$ResponseInfo* responseInfo) {
	$useLocalObjectStack();
	return $HttpResponse$BodySubscribers::ofFile($($Paths::get("example.html"_s, $$new($StringArray, 0))));
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$3($HttpResponse$ResponseInfo* info) {
	$useLocalObjectStack();
	return $nc(info)->statusCode() == 200 ? $HttpResponse$BodySubscribers::ofFile($($Paths::get("/tmp/f"_s, $$new($StringArray, 0)))) : $HttpResponse$BodySubscribers::replacing($($Paths::get("/NULL"_s, $$new($StringArray, 0))));
}

bool JavadocExamples::lambda$fromHttpRequest$2($String* name, $String* value) {
	return !$nc(name)->equalsIgnoreCase("Foo-Bar"_s);
}

bool JavadocExamples::lambda$fromHttpRequest$1($String* n, $String* v) {
	return false;
}

bool JavadocExamples::lambda$fromHttpRequest$0($String* n, $String* v) {
	return true;
}

JavadocExamples::JavadocExamples() {
}

$Class* JavadocExamples::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JavadocExamples$$Lambda$body")) {
			return JavadocExamples$$Lambda$body::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$println$1")) {
			return JavadocExamples$$Lambda$println$1::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2")) {
			return JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3")) {
			return JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4")) {
			return JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$println$5")) {
			return JavadocExamples$$Lambda$println$5::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6")) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7")) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8")) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9")) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10")) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11")) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$statusCode$12")) {
			return JavadocExamples$$Lambda$statusCode$12::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13")) {
			return JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14")) {
			return JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::load$(name, initialize);
		}
		if (name->equals("JavadocExamples$$Lambda$getBytes$15")) {
			return JavadocExamples$$Lambda$getBytes$15::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"request", "Ljava/net/http/HttpRequest;", nullptr, 0, $field(JavadocExamples, request)},
		{"client", "Ljava/net/http/HttpClient;", nullptr, 0, $field(JavadocExamples, client)},
		{"p", "Ljava/util/regex/Pattern;", nullptr, 0, $field(JavadocExamples, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocExamples, init$, void)},
		{"fromHttpClientClasslevelDescription", "()V", nullptr, 0, $virtualMethod(JavadocExamples, fromHttpClientClasslevelDescription, void), "java.lang.Exception"},
		{"fromHttpRequest", "()V", nullptr, 0, $virtualMethod(JavadocExamples, fromHttpRequest, void), "java.lang.Exception"},
		{"fromHttpResponse", "()V", nullptr, 0, $virtualMethod(JavadocExamples, fromHttpResponse, void), "java.lang.Exception"},
		{"fromLineSubscriber1", "()V", nullptr, 0, $virtualMethod(JavadocExamples, fromLineSubscriber1, void)},
		{"fromLineSubscriber2", "()V", nullptr, 0, $virtualMethod(JavadocExamples, fromLineSubscriber2, void), "java.io.IOException,java.lang.InterruptedException"},
		{"lambda$fromHttpRequest$0", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpRequest$0, bool, $String*, $String*)},
		{"lambda$fromHttpRequest$1", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpRequest$1, bool, $String*, $String*)},
		{"lambda$fromHttpRequest$2", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpRequest$2, bool, $String*, $String*)},
		{"lambda$fromHttpResponse$3", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpResponse$3, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromHttpResponse$4", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpResponse$4, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromHttpResponse$5", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpResponse$5, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromHttpResponse$6", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpResponse$6, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromHttpResponse$7", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpResponse$7, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromHttpResponse$8", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromHttpResponse$8, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromLineSubscriber1$9", "(Ljava/lang/Integer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromLineSubscriber1$9, void, $Integer*)},
		{"lambda$fromLineSubscriber2$10", "(LJavadocExamples$LineParserSubscriber;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocExamples, lambda$fromLineSubscriber2$10, $List*, $JavadocExamples$LineParserSubscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JavadocExamples$FromMappingSubscriber", "JavadocExamples", "FromMappingSubscriber", $STATIC},
		{"JavadocExamples$ObjectMapper", "JavadocExamples", "ObjectMapper", $STATIC},
		{"JavadocExamples$Foo", "JavadocExamples", "Foo", $PUBLIC | $STATIC},
		{"JavadocExamples$LineParserSubscriber", "JavadocExamples", "LineParserSubscriber", $STATIC | $FINAL},
		{"JavadocExamples$PrintSubscriber", "JavadocExamples", "PrintSubscriber", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JavadocExamples",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JavadocExamples$FromMappingSubscriber,JavadocExamples$ObjectMapper,JavadocExamples$Foo,JavadocExamples$LineParserSubscriber,JavadocExamples$PrintSubscriber"
	};
	$loadClass(JavadocExamples, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples);
	});
	return class$;
}

$Class* JavadocExamples::class$ = nullptr;
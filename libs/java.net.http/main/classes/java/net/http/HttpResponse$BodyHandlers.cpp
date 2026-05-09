#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$BodySubscribers.h>
#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/ResponseBodyHandlers$FileDownloadBodyHandler.h>
#include <jdk/internal/net/http/ResponseBodyHandlers$PathBodyHandler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef CREATE
#undef DELETE_ON_CLOSE
#undef READ
#undef WRITE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$BodySubscribers = ::java::net::http::HttpResponse$BodySubscribers;
using $HttpResponse$ResponseInfo = ::java::net::http::HttpResponse$ResponseInfo;
using $Charset = ::java::nio::charset::Charset;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $ResponseBodyHandlers$FileDownloadBodyHandler = ::jdk::internal::net::http::ResponseBodyHandlers$FileDownloadBodyHandler;
using $ResponseBodyHandlers$PathBodyHandler = ::jdk::internal::net::http::ResponseBodyHandlers$PathBodyHandler;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace java {
	namespace net {
		namespace http {

class HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($Flow$Subscriber* subscriber) {
		$set(this, subscriber, subscriber);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$fromSubscriber$1(subscriber, responseInfo);
	}
	$Flow$Subscriber* subscriber = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1, subscriber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1, init$, void, $Flow$Subscriber*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($Flow$Subscriber* subscriber, $Function* finisher) {
		$set(this, subscriber, subscriber);
		$set(this, finisher, finisher);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$fromSubscriber$2(subscriber, finisher, responseInfo);
	}
	$Flow$Subscriber* subscriber = nullptr;
	$Function* finisher = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, subscriber)},
		{"finisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, finisher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, init$, void, $Flow$Subscriber*, $Function*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($Flow$Subscriber* subscriber) {
		$set(this, subscriber, subscriber);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$fromLineSubscriber$4(subscriber, responseInfo);
	}
	$Flow$Subscriber* subscriber = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2, subscriber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2, init$, void, $Flow$Subscriber*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($Flow$Subscriber* subscriber, $Function* finisher, $String* lineSeparator) {
		$set(this, subscriber, subscriber);
		$set(this, finisher, finisher);
		$set(this, lineSeparator, lineSeparator);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$fromLineSubscriber$5(subscriber, finisher, lineSeparator, responseInfo);
	}
	$Flow$Subscriber* subscriber = nullptr;
	$Function* finisher = nullptr;
	$String* lineSeparator = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, subscriber)},
		{"finisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, finisher)},
		{"lineSeparator", "Ljava/lang/String;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, lineSeparator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, init$, void, $Flow$Subscriber*, $Function*, $String*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$discarding$6(responseInfo);
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$(Object$* value) {
		$set(this, value, value);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$replacing$7(value, responseInfo);
	}
	$Object* value = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5, init$, void, Object$*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($Charset* charset) {
		$set(this, charset, charset);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofString$8(charset, responseInfo);
	}
	$Charset* charset = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"charset", "Ljava/nio/charset/Charset;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6, charset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6, init$, void, $Charset*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofInputStream$9(responseInfo);
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofLines$10(responseInfo);
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($Consumer* consumer) {
		$set(this, consumer, consumer);
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofByteArrayConsumer$11(consumer, responseInfo);
	}
	$Consumer* consumer = nullptr;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"consumer", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9, consumer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9, init$, void, $Consumer*)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofByteArray$12(responseInfo);
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofString$13(responseInfo);
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$ofPublisher$14(responseInfo);
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12, init$, void)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13 : public $HttpResponse$BodyHandler {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$($HttpResponse$BodyHandler* downstreamHandler, int32_t bufferSize) {
		$set(this, downstreamHandler, downstreamHandler);
		this->bufferSize = bufferSize;
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		return HttpResponse$BodyHandlers::lambda$buffering$15(downstreamHandler, bufferSize, responseInfo);
	}
	$HttpResponse$BodyHandler* downstreamHandler = nullptr;
	int32_t bufferSize = 0;
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamHandler", "Ljava/net/http/HttpResponse$BodyHandler;", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, downstreamHandler)},
		{"bufferSize", "I", nullptr, $PUBLIC, $field(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, bufferSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpResponse$BodyHandler;I)V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, init$, void, $HttpResponse$BodyHandler*, int32_t)},
		{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, apply, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodyHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13::class$ = nullptr;

class HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14 : public $Function {
	$class(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		return HttpResponse$BodyHandlers::lambda$fromSubscriber$0($cast($Flow$Subscriber, s));
	}
};
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14);
	});
	return class$;
}
$Class* HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14::class$ = nullptr;

void HttpResponse$BodyHandlers::init$() {
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::fromSubscriber($Flow$Subscriber* subscriber) {
	$Objects::requireNonNull(subscriber);
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1, subscriber);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::fromSubscriber($Flow$Subscriber* subscriber, $Function* finisher) {
	$Objects::requireNonNull(subscriber);
	$Objects::requireNonNull(finisher);
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1, subscriber, finisher);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::fromLineSubscriber($Flow$Subscriber* subscriber) {
	$Objects::requireNonNull(subscriber);
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2, subscriber);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::fromLineSubscriber($Flow$Subscriber* subscriber, $Function* finisher, $String* lineSeparator) {
	$Objects::requireNonNull(subscriber);
	$Objects::requireNonNull(finisher);
	if (lineSeparator != nullptr && lineSeparator->isEmpty()) {
		$throwNew($IllegalArgumentException, "empty line separator"_s);
	}
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3, subscriber, finisher, lineSeparator);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::discarding() {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::replacing(Object$* value) {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5, value);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofString($Charset* charset) {
	$Objects::requireNonNull(charset);
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6, charset);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofFile($Path* file, $OpenOptionArray* openOptions) {
	$useLocalObjectStack();
	$Objects::requireNonNull(file);
	$var($List, opts, $List::of(openOptions));
	$init($StandardOpenOption);
	bool var$0 = $nc(opts)->contains($StandardOpenOption::DELETE_ON_CLOSE);
	if (var$0 || opts->contains($StandardOpenOption::READ)) {
		$throwNew($IllegalArgumentException, $$str({"invalid openOptions: "_s, opts}));
	}
	return $ResponseBodyHandlers$PathBodyHandler::create(file, opts);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofFile($Path* file) {
	$init($StandardOpenOption);
	return HttpResponse$BodyHandlers::ofFile(file, $$new($OpenOptionArray, {
		$StandardOpenOption::CREATE,
		$StandardOpenOption::WRITE
	}));
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofFileDownload($Path* directory, $OpenOptionArray* openOptions) {
	$useLocalObjectStack();
	$Objects::requireNonNull(directory);
	$var($List, opts, $List::of(openOptions));
	$init($StandardOpenOption);
	if ($nc(opts)->contains($StandardOpenOption::DELETE_ON_CLOSE)) {
		$throwNew($IllegalArgumentException, $$str({"invalid option: "_s, $StandardOpenOption::DELETE_ON_CLOSE}));
	}
	return $ResponseBodyHandlers$FileDownloadBodyHandler::create(directory, opts);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofInputStream() {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofLines() {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofByteArrayConsumer($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9, consumer);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofByteArray() {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofString() {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::ofPublisher() {
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12);
}

$HttpResponse$BodyHandler* HttpResponse$BodyHandlers::buffering($HttpResponse$BodyHandler* downstreamHandler, int32_t bufferSize) {
	$Objects::requireNonNull(downstreamHandler);
	if (bufferSize <= 0) {
		$throwNew($IllegalArgumentException, "must be greater than 0"_s);
	}
	return $new(HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13, downstreamHandler, bufferSize);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$buffering$15($HttpResponse$BodyHandler* downstreamHandler, int32_t bufferSize, $HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::buffering($($nc(downstreamHandler)->apply(responseInfo)), bufferSize);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofPublisher$14($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofPublisher();
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofString$13($HttpResponse$ResponseInfo* responseInfo) {
	$useLocalObjectStack();
	return $HttpResponse$BodySubscribers::ofString($($Utils::charsetFrom($($nc(responseInfo)->headers()))));
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofByteArray$12($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofByteArray();
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofByteArrayConsumer$11($Consumer* consumer, $HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofByteArrayConsumer(consumer);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofLines$10($HttpResponse$ResponseInfo* responseInfo) {
	$useLocalObjectStack();
	return $HttpResponse$BodySubscribers::ofLines($($Utils::charsetFrom($($nc(responseInfo)->headers()))));
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofInputStream$9($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofInputStream();
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$ofString$8($Charset* charset, $HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofString(charset);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$replacing$7(Object$* value, $HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::replacing(value);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$discarding$6($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::discarding();
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$fromLineSubscriber$5($Flow$Subscriber* subscriber, $Function* finisher, $String* lineSeparator, $HttpResponse$ResponseInfo* responseInfo) {
	$useLocalObjectStack();
	return $HttpResponse$BodySubscribers::fromLineSubscriber(subscriber, finisher, $($Utils::charsetFrom($($nc(responseInfo)->headers()))), lineSeparator);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$fromLineSubscriber$4($Flow$Subscriber* subscriber, $HttpResponse$ResponseInfo* responseInfo) {
	$useLocalObjectStack();
	$var($Function, var$0, $new(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14));
	return $HttpResponse$BodySubscribers::fromLineSubscriber(subscriber, var$0, $($Utils::charsetFrom($($nc(responseInfo)->headers()))), nullptr);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$fromSubscriber$2($Flow$Subscriber* subscriber, $Function* finisher, $HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::fromSubscriber(subscriber, finisher);
}

$HttpResponse$BodySubscriber* HttpResponse$BodyHandlers::lambda$fromSubscriber$1($Flow$Subscriber* subscriber, $HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::fromSubscriber(subscriber, $$new(HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14));
}

$Void* HttpResponse$BodyHandlers::lambda$fromSubscriber$0($Flow$Subscriber* s) {
	return nullptr;
}

HttpResponse$BodyHandlers::HttpResponse$BodyHandlers() {
}

$Class* HttpResponse$BodyHandlers::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$1::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$2$1::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$4$2::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$fromLineSubscriber$5$3::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$discarding$6$4::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$replacing$7$5::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofString$8$6::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofInputStream$9$7::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofLines$10$8::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArrayConsumer$11$9::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofByteArray$12$10::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofString$13$11::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$ofPublisher$14$12::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$buffering$15$13::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14")) {
			return HttpResponse$BodyHandlers$$Lambda$lambda$fromSubscriber$0$14::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HttpResponse$BodyHandlers, init$, void)},
		{"buffering", "(Ljava/net/http/HttpResponse$BodyHandler;I)Ljava/net/http/HttpResponse$BodyHandler;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpResponse$BodyHandler<TT;>;I)Ljava/net/http/HttpResponse$BodyHandler<TT;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, buffering, $HttpResponse$BodyHandler*, $HttpResponse$BodyHandler*, int32_t)},
		{"discarding", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<Ljava/lang/Void;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, discarding, $HttpResponse$BodyHandler*)},
		{"fromLineSubscriber", "(Ljava/util/concurrent/Flow$Subscriber;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/lang/String;>;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/lang/Void;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, fromLineSubscriber, $HttpResponse$BodyHandler*, $Flow$Subscriber*)},
		{"fromLineSubscriber", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;Ljava/lang/String;)Ljava/net/http/HttpResponse$BodyHandler;", "<S::Ljava/util/concurrent/Flow$Subscriber<-Ljava/lang/String;>;T:Ljava/lang/Object;>(TS;Ljava/util/function/Function<-TS;+TT;>;Ljava/lang/String;)Ljava/net/http/HttpResponse$BodyHandler<TT;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, fromLineSubscriber, $HttpResponse$BodyHandler*, $Flow$Subscriber*, $Function*, $String*)},
		{"fromSubscriber", "(Ljava/util/concurrent/Flow$Subscriber;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/lang/Void;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, fromSubscriber, $HttpResponse$BodyHandler*, $Flow$Subscriber*)},
		{"fromSubscriber", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;)Ljava/net/http/HttpResponse$BodyHandler;", "<S::Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;T:Ljava/lang/Object;>(TS;Ljava/util/function/Function<-TS;+TT;>;)Ljava/net/http/HttpResponse$BodyHandler<TT;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, fromSubscriber, $HttpResponse$BodyHandler*, $Flow$Subscriber*, $Function*)},
		{"lambda$buffering$15", "(Ljava/net/http/HttpResponse$BodyHandler;ILjava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$buffering$15, $HttpResponse$BodySubscriber*, $HttpResponse$BodyHandler*, int32_t, $HttpResponse$ResponseInfo*)},
		{"lambda$discarding$6", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$discarding$6, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromLineSubscriber$4", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$fromLineSubscriber$4, $HttpResponse$BodySubscriber*, $Flow$Subscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromLineSubscriber$5", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;Ljava/lang/String;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$fromLineSubscriber$5, $HttpResponse$BodySubscriber*, $Flow$Subscriber*, $Function*, $String*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromSubscriber$0", "(Ljava/util/concurrent/Flow$Subscriber;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$fromSubscriber$0, $Void*, $Flow$Subscriber*)},
		{"lambda$fromSubscriber$1", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$fromSubscriber$1, $HttpResponse$BodySubscriber*, $Flow$Subscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$fromSubscriber$2", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$fromSubscriber$2, $HttpResponse$BodySubscriber*, $Flow$Subscriber*, $Function*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofByteArray$12", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofByteArray$12, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofByteArrayConsumer$11", "(Ljava/util/function/Consumer;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofByteArrayConsumer$11, $HttpResponse$BodySubscriber*, $Consumer*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofInputStream$9", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofInputStream$9, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofLines$10", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofLines$10, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofPublisher$14", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofPublisher$14, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofString$13", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofString$13, $HttpResponse$BodySubscriber*, $HttpResponse$ResponseInfo*)},
		{"lambda$ofString$8", "(Ljava/nio/charset/Charset;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$ofString$8, $HttpResponse$BodySubscriber*, $Charset*, $HttpResponse$ResponseInfo*)},
		{"lambda$replacing$7", "(Ljava/lang/Object;Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpResponse$BodyHandlers, lambda$replacing$7, $HttpResponse$BodySubscriber*, Object$*, $HttpResponse$ResponseInfo*)},
		{"ofByteArray", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<[B>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofByteArray, $HttpResponse$BodyHandler*)},
		{"ofByteArrayConsumer", "(Ljava/util/function/Consumer;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/util/function/Consumer<Ljava/util/Optional<[B>;>;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/lang/Void;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofByteArrayConsumer, $HttpResponse$BodyHandler*, $Consumer*)},
		{"ofFile", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(HttpResponse$BodyHandlers, ofFile, $HttpResponse$BodyHandler*, $Path*, $OpenOptionArray*)},
		{"ofFile", "(Ljava/nio/file/Path;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/nio/file/Path;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofFile, $HttpResponse$BodyHandler*, $Path*)},
		{"ofFileDownload", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(HttpResponse$BodyHandlers, ofFileDownload, $HttpResponse$BodyHandler*, $Path*, $OpenOptionArray*)},
		{"ofInputStream", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<Ljava/io/InputStream;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofInputStream, $HttpResponse$BodyHandler*)},
		{"ofLines", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<Ljava/util/stream/Stream<Ljava/lang/String;>;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofLines, $HttpResponse$BodyHandler*)},
		{"ofPublisher", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofPublisher, $HttpResponse$BodyHandler*)},
		{"ofString", "(Ljava/nio/charset/Charset;)Ljava/net/http/HttpResponse$BodyHandler;", "(Ljava/nio/charset/Charset;)Ljava/net/http/HttpResponse$BodyHandler<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofString, $HttpResponse$BodyHandler*, $Charset*)},
		{"ofString", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, ofString, $HttpResponse$BodyHandler*)},
		{"replacing", "(Ljava/lang/Object;)Ljava/net/http/HttpResponse$BodyHandler;", "<U:Ljava/lang/Object;>(TU;)Ljava/net/http/HttpResponse$BodyHandler<TU;>;", $PUBLIC | $STATIC, $staticMethod(HttpResponse$BodyHandlers, replacing, $HttpResponse$BodyHandler*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpResponse$BodyHandlers", "java.net.http.HttpResponse", "BodyHandlers", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.http.HttpResponse$BodyHandlers",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.HttpResponse"
	};
	$loadClass(HttpResponse$BodyHandlers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpResponse$BodyHandlers);
	});
	return class$;
}

$Class* HttpResponse$BodyHandlers::class$ = nullptr;

		} // http
	} // net
} // java
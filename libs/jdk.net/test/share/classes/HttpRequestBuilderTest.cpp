#include <HttpRequestBuilderTest.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/time/Duration.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef TEST_URI

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $Duration = ::java::time::Duration;
using $Arrays = ::java::util::Arrays;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class HttpRequestBuilderTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$0();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$0::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$1();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$2();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$3();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$3$3);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$3$3::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$4();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$4$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$4$4);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$4$4::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$5$5 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$5();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$5$5, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$5$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$5$5",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$5$5);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$5$5::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$6$6 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$6$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$6();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$6$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$6$6, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$6$6",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$6$6);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$6$6::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$uri$7 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$uri$7, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->uri($cast($URI, arg0));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$uri$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$uri$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$uri$7, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$uri$7, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$uri$7",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$uri$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$uri$7);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$uri$7::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$header$8 : public $BiFunction {
	$class(HttpRequestBuilderTest$$Lambda$header$8, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0, Object$* arg1) override {
		 return $nc(inst$)->header($cast($String, arg0), $cast($String, arg1));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$header$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$header$8, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$header$8, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$header$8, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$header$8",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$header$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$header$8);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$header$8::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$headers$9 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$headers$9, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->headers($cast($StringArray, arg0));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$headers$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$headers$9, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$headers$9, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$headers$9, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$headers$9",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$headers$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$headers$9);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$headers$9::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$7$10 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$7$10, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$7();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$7$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$7$10, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$7$10, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$7$10",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$7$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$7$10);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$7$10::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$POST$11 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$POST$11, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->POST($cast($HttpRequest$BodyPublisher, arg0));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$POST$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$POST$11, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$POST$11, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$POST$11, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$POST$11",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$POST$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$POST$11);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$POST$11::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$PUT$12 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$PUT$12, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->PUT($cast($HttpRequest$BodyPublisher, arg0));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$PUT$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$PUT$12, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$PUT$12, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$PUT$12, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$PUT$12",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$PUT$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$PUT$12);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$PUT$12::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$method$13 : public $BiFunction {
	$class(HttpRequestBuilderTest$$Lambda$method$13, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0, Object$* arg1) override {
		 return $nc(inst$)->method($cast($String, arg0), $cast($HttpRequest$BodyPublisher, arg1));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$method$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$method$13, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$method$13, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$method$13, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$method$13",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$method$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$method$13);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$method$13::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$setHeader$14 : public $BiFunction {
	$class(HttpRequestBuilderTest$$Lambda$setHeader$14, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0, Object$* arg1) override {
		 return $nc(inst$)->setHeader($cast($String, arg0), $cast($String, arg1));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$setHeader$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$setHeader$14, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$setHeader$14, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$setHeader$14, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$setHeader$14",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$setHeader$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$setHeader$14);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$setHeader$14::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$timeout$15 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$timeout$15, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->timeout($cast($Duration, arg0));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$timeout$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$timeout$15, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$timeout$15, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$timeout$15, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$timeout$15",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$timeout$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$timeout$15);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$timeout$15::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$version$16 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$version$16, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->version($cast($HttpClient$Version, arg0));
	}
	$HttpRequest$Builder* inst$ = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$version$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$version$16, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$version$16, init$, void, $HttpRequest$Builder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$version$16, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$version$16",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$version$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$version$16);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$version$16::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$8$17 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$8$17, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$8();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$8$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$8$17, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$8$17, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$8$17",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$8$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$8$17);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$8$17::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$9$18 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$9$18, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$9();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$9$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$9$18, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$9$18, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$9$18",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$9$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$9$18);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$9$18::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$10$19 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$10$19, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$10();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$10$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$10$19, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$10$19, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$10$19",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$10$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$10$19);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$10$19::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$11$20 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$11$20, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$11();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$11$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$11$20, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$11$20, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$11$20",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$11$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$11$20);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$11$20::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$12$21 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$12$21, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$12();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$12$21::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$12$21, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$12$21, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$12$21",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$12$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$12$21);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$12$21::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$13$22 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$13$22, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$13();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$13$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$13$22, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$13$22, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$13$22",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$13$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$13$22);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$13$22::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$14$23 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$14$23, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$14();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$14$23::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$14$23, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$14$23, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$14$23",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$14$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$14$23);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$14$23::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$15$24 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$15$24, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$15();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$15$24::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$15$24, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$15$24, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$15$24",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$15$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$15$24);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$15$24::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$16$25 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$16$25, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$16();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$16$25::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$16$25, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$16$25, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$16$25",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$16$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$16$25);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$16$25::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$17$26 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$17$26, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$17();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$17$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$17$26, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$17$26, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$17$26",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$17$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$17$26);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$17$26::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$18$27 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$18$27, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return HttpRequestBuilderTest::lambda$main$18();
	}
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$18$27::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$main$18$27, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$main$18$27, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$main$18$27",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$18$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$main$18$27);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$18$27::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$getSimpleName$28 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$getSimpleName$28, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Class, inst$)->getSimpleName());
	}
};
$Class* HttpRequestBuilderTest$$Lambda$getSimpleName$28::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$getSimpleName$28, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$getSimpleName$28, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$getSimpleName$28",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$getSimpleName$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$getSimpleName$28);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$getSimpleName$28::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29 : public $Predicate {
	$class(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Exception* x) {
		$set(this, x, x);
	}
	virtual bool test(Object$* c) override {
		 return HttpRequestBuilderTest::lambda$isExpected$19(x, $cast($Class, c));
	}
	$Exception* x = nullptr;
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, init$, void, $Exception*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29);
	});
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::class$ = nullptr;

$URI* HttpRequestBuilderTest::TEST_URI = nullptr;

void HttpRequestBuilderTest::init$() {
}

void HttpRequestBuilderTest::main($StringArray* args) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	$load($IllegalStateException);
	test0("newBuilder().build()"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$0), $$new($ClassArray, {$IllegalStateException::class$}));
	test0("newBuilder(null)"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$1$1), $$new($ClassArray, {$NullPointerException::class$}));
	$load($IllegalArgumentException);
	test0("newBuilder(URI.create(\"badScheme://www.foo.com/\")"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$2$2), $$new($ClassArray, {$IllegalArgumentException::class$}));
	test0("newBuilder(URI.create(\"http://www.foo.com:-1/\")"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$3$3), $$new($ClassArray, {$IllegalArgumentException::class$}));
	test0("newBuilder(URI.create(\"https://www.foo.com:-1/\")"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$4$4), $$new($ClassArray, {$IllegalArgumentException::class$}));
	$var($String, var$0, $str({"newBuilder("_s, HttpRequestBuilderTest::TEST_URI, ").uri(null)"_s}));
	test0(var$0, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$5$5), $$new($ClassArray, {$NullPointerException::class$}));
	test0("newBuilder(uri).build()"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$6$6), $$new($ClassArray, 0));
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder());
	$assign(builder, $cast($HttpRequest$Builder, test1("uri"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$uri$7, $nc(builder)), ($URI*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$var($String, var$1, "uri"_s);
	$var($Function, var$2, $new(HttpRequestBuilderTest$$Lambda$uri$7, $nc(builder)));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$1, builder, var$2, $($URI::create("http://www.foo.com:-1/"_s)), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$var($String, var$3, "uri"_s);
	$var($Function, var$4, $new(HttpRequestBuilderTest$$Lambda$uri$7, $nc(builder)));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$3, builder, var$4, $($URI::create("https://www.foo.com:-1/"_s)), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$header$8, $nc(builder)), ($String*)nullptr, "bar"_s, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$header$8, $nc(builder)), "foo"_s, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$header$8, $nc(builder)), ($String*)nullptr, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$header$8, $nc(builder)), ""_s, "bar"_s, $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$header$8, $nc(builder)), "foo"_s, "\r"_s, $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), ($StringArray*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, 0), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		nullptr,
		"bar"_s
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		nullptr,
		nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		nullptr
	}), $$new($ClassArray, {
		$NullPointerException::class$,
		$IllegalArgumentException::class$
	}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		nullptr,
		nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s,
		nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"\r"_s,
		"baz"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s,
		"\n"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		""_s,
		"baz"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		nullptr,
		"baz"_s
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$headers$9, $nc(builder)), $$new($StringArray, {"foo"_s}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	test0("DELETE"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$7$10), nullptr);
	$var($String, var$5, "POST"_s);
	$var($Function, var$6, $new(HttpRequestBuilderTest$$Lambda$POST$11, $nc(builder)));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$5, builder, var$6, $($HttpRequest$BodyPublishers::noBody()), nullptr)));
	$var($String, var$7, "PUT"_s);
	$var($Function, var$8, $new(HttpRequestBuilderTest$$Lambda$PUT$12, $nc(builder)));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$7, builder, var$8, $($HttpRequest$BodyPublishers::noBody()), nullptr)));
	$var($String, var$9, "method"_s);
	$var($BiFunction, var$10, $new(HttpRequestBuilderTest$$Lambda$method$13, $nc(builder)));
	$var($Object, var$11, "GET"_s);
	$assign(builder, $cast($HttpRequest$Builder, test2(var$9, builder, var$10, var$11, $($HttpRequest$BodyPublishers::noBody()), nullptr)));
	$assign(builder, $cast($HttpRequest$Builder, test1("POST"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$POST$11, $nc(builder)), ($HttpRequest$BodyPublisher*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("PUT"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$PUT$12, $nc(builder)), ($HttpRequest$BodyPublisher*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("method"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$method$13, $nc(builder)), "GET"_s, ($HttpRequest$BodyPublisher*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("setHeader"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$setHeader$14, $nc(builder)), ($String*)nullptr, "bar"_s, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("setHeader"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$setHeader$14, $nc(builder)), "foo"_s, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("setHeader"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$setHeader$14, $nc(builder)), ($String*)nullptr, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("timeout"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$timeout$15, $nc(builder)), ($Duration*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("version"_s, builder, $$new(HttpRequestBuilderTest$$Lambda$version$16, $nc(builder)), ($HttpClient$Version*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$var($String, var$12, "method"_s);
	$var($BiFunction, var$13, $new(HttpRequestBuilderTest$$Lambda$method$13, $nc(builder)));
	$assign(builder, $cast($HttpRequest$Builder, test2(var$12, builder, var$13, nullptr, $($HttpRequest$BodyPublishers::ofString("foo"_s)), $$new($ClassArray, {$NullPointerException::class$}))));
	method("newBuilder(TEST_URI).build().method() == GET"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$8$17), "GET"_s);
	method("newBuilder(TEST_URI).GET().build().method() == GET"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$9$18), "GET"_s);
	method("newBuilder(TEST_URI).POST(ofString(\"\")).GET().build().method() == GET"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$10$19), "GET"_s);
	method("newBuilder(TEST_URI).PUT(ofString(\"\")).GET().build().method() == GET"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$11$20), "GET"_s);
	method("newBuilder(TEST_URI).DELETE().GET().build().method() == GET"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$12$21), "GET"_s);
	method("newBuilder(TEST_URI).POST(ofString(\"\")).build().method() == POST"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$13$22), "POST"_s);
	method("newBuilder(TEST_URI).PUT(ofString(\"\")).build().method() == PUT"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$14$23), "PUT"_s);
	method("newBuilder(TEST_URI).DELETE().build().method() == DELETE"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$15$24), "DELETE"_s);
	method("newBuilder(TEST_URI).GET().POST(ofString(\"\")).build().method() == POST"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$16$25), "POST"_s);
	method("newBuilder(TEST_URI).GET().PUT(ofString(\"\")).build().method() == PUT"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$17$26), "PUT"_s);
	method("newBuilder(TEST_URI).GET().DELETE().build().method() == DELETE"_s, $$new(HttpRequestBuilderTest$$Lambda$lambda$main$18$27), "DELETE"_s);
}

bool HttpRequestBuilderTest::shouldFail($ClassArray* exceptions) {
	$init(HttpRequestBuilderTest);
	return exceptions != nullptr && exceptions->length > 0;
}

$String* HttpRequestBuilderTest::expectedNames($ClassArray* exceptions) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $cast($String, $$nc($$nc($Stream::of(exceptions))->map($$new(HttpRequestBuilderTest$$Lambda$getSimpleName$28)))->collect($($Collectors::joining("|"_s))));
}

bool HttpRequestBuilderTest::isExpected($Exception* x, $ClassArray* expected) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return expected != nullptr && $$nc($$nc($$nc($Stream::of(expected))->filter($$new(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, x)))->findAny())->isPresent();
}

void HttpRequestBuilderTest::method($String* name, $Supplier* supplier, $String* expectedMethod) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	$var($HttpRequest, request, $$sure($HttpRequest$Builder, $nc(supplier)->get())->build());
	$var($String, method, $nc(request)->method());
	bool var$0 = $$nc(request->method())->equals("GET"_s);
	if (var$0 && $$nc(request->bodyPublisher())->isPresent()) {
		$throwNew($AssertionError, $$of($str({"failed: "_s, name, ". Unexpected body processor for GET: "_s, $($$nc(request->bodyPublisher())->get())})));
	}
	if ($nc(expectedMethod)->equals(method)) {
		$nc($System::out)->println($$str({"success: "_s, name}));
	} else {
		$throwNew($AssertionError, $$of($str({"failed: "_s, name, ". Expected "_s, expectedMethod, ", got "_s, method})));
	}
}

void HttpRequestBuilderTest::test0($String* name, $Runnable* r, $ClassArray* ex) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	try {
		$nc(r)->run();
		if (!shouldFail(ex)) {
			$nc($System::out)->println($$str({"success: "_s, name}));
			return;
		} else {
			$throwNew($AssertionError, $$of($str({"Expected "_s, $(expectedNames(ex)), " not raised for "_s, name})));
		}
	} catch ($Exception& x) {
		if (!isExpected(x, ex)) {
			$throw(x);
		} else {
			$nc($System::out)->println($$str({"success: "_s, name, " - Got expected exception: "_s, x}));
		}
	}
}

$Object* HttpRequestBuilderTest::test1($String* name, Object$* receiver, $Function* m, Object$* arg, $ClassArray* ex) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	$var($String, argMessage, arg == nullptr ? "null"_s : $of(arg)->toString());
	if ($instanceOf($StringArray, arg)) {
		$assign(argMessage, $$nc($Arrays::asList($cast($StringArray, arg)))->toString());
	}
	try {
		$var($Object, result, $nc(m)->apply(arg));
		if (!shouldFail(ex)) {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, argMessage, ")"_s}));
			return result;
		} else {
			$throwNew($AssertionError, $$of($str({"Expected "_s, $(expectedNames(ex)), " not raised for "_s, name, "("_s, argMessage, ")"_s})));
		}
	} catch ($Exception& x) {
		if (!isExpected(x, ex)) {
			$throw(x);
		} else {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, argMessage, ") - Got expected exception: "_s, x}));
			return $of(receiver);
		}
	}
	$shouldNotReachHere();
}

$Object* HttpRequestBuilderTest::test2($String* name, Object$* receiver, $BiFunction* m, Object$* arg1, Object$* arg2, $ClassArray* ex) {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	try {
		$var($Object, result, $nc(m)->apply(arg1, arg2));
		if (!shouldFail(ex)) {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, arg1, ", "_s, arg2, ")"_s}));
			return result;
		} else {
			$throwNew($AssertionError, $$of($str({"Expected "_s, $(expectedNames(ex)), " not raised for "_s, name, "("_s, arg1, ", "_s, arg2, ")"_s})));
		}
	} catch ($Exception& x) {
		if (!isExpected(x, ex)) {
			$throw(x);
		} else {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, arg1, ", "_s, arg2, ") - Got expected exception: "_s, x}));
			return $of(receiver);
		}
	}
	$shouldNotReachHere();
}

bool HttpRequestBuilderTest::lambda$isExpected$19($Exception* x, $Class* c) {
	$init(HttpRequestBuilderTest);
	return $nc(c)->isInstance(x);
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$18() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->GET())->DELETE();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$17() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->GET())->PUT($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$16() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->GET())->POST($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$15() {
	$init(HttpRequestBuilderTest);
	return $$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->DELETE();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$14() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->PUT($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$13() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->POST($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$12() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->DELETE())->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$11() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->PUT($($HttpRequest$BodyPublishers::ofString(""_s))))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$10() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	return $$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->POST($($HttpRequest$BodyPublishers::ofString(""_s))))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$9() {
	$init(HttpRequestBuilderTest);
	return $$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$8() {
	$init(HttpRequestBuilderTest);
	return $HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI);
}

void HttpRequestBuilderTest::lambda$main$7() {
	$init(HttpRequestBuilderTest);
	$useLocalObjectStack();
	$$nc($$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->DELETE())->build();
}

void HttpRequestBuilderTest::lambda$main$6() {
	$init(HttpRequestBuilderTest);
	$$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->build();
}

void HttpRequestBuilderTest::lambda$main$5() {
	$init(HttpRequestBuilderTest);
	$$nc($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI))->uri(nullptr);
}

void HttpRequestBuilderTest::lambda$main$4() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder($($URI::create("https://www.foo.com:-1/"_s)));
}

void HttpRequestBuilderTest::lambda$main$3() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder($($URI::create("http://www.foo.com:-1/"_s)));
}

void HttpRequestBuilderTest::lambda$main$2() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder($($URI::create("badScheme://www.foo.com/"_s)));
}

void HttpRequestBuilderTest::lambda$main$1() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder(nullptr);
}

void HttpRequestBuilderTest::lambda$main$0() {
	$init(HttpRequestBuilderTest);
	$$nc($HttpRequest::newBuilder())->build();
}

void HttpRequestBuilderTest::clinit$($Class* clazz) {
	$assignStatic(HttpRequestBuilderTest::TEST_URI, $URI::create("http://www.foo.com/"_s));
}

HttpRequestBuilderTest::HttpRequestBuilderTest() {
}

$Class* HttpRequestBuilderTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$0")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$1$1")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$2$2")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$3$3")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$4$4")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$5$5")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$5$5::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$6$6")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$6$6::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$uri$7")) {
			return HttpRequestBuilderTest$$Lambda$uri$7::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$header$8")) {
			return HttpRequestBuilderTest$$Lambda$header$8::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$headers$9")) {
			return HttpRequestBuilderTest$$Lambda$headers$9::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$7$10")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$7$10::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$POST$11")) {
			return HttpRequestBuilderTest$$Lambda$POST$11::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$PUT$12")) {
			return HttpRequestBuilderTest$$Lambda$PUT$12::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$method$13")) {
			return HttpRequestBuilderTest$$Lambda$method$13::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$setHeader$14")) {
			return HttpRequestBuilderTest$$Lambda$setHeader$14::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$timeout$15")) {
			return HttpRequestBuilderTest$$Lambda$timeout$15::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$version$16")) {
			return HttpRequestBuilderTest$$Lambda$version$16::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$8$17")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$8$17::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$9$18")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$9$18::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$10$19")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$10$19::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$11$20")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$11$20::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$12$21")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$12$21::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$13$22")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$13$22::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$14$23")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$14$23::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$15$24")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$15$24::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$16$25")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$16$25::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$17$26")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$17$26::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$main$18$27")) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$18$27::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$getSimpleName$28")) {
			return HttpRequestBuilderTest$$Lambda$getSimpleName$28::load$(name, initialize);
		}
		if (name->equals("HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29")) {
			return HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TEST_URI", "Ljava/net/URI;", nullptr, $STATIC | $FINAL, $staticField(HttpRequestBuilderTest, TEST_URI)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpRequestBuilderTest, init$, void)},
		{"expectedNames", "([Ljava/lang/Class;)Ljava/lang/String;", "([Ljava/lang/Class<+Ljava/lang/Exception;>;)Ljava/lang/String;", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(HttpRequestBuilderTest, expectedNames, $String*, $ClassArray*)},
		{"isExpected", "(Ljava/lang/Exception;[Ljava/lang/Class;)Z", "(Ljava/lang/Exception;[Ljava/lang/Class<+Ljava/lang/Exception;>;)Z", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(HttpRequestBuilderTest, isExpected, bool, $Exception*, $ClassArray*)},
		{"lambda$isExpected$19", "(Ljava/lang/Exception;Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$isExpected$19, bool, $Exception*, $Class*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$1, void)},
		{"lambda$main$10", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$10, $HttpRequest$Builder*)},
		{"lambda$main$11", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$11, $HttpRequest$Builder*)},
		{"lambda$main$12", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$12, $HttpRequest$Builder*)},
		{"lambda$main$13", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$13, $HttpRequest$Builder*)},
		{"lambda$main$14", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$14, $HttpRequest$Builder*)},
		{"lambda$main$15", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$15, $HttpRequest$Builder*)},
		{"lambda$main$16", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$16, $HttpRequest$Builder*)},
		{"lambda$main$17", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$17, $HttpRequest$Builder*)},
		{"lambda$main$18", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$18, $HttpRequest$Builder*)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$3, void)},
		{"lambda$main$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$4, void)},
		{"lambda$main$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$5, void)},
		{"lambda$main$6", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$6, void)},
		{"lambda$main$7", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$7, void)},
		{"lambda$main$8", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$8, $HttpRequest$Builder*)},
		{"lambda$main$9", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpRequestBuilderTest, lambda$main$9, $HttpRequest$Builder*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpRequestBuilderTest, main, void, $StringArray*), "java.lang.Exception"},
		{"method", "(Ljava/lang/String;Ljava/util/function/Supplier;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/util/function/Supplier<Ljava/net/http/HttpRequest$Builder;>;Ljava/lang/String;)V", $STATIC, $staticMethod(HttpRequestBuilderTest, method, void, $String*, $Supplier*, $String*)},
		{"shouldFail", "([Ljava/lang/Class;)Z", "([Ljava/lang/Class<+Ljava/lang/Exception;>;)Z", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(HttpRequestBuilderTest, shouldFail, bool, $ClassArray*)},
		{"test0", "(Ljava/lang/String;Ljava/lang/Runnable;[Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Runnable;[Ljava/lang/Class<+Ljava/lang/Exception;>;)V", $STATIC | $TRANSIENT, $staticMethod(HttpRequestBuilderTest, test0, void, $String*, $Runnable*, $ClassArray*)},
		{"test1", "(Ljava/lang/String;Ljava/lang/Object;Ljava/util/function/Function;Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljava/lang/String;TR;Ljava/util/function/Function<TP;TR;>;TP;[Ljava/lang/Class<+Ljava/lang/Exception;>;)TR;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(HttpRequestBuilderTest, test1, $Object*, $String*, Object$*, $Function*, Object$*, $ClassArray*)},
		{"test2", "(Ljava/lang/String;Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P1:Ljava/lang/Object;P2:Ljava/lang/Object;>(Ljava/lang/String;TR;Ljava/util/function/BiFunction<TP1;TP2;TR;>;TP1;TP2;[Ljava/lang/Class<+Ljava/lang/Exception;>;)TR;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(HttpRequestBuilderTest, test2, $Object*, $String*, Object$*, $BiFunction*, Object$*, Object$*, $ClassArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HttpRequestBuilderTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpRequestBuilderTest, name, initialize, &classInfo$$, HttpRequestBuilderTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequestBuilderTest);
	});
	return class$;
}

$Class* HttpRequestBuilderTest::class$ = nullptr;
#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Stack.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Pattern.h>
#include <jdk/internal/net/http/websocket/TestSupport$1.h>
#include <jdk/internal/net/http/websocket/TestSupport$2.h>
#include <jdk/internal/net/http/websocket/TestSupport$AssertionFailedException.h>
#include <jdk/internal/net/http/websocket/TestSupport$F.h>
#include <jdk/internal/net/http/websocket/TestSupport$F2.h>
#include <jdk/internal/net/http/websocket/TestSupport$F3.h>
#include <jdk/internal/net/http/websocket/TestSupport$F4.h>
#include <jdk/internal/net/http/websocket/TestSupport$F5.h>
#include <jdk/internal/net/http/websocket/TestSupport$ThrowingProcedure.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Stack = ::java::util::Stack;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Pattern = ::java::util::regex::Pattern;
using $TestSupport$1 = ::jdk::internal::net::http::websocket::TestSupport$1;
using $TestSupport$2 = ::jdk::internal::net::http::websocket::TestSupport$2;
using $TestSupport$AssertionFailedException = ::jdk::internal::net::http::websocket::TestSupport$AssertionFailedException;
using $TestSupport$F = ::jdk::internal::net::http::websocket::TestSupport$F;
using $TestSupport$F2 = ::jdk::internal::net::http::websocket::TestSupport$F2;
using $TestSupport$F3 = ::jdk::internal::net::http::websocket::TestSupport$F3;
using $TestSupport$F4 = ::jdk::internal::net::http::websocket::TestSupport$F4;
using $TestSupport$F5 = ::jdk::internal::net::http::websocket::TestSupport$F5;
using $TestSupport$ThrowingProcedure = ::jdk::internal::net::http::websocket::TestSupport$ThrowingProcedure;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class TestSupport$$Lambda$lambda$cartesianIterator$0 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$0, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F2* f2) {
		$set(this, f2, f2);
	}
	virtual $Object* apply($ObjectArray* p) override {
		return TestSupport::lambda$cartesianIterator$0(f2, p);
	}
	$TestSupport$F2* f2 = nullptr;
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f2", "Ljdk/internal/net/http/websocket/TestSupport$F2;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$0, f2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F2;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$lambda$cartesianIterator$0, init$, void, $TestSupport$F2*)},
		{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$lambda$cartesianIterator$0, apply, $Object*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$0",
		"java.lang.Object",
		"jdk.internal.net.http.websocket.TestSupport$F",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$lambda$cartesianIterator$0);
	});
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$0::class$ = nullptr;

class TestSupport$$Lambda$lambda$cartesianIterator$1$1 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$1$1, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F3* f3) {
		$set(this, f3, f3);
	}
	virtual $Object* apply($ObjectArray* p) override {
		return TestSupport::lambda$cartesianIterator$1(f3, p);
	}
	$TestSupport$F3* f3 = nullptr;
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f3", "Ljdk/internal/net/http/websocket/TestSupport$F3;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$1$1, f3)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F3;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$lambda$cartesianIterator$1$1, init$, void, $TestSupport$F3*)},
		{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$lambda$cartesianIterator$1$1, apply, $Object*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$1$1",
		"java.lang.Object",
		"jdk.internal.net.http.websocket.TestSupport$F",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$lambda$cartesianIterator$1$1);
	});
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$1$1::class$ = nullptr;

class TestSupport$$Lambda$lambda$cartesianIterator$2$2 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$2$2, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F4* f4) {
		$set(this, f4, f4);
	}
	virtual $Object* apply($ObjectArray* p) override {
		return TestSupport::lambda$cartesianIterator$2(f4, p);
	}
	$TestSupport$F4* f4 = nullptr;
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f4", "Ljdk/internal/net/http/websocket/TestSupport$F4;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$2$2, f4)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F4;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$lambda$cartesianIterator$2$2, init$, void, $TestSupport$F4*)},
		{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$lambda$cartesianIterator$2$2, apply, $Object*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$2$2",
		"java.lang.Object",
		"jdk.internal.net.http.websocket.TestSupport$F",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$lambda$cartesianIterator$2$2);
	});
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$2$2::class$ = nullptr;

class TestSupport$$Lambda$lambda$cartesianIterator$3$3 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$3$3, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F5* f5) {
		$set(this, f5, f5);
	}
	virtual $Object* apply($ObjectArray* p) override {
		return TestSupport::lambda$cartesianIterator$3(f5, p);
	}
	$TestSupport$F5* f5 = nullptr;
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f5", "Ljdk/internal/net/http/websocket/TestSupport$F5;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$3$3, f5)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F5;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$lambda$cartesianIterator$3$3, init$, void, $TestSupport$F5*)},
		{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$lambda$cartesianIterator$3$3, apply, $Object*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$3$3",
		"java.lang.Object",
		"jdk.internal.net.http.websocket.TestSupport$F",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$lambda$cartesianIterator$3$3);
	});
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$3$3::class$ = nullptr;

class TestSupport$$Lambda$lambda$forEachBufferPartition$4$4 : public $Consumer {
	$class(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ByteBuffer* src, $Consumer* action) {
		$set(this, src, src);
		$set(this, action, action);
	}
	virtual void accept(Object$* lengths) override {
		TestSupport::lambda$forEachBufferPartition$4(src, action, $cast($Iterable, lengths));
	}
	$ByteBuffer* src = nullptr;
	$Consumer* action = nullptr;
};
$Class* TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"src", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, src)},
		{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, init$, void, $ByteBuffer*, $Consumer*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$forEachBufferPartition$4$4",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4);
	});
	return class$;
}
$Class* TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::class$ = nullptr;

class TestSupport$$Lambda$isInstance$5 : public $Predicate {
	$class(TestSupport$$Lambda$isInstance$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		return $nc(inst$)->isInstance(arg0);
	}
	$Class* inst$ = nullptr;
};
$Class* TestSupport$$Lambda$isInstance$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$isInstance$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$isInstance$5, init$, void, $Class*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$isInstance$5, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$isInstance$5",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$isInstance$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$isInstance$5);
	});
	return class$;
}
$Class* TestSupport$$Lambda$isInstance$5::class$ = nullptr;

class TestSupport$$Lambda$lambda$assertThrows$5$6 : public $Predicate {
	$class(TestSupport$$Lambda$lambda$assertThrows$5$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* clazz, $String* messageRegex) {
		this->clazz = clazz;
		$set(this, messageRegex, messageRegex);
	}
	virtual bool test(Object$* e) override {
		return TestSupport::lambda$assertThrows$5(clazz, messageRegex, $cast($Throwable, e));
	}
	$Class* clazz = nullptr;
	$String* messageRegex = nullptr;
};
$Class* TestSupport$$Lambda$lambda$assertThrows$5$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$assertThrows$5$6, clazz)},
		{"messageRegex", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$assertThrows$5$6, messageRegex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestSupport$$Lambda$lambda$assertThrows$5$6, init$, void, $Class*, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TestSupport$$Lambda$lambda$assertThrows$5$6, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$assertThrows$5$6",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSupport$$Lambda$lambda$assertThrows$5$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$$Lambda$lambda$assertThrows$5$6);
	});
	return class$;
}
$Class* TestSupport$$Lambda$lambda$assertThrows$5$6::class$ = nullptr;

void TestSupport::init$() {
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $TestSupport$F2* f2) {
	$useLocalObjectStack();
	$var($TestSupport$F, t, $new(TestSupport$$Lambda$lambda$cartesianIterator$0, f2));
	return cartesianIterator($($List::of(a, b)), t);
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $List* c, $TestSupport$F3* f3) {
	$useLocalObjectStack();
	$var($TestSupport$F, t, $new(TestSupport$$Lambda$lambda$cartesianIterator$1$1, f3));
	return cartesianIterator($($List::of(a, b, c)), t);
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $List* c, $List* d, $TestSupport$F4* f4) {
	$useLocalObjectStack();
	$var($TestSupport$F, t, $new(TestSupport$$Lambda$lambda$cartesianIterator$2$2, f4));
	return cartesianIterator($($List::of(a, b, c, d)), t);
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $List* c, $List* d, $List* e, $TestSupport$F5* f5) {
	$useLocalObjectStack();
	$var($TestSupport$F, t, $new(TestSupport$$Lambda$lambda$cartesianIterator$3$3, f5));
	return cartesianIterator($($List::of(a, b, c, d, e)), t);
}

$Iterator* TestSupport::cartesianIterator($List* params, $TestSupport$F* function) {
	$useLocalObjectStack();
	if ($nc(params)->isEmpty()) {
		return $Collections::emptyIterator();
	}
	{
		$var($Iterator, i$, params->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, l, $cast($List, i$->next()));
			if ($nc(l)->isEmpty()) {
				return $Collections::emptyIterator();
			}
		}
	}
	return $new($TestSupport$1, params, function);
}

$Iterator* TestSupport::iteratorOf1(Object$* element) {
	return $$nc($List::of(element))->iterator();
}

$Iterator* TestSupport::iteratorOf($ObjectArray* elements) {
	return $$nc($List::of(elements))->iterator();
}

$Iterator* TestSupport::limit(int32_t maxElements, $Iterator* elements) {
	return $new($TestSupport$2, maxElements, elements);
}

$ByteBuffer* TestSupport::fullCopy($ByteBuffer* src) {
	$useLocalObjectStack();
	$var($ByteBuffer, copy, $ByteBuffer::allocate($nc(src)->capacity()));
	int32_t p = src->position();
	int32_t l = src->limit();
	src->clear();
	$$nc($$nc($nc(copy)->put(src))->position(p))->limit(l);
	$$nc(src->position(p))->limit(l);
	return copy;
}

void TestSupport::forEachBufferPartition($ByteBuffer* src, $Consumer* action) {
	int32_t var$0 = $nc(src)->remaining();
	forEachPartition(var$0, $$new(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, src, action));
}

void TestSupport::forEachPartition(int32_t n, $Consumer* action) {
	forEachPartition(n, $$new($Stack), action);
}

void TestSupport::forEachPartition(int32_t n, $Stack* path, $Consumer* action) {
	$useLocalObjectStack();
	if (n == 0) {
		$nc(action)->accept(path);
	} else {
		for (int32_t i = 1; i <= n; ++i) {
			$nc(path)->push($($Integer::valueOf(i)));
			forEachPartition(n - i, path, action);
			path->pop();
		}
	}
}

void TestSupport::forEachPermutation(int32_t n, $Consumer* c) {
	$var($ints, a, $new($ints, n));
	for (int32_t i = 0; i < n; ++i) {
		a->set(i, i);
	}
	permutations(0, a, c);
}

void TestSupport::permutations(int32_t i, $ints* a, $Consumer* c) {
	if (i == $nc(a)->length) {
		$nc(c)->accept($($Arrays::copyOf(a, a->length)));
		return;
	}
	for (int32_t j = i; j < a->length; ++j) {
		swap(a, i, j);
		permutations(i + 1, a, c);
		swap(a, i, j);
	}
}

void TestSupport::swap($ints* a, int32_t i, int32_t j) {
	int32_t x = $nc(a)->get(i);
	a->set(i, a->get(j));
	a->set(j, x);
}

$Throwable* TestSupport::assertThrows($Class* clazz, $TestSupport$ThrowingProcedure* code) {
	$useLocalObjectStack();
	$var($Throwable, t, assertThrows($$new(TestSupport$$Lambda$isInstance$5, $nc(clazz)), code));
	return t;
}

$Throwable* TestSupport::assertThrows($Class* clazz, $String* messageRegex, $TestSupport$ThrowingProcedure* code) {
	$Objects::requireNonNull(messageRegex, "messagePattern"_s);
	$var($Predicate, p, $new(TestSupport$$Lambda$lambda$assertThrows$5$6, clazz, messageRegex));
	return assertThrows(p, code);
}

$Throwable* TestSupport::assertThrows($Predicate* predicate, $TestSupport$ThrowingProcedure* code) {
	$useLocalObjectStack();
	$Objects::requireNonNull(predicate, "predicate"_s);
	$Objects::requireNonNull(code, "code"_s);
	$var($Throwable, caught, nullptr);
	try {
		$nc(code)->run();
	} catch ($Throwable& t) {
		$assign(caught, t);
	}
	if (caught == nullptr) {
		$throwNew($TestSupport$AssertionFailedException, "No exception was thrown"_s);
	}
	if ($nc(predicate)->test(caught)) {
		$nc($System::out)->println($$str({"Got expected exception: "_s, caught}));
		return caught;
	}
	$throwNew($TestSupport$AssertionFailedException, "Caught exception didn\'t match the predicate"_s, caught);
}

bool TestSupport::lambda$assertThrows$5($Class* clazz, $String* messageRegex, $Throwable* e) {
	bool var$0 = $nc(clazz)->isInstance(e);
	return var$0 && $Pattern::matches(messageRegex, $($nc(e)->getMessage()));
}

void TestSupport::lambda$forEachBufferPartition$4($ByteBuffer* src, $Consumer* action, $Iterable* lengths) {
	$useLocalObjectStack();
	int32_t end = $nc(src)->position();
	$var($List, buffers, $new($LinkedList));
	{
		$var($Iterator, i$, $nc(lengths)->iterator());
		for (; $nc(i$)->hasNext();) {
			int32_t len = $$sure($Integer, i$->next())->intValue();
			{
				$var($ByteBuffer, d, src->duplicate());
				$nc(d)->position(end);
				d->limit(end + len);
				end += len;
				buffers->add(d);
			}
		}
	}
	$nc(action)->accept(buffers);
}

$Object* TestSupport::lambda$cartesianIterator$3($TestSupport$F5* f5, $ObjectArray* p) {
	return $nc(f5)->apply($nc(p)->get(0), $nc(p)->get(1), $nc(p)->get(2), $nc(p)->get(3), $nc(p)->get(4));
}

$Object* TestSupport::lambda$cartesianIterator$2($TestSupport$F4* f4, $ObjectArray* p) {
	return $nc(f4)->apply($nc(p)->get(0), $nc(p)->get(1), $nc(p)->get(2), $nc(p)->get(3));
}

$Object* TestSupport::lambda$cartesianIterator$1($TestSupport$F3* f3, $ObjectArray* p) {
	return $nc(f3)->apply($nc(p)->get(0), $nc(p)->get(1), $nc(p)->get(2));
}

$Object* TestSupport::lambda$cartesianIterator$0($TestSupport$F2* f2, $ObjectArray* p) {
	return $nc(f2)->apply($nc(p)->get(0), $nc(p)->get(1));
}

TestSupport::TestSupport() {
}

$Class* TestSupport::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$0")) {
			return TestSupport$$Lambda$lambda$cartesianIterator$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$1$1")) {
			return TestSupport$$Lambda$lambda$cartesianIterator$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$2$2")) {
			return TestSupport$$Lambda$lambda$cartesianIterator$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$3$3")) {
			return TestSupport$$Lambda$lambda$cartesianIterator$3$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$forEachBufferPartition$4$4")) {
			return TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$isInstance$5")) {
			return TestSupport$$Lambda$isInstance$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$assertThrows$5$6")) {
			return TestSupport$$Lambda$lambda$assertThrows$5$6::load$(name, initialize);
		}
	}
	$CompoundAttribute iteratorOfmethodAnnotations$$[] = {
		{"Ljava/lang/SafeVarargs;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TestSupport, init$, void)},
		{"assertThrows", "(Ljava/lang/Class;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<+TT;>;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)TT;", $PUBLIC | $STATIC, $staticMethod(TestSupport, assertThrows, $Throwable*, $Class*, $TestSupport$ThrowingProcedure*)},
		{"assertThrows", "(Ljava/lang/Class;Ljava/lang/String;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<+TT;>;Ljava/lang/String;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)TT;", $STATIC, $staticMethod(TestSupport, assertThrows, $Throwable*, $Class*, $String*, $TestSupport$ThrowingProcedure*)},
		{"assertThrows", "(Ljava/util/function/Predicate;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", "(Ljava/util/function/Predicate<-Ljava/lang/Throwable;>;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", $STATIC, $staticMethod(TestSupport, assertThrows, $Throwable*, $Predicate*, $TestSupport$ThrowingProcedure*)},
		{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F2;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljdk/internal/net/http/websocket/TestSupport$F2<TA;TB;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $staticMethod(TestSupport, cartesianIterator, $Iterator*, $List*, $List*, $TestSupport$F2*)},
		{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F3;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljava/util/List<TC;>;Ljdk/internal/net/http/websocket/TestSupport$F3<TA;TB;TC;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $staticMethod(TestSupport, cartesianIterator, $Iterator*, $List*, $List*, $List*, $TestSupport$F3*)},
		{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F4;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljava/util/List<TC;>;Ljava/util/List<TD;>;Ljdk/internal/net/http/websocket/TestSupport$F4<TA;TB;TC;TD;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $staticMethod(TestSupport, cartesianIterator, $Iterator*, $List*, $List*, $List*, $List*, $TestSupport$F4*)},
		{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F5;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;E:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljava/util/List<TC;>;Ljava/util/List<TD;>;Ljava/util/List<TE;>;Ljdk/internal/net/http/websocket/TestSupport$F5<TA;TB;TC;TD;TE;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $staticMethod(TestSupport, cartesianIterator, $Iterator*, $List*, $List*, $List*, $List*, $List*, $TestSupport$F5*)},
		{"cartesianIterator", "(Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F;)Ljava/util/Iterator;", "<R:Ljava/lang/Object;>(Ljava/util/List<+Ljava/util/List<*>;>;Ljdk/internal/net/http/websocket/TestSupport$F<TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $staticMethod(TestSupport, cartesianIterator, $Iterator*, $List*, $TestSupport$F*)},
		{"forEachBufferPartition", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;)V", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer<-Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;>;)V", $STATIC, $staticMethod(TestSupport, forEachBufferPartition, void, $ByteBuffer*, $Consumer*)},
		{"forEachPartition", "(ILjava/util/function/Consumer;)V", "(ILjava/util/function/Consumer<-Ljava/lang/Iterable<Ljava/lang/Integer;>;>;)V", $PRIVATE | $STATIC, $staticMethod(TestSupport, forEachPartition, void, int32_t, $Consumer*)},
		{"forEachPartition", "(ILjava/util/Stack;Ljava/util/function/Consumer;)V", "(ILjava/util/Stack<Ljava/lang/Integer;>;Ljava/util/function/Consumer<-Ljava/lang/Iterable<Ljava/lang/Integer;>;>;)V", $PRIVATE | $STATIC, $staticMethod(TestSupport, forEachPartition, void, int32_t, $Stack*, $Consumer*)},
		{"forEachPermutation", "(ILjava/util/function/Consumer;)V", "(ILjava/util/function/Consumer<-[I>;)V", $STATIC, $staticMethod(TestSupport, forEachPermutation, void, int32_t, $Consumer*)},
		{"fullCopy", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $staticMethod(TestSupport, fullCopy, $ByteBuffer*, $ByteBuffer*)},
		{"iteratorOf", "([Ljava/lang/Object;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/Iterator<TT;>;", $STATIC | $TRANSIENT, $staticMethod(TestSupport, iteratorOf, $Iterator*, $ObjectArray*), nullptr, nullptr, iteratorOfmethodAnnotations$$},
		{"iteratorOf1", "(Ljava/lang/Object;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/Iterator<TT;>;", $STATIC, $staticMethod(TestSupport, iteratorOf1, $Iterator*, Object$*)},
		{"lambda$assertThrows$5", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Throwable;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSupport, lambda$assertThrows$5, bool, $Class*, $String*, $Throwable*)},
		{"lambda$cartesianIterator$0", "(Ljdk/internal/net/http/websocket/TestSupport$F2;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSupport, lambda$cartesianIterator$0, $Object*, $TestSupport$F2*, $ObjectArray*)},
		{"lambda$cartesianIterator$1", "(Ljdk/internal/net/http/websocket/TestSupport$F3;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSupport, lambda$cartesianIterator$1, $Object*, $TestSupport$F3*, $ObjectArray*)},
		{"lambda$cartesianIterator$2", "(Ljdk/internal/net/http/websocket/TestSupport$F4;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSupport, lambda$cartesianIterator$2, $Object*, $TestSupport$F4*, $ObjectArray*)},
		{"lambda$cartesianIterator$3", "(Ljdk/internal/net/http/websocket/TestSupport$F5;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSupport, lambda$cartesianIterator$3, $Object*, $TestSupport$F5*, $ObjectArray*)},
		{"lambda$forEachBufferPartition$4", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;Ljava/lang/Iterable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSupport, lambda$forEachBufferPartition$4, void, $ByteBuffer*, $Consumer*, $Iterable*)},
		{"limit", "(ILjava/util/Iterator;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(ILjava/util/Iterator<+TT;>;)Ljava/util/Iterator<TT;>;", $STATIC, $staticMethod(TestSupport, limit, $Iterator*, int32_t, $Iterator*)},
		{"permutations", "(I[ILjava/util/function/Consumer;)V", "(I[ILjava/util/function/Consumer<-[I>;)V", $PRIVATE | $STATIC, $staticMethod(TestSupport, permutations, void, int32_t, $ints*, $Consumer*)},
		{"swap", "([III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestSupport, swap, void, $ints*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException", "jdk.internal.net.http.websocket.TestSupport", "AssertionFailedException", $STATIC | $FINAL},
		{"jdk.internal.net.http.websocket.TestSupport$ThrowingProcedure", "jdk.internal.net.http.websocket.TestSupport", "ThrowingProcedure", $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$F", "jdk.internal.net.http.websocket.TestSupport", "F", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$F5", "jdk.internal.net.http.websocket.TestSupport", "F5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$F4", "jdk.internal.net.http.websocket.TestSupport", "F4", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$F3", "jdk.internal.net.http.websocket.TestSupport", "F3", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$F2", "jdk.internal.net.http.websocket.TestSupport", "F2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$F1", "jdk.internal.net.http.websocket.TestSupport", "F1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.websocket.TestSupport$2", nullptr, nullptr, 0},
		{"jdk.internal.net.http.websocket.TestSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.TestSupport",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException,jdk.internal.net.http.websocket.TestSupport$ThrowingProcedure,jdk.internal.net.http.websocket.TestSupport$F,jdk.internal.net.http.websocket.TestSupport$F5,jdk.internal.net.http.websocket.TestSupport$F4,jdk.internal.net.http.websocket.TestSupport$F3,jdk.internal.net.http.websocket.TestSupport$F2,jdk.internal.net.http.websocket.TestSupport$F1,jdk.internal.net.http.websocket.TestSupport$2,jdk.internal.net.http.websocket.TestSupport$1"
	};
	$loadClass(TestSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport);
	});
	return class$;
}

$Class* TestSupport::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk
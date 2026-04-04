#include <jdk/internal/net/http/websocket/TestSupport$2.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void TestSupport$2::init$(int32_t val$maxElements, $Iterator* val$elements) {
	this->val$maxElements = val$maxElements;
	$set(this, val$elements, val$elements);
	this->count = this->val$maxElements;
}

bool TestSupport$2::hasNext() {
	return this->count > 0 && $nc(this->val$elements)->hasNext();
}

$Object* TestSupport$2::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	--this->count;
	return $nc(this->val$elements)->next();
}

TestSupport$2::TestSupport$2() {
}

$Class* TestSupport$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$elements", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(TestSupport$2, val$elements)},
		{"val$maxElements", "I", nullptr, $FINAL | $SYNTHETIC, $field(TestSupport$2, val$maxElements)},
		{"count", "I", nullptr, 0, $field(TestSupport$2, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/util/Iterator;)V", nullptr, 0, $method(TestSupport$2, init$, void, int32_t, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(TestSupport$2, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(TestSupport$2, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.websocket.TestSupport",
		"limit",
		"(ILjava/util/Iterator;)Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TestSupport$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.TestSupport$2",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TestSupport"
	};
	$loadClass(TestSupport$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$2);
	});
	return class$;
}

$Class* TestSupport$2::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk
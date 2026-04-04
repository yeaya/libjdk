#include <jdk/internal/net/http/hpack/BuffersTestingKit$1.h>
#include <java/lang/Iterable.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/Random.h>
#include <jdk/internal/net/http/hpack/BuffersTestingKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $BuffersTestingKit = ::jdk::internal::net::http::hpack::BuffersTestingKit;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void BuffersTestingKit$1::init$($Iterable* val$source) {
	$set(this, val$source, val$source);
	$set(this, it, $nc(this->val$source)->iterator());
}

bool BuffersTestingKit$1::hasNext() {
	return $nc(this->it)->hasNext();
}

$Object* BuffersTestingKit$1::next() {
	$var($ByteBuffer, buf, $cast($ByteBuffer, $nc(this->it)->next()));
	int32_t remaining = $nc(buf)->remaining();
	$init($BuffersTestingKit);
	int32_t newCapacity = remaining + $nc($BuffersTestingKit::random)->nextInt(17);
	int32_t newPosition = $BuffersTestingKit::random->nextInt(newCapacity - remaining + 1);
	return $of($BuffersTestingKit::relocate(buf, newPosition, newCapacity));
}

BuffersTestingKit$1::BuffersTestingKit$1() {
}

$Class* BuffersTestingKit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$source", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(BuffersTestingKit$1, val$source)},
		{"it", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(BuffersTestingKit$1, it)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;)V", "()V", 0, $method(BuffersTestingKit$1, init$, void, $Iterable*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(BuffersTestingKit$1, hasNext, bool)},
		{"next", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(BuffersTestingKit$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.hpack.BuffersTestingKit",
		"relocateBuffers",
		"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.BuffersTestingKit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.hpack.BuffersTestingKit$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.BuffersTestingKit"
	};
	$loadClass(BuffersTestingKit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BuffersTestingKit$1);
	});
	return class$;
}

$Class* BuffersTestingKit$1::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk
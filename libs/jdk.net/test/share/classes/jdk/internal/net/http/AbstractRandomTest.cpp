#include <jdk/internal/net/http/AbstractRandomTest.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Random = ::java::util::Random;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Random* AbstractRandomTest::random = nullptr;

void AbstractRandomTest::init$() {
}

$Long* AbstractRandomTest::getSystemSeed() {
	$init(AbstractRandomTest);
	$useLocalObjectStack();
	$var($Long, seed, nullptr);
	try {
		$assign(seed, $Long::valueOf($($System::getProperty("seed"_s))));
	} catch ($NumberFormatException& e) {
	}
	return seed;
}

int64_t AbstractRandomTest::getSeed() {
	$init(AbstractRandomTest);
	$useLocalObjectStack();
	$var($Long, seed, getSystemSeed());
	if (seed == nullptr) {
		$assign(seed, $Long::valueOf(($$new($Random))->nextLong()));
	}
	$nc($System::out)->println($$str({"Seed from AbstractRandomTest.getSeed = "_s, seed, "L"_s}));
	return $nc(seed)->longValue();
}

int32_t AbstractRandomTest::randomRange(int32_t lower, int32_t upper) {
	$init(AbstractRandomTest);
	if (lower > upper) {
		$throwNew($IllegalArgumentException, "lower > upper"_s);
	}
	int32_t diff = upper - lower;
	int32_t r = lower + $nc(AbstractRandomTest::random)->nextInt(diff);
	return r - (r % 8);
}

void AbstractRandomTest::clinit$($Class* clazz) {
	$assignStatic(AbstractRandomTest::random, $new($Random, AbstractRandomTest::getSeed()));
}

AbstractRandomTest::AbstractRandomTest() {
}

$Class* AbstractRandomTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractRandomTest, random)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractRandomTest, init$, void)},
		{"getSeed", "()J", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractRandomTest, getSeed, int64_t)},
		{"getSystemSeed", "()Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractRandomTest, getSystemSeed, $Long*)},
		{"randomRange", "(II)I", nullptr, $PROTECTED | $STATIC, $staticMethod(AbstractRandomTest, randomRange, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.AbstractRandomTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractRandomTest, name, initialize, &classInfo$$, AbstractRandomTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractRandomTest);
	});
	return class$;
}

$Class* AbstractRandomTest::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
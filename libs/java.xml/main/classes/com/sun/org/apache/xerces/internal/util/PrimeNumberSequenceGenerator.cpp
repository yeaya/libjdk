#include <com/sun/org/apache/xerces/internal/util/PrimeNumberSequenceGenerator.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Random.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef PRIMES

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Random = ::java::util::Random;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0 : public $IntConsumer {
	$class(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($ints* arrayToFill, $Random* r) {
		$set(this, arrayToFill, arrayToFill);
		$set(this, r, r);
	}
	virtual void accept(int32_t i) override {
		PrimeNumberSequenceGenerator::lambda$generateSequence$0(arrayToFill, r, i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0>());
	}
	$ints* arrayToFill = nullptr;
	$Random* r = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::fieldInfos[3] = {
	{"arrayToFill", "[I", nullptr, $PUBLIC, $field(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, arrayToFill)},
	{"r", "Ljava/util/Random;", nullptr, $PUBLIC, $field(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, r)},
	{}
};
$MethodInfo PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::methodInfos[3] = {
	{"<init>", "([ILjava/util/Random;)V", nullptr, $PUBLIC, $method(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, init$, void, $ints*, $Random*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, accept, void, int32_t)},
	{}
};
$ClassInfo PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xerces.internal.util.PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::load$($String* name, bool initialize) {
	$loadClass(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::class$ = nullptr;

$FieldInfo _PrimeNumberSequenceGenerator_FieldInfo_[] = {
	{"PRIMES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrimeNumberSequenceGenerator, PRIMES)},
	{}
};

$MethodInfo _PrimeNumberSequenceGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(PrimeNumberSequenceGenerator, init$, void)},
	{"generateSequence", "([I)V", nullptr, $STATIC, $staticMethod(PrimeNumberSequenceGenerator, generateSequence, void, $ints*)},
	{"lambda$generateSequence$0", "([ILjava/util/Random;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrimeNumberSequenceGenerator, lambda$generateSequence$0, void, $ints*, $Random*, int32_t)},
	{}
};

$ClassInfo _PrimeNumberSequenceGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.PrimeNumberSequenceGenerator",
	"java.lang.Object",
	nullptr,
	_PrimeNumberSequenceGenerator_FieldInfo_,
	_PrimeNumberSequenceGenerator_MethodInfo_
};

$Object* allocate$PrimeNumberSequenceGenerator($Class* clazz) {
	return $of($alloc(PrimeNumberSequenceGenerator));
}

$ints* PrimeNumberSequenceGenerator::PRIMES = nullptr;

void PrimeNumberSequenceGenerator::init$() {
}

void PrimeNumberSequenceGenerator::generateSequence($ints* arrayToFill) {
	$init(PrimeNumberSequenceGenerator);
	$useLocalCurrentObjectStackCache();
	$var($Random, r, $new($Random));
	$nc($($IntStream::range(0, $nc(arrayToFill)->length)))->forEach(static_cast<$IntConsumer*>($$new(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0, arrayToFill, r)));
}

void PrimeNumberSequenceGenerator::lambda$generateSequence$0($ints* arrayToFill, $Random* r, int32_t i) {
	$init(PrimeNumberSequenceGenerator);
	$nc(arrayToFill)->set(i, $nc(PrimeNumberSequenceGenerator::PRIMES)->get($nc(r)->nextInt($nc(PrimeNumberSequenceGenerator::PRIMES)->length)));
}

void clinit$PrimeNumberSequenceGenerator($Class* class$) {
	$assignStatic(PrimeNumberSequenceGenerator::PRIMES, $new($ints, {
		3,
		5,
		7,
		11,
		13,
		17,
		19,
		23,
		29,
		31,
		37,
		41,
		43,
		47,
		53,
		59,
		61,
		67,
		71,
		73,
		79,
		83,
		89,
		97,
		101,
		103,
		107,
		109,
		113,
		127,
		131,
		137,
		139,
		149,
		151,
		157,
		163,
		167,
		173,
		179,
		181,
		191,
		193,
		197,
		199,
		211,
		223,
		227,
		229,
		233,
		239,
		241,
		251,
		257,
		263,
		269,
		271,
		277,
		281,
		283,
		293,
		307,
		311,
		313,
		317,
		331,
		337,
		347,
		349,
		353,
		359,
		367,
		373,
		379,
		383,
		389,
		397,
		401,
		409,
		419,
		421,
		431,
		433,
		439,
		443,
		449,
		457,
		461,
		463,
		467,
		479,
		487,
		491,
		499,
		503,
		509,
		521,
		523,
		541,
		547,
		557,
		563,
		569,
		571,
		577,
		587,
		593,
		599,
		601,
		607,
		613,
		617,
		619,
		631,
		641,
		643,
		647,
		653,
		659,
		661,
		673,
		677,
		683,
		691,
		701,
		709,
		719,
		727
	}));
}

PrimeNumberSequenceGenerator::PrimeNumberSequenceGenerator() {
}

$Class* PrimeNumberSequenceGenerator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::classInfo$.name)) {
			return PrimeNumberSequenceGenerator$$Lambda$lambda$generateSequence$0::load$(name, initialize);
		}
	}
	$loadClass(PrimeNumberSequenceGenerator, name, initialize, &_PrimeNumberSequenceGenerator_ClassInfo_, clinit$PrimeNumberSequenceGenerator, allocate$PrimeNumberSequenceGenerator);
	return class$;
}

$Class* PrimeNumberSequenceGenerator::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
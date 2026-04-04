#include <HeadlessSizeSequence.h>
#include <javax/swing/SizeSequence.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeSequence = ::javax::swing::SizeSequence;

void HeadlessSizeSequence::init$() {
}

void HeadlessSizeSequence::main($StringArray* args) {
	$useLocalObjectStack();
	$var($SizeSequence, ss, nullptr);
	$assign(ss, $new($SizeSequence));
	$assign(ss, $new($SizeSequence, 10));
	$assign(ss, $new($SizeSequence, 10, 10));
	$assign(ss, $new($SizeSequence, $$new($ints, {
		1,
		2,
		3,
		4,
		5,
		6,
		76,
		9
	})));
}

HeadlessSizeSequence::HeadlessSizeSequence() {
}

$Class* HeadlessSizeSequence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessSizeSequence, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessSizeSequence, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessSizeSequence",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessSizeSequence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessSizeSequence);
	});
	return class$;
}

$Class* HeadlessSizeSequence::class$ = nullptr;
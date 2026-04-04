#include <HeadlessSizeRequirements.h>
#include <javax/swing/SizeRequirements.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;

void HeadlessSizeRequirements::init$() {
}

void HeadlessSizeRequirements::main($StringArray* args) {
	$var($SizeRequirements, sr, nullptr);
	$assign(sr, $new($SizeRequirements));
	$assign(sr, $new($SizeRequirements, 20, 20, 20, (float)1.0));
}

HeadlessSizeRequirements::HeadlessSizeRequirements() {
}

$Class* HeadlessSizeRequirements::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessSizeRequirements, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessSizeRequirements, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessSizeRequirements",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessSizeRequirements, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessSizeRequirements);
	});
	return class$;
}

$Class* HeadlessSizeRequirements::class$ = nullptr;
#include <nontestng/java/time/chrono/Bug8178823.h>
#include <java/time/chrono/HijrahChronology.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HijrahChronology = ::java::time::chrono::HijrahChronology;

namespace nontestng {
	namespace java {
		namespace time {
			namespace chrono {

void Bug8178823::init$() {
}

void Bug8178823::main($StringArray* args) {
	$init($HijrahChronology);
	$nc($HijrahChronology::INSTANCE)->isLeapYear(2017);
}

Bug8178823::Bug8178823() {
}

$Class* Bug8178823::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8178823, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8178823, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"nontestng.java.time.chrono.Bug8178823",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8178823, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8178823);
	});
	return class$;
}

$Class* Bug8178823::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // nontestng
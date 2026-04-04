#include <Bug8132125.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

void Bug8132125::init$() {
}

void Bug8132125::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Locale, deCH, $new($Locale, "de"_s, "CH"_s));
	$var($NumberFormat, nf, $NumberFormat::getInstance(deCH));
	$var($String, expected, u"54’839’483.142"_s);
	$var($String, actual, $nc(nf)->format(5.48394831415E7));
	if (!$nc(actual)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"incorrect for de_CH: "_s, expected, " vs. actual "_s, actual}));
	}
}

Bug8132125::Bug8132125() {
}

$Class* Bug8132125::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8132125, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8132125, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug8132125",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8132125, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8132125);
	});
	return class$;
}

$Class* Bug8132125::class$ = nullptr;
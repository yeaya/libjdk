#include <TestPeruCurrencyFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

void TestPeruCurrencyFormat::init$() {
}

void TestPeruCurrencyFormat::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, expected, "S/.1,234.56"_s);
	$var($NumberFormat, currencyFmt, $NumberFormat::getCurrencyInstance($$new($Locale, "es"_s, "PE"_s)));
	$var($String, s, $nc(currencyFmt)->format(1234.56));
	if (!$nc(s)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"Currency format for Peru failed, expected "_s, expected, ", got "_s, s}));
	}
}

TestPeruCurrencyFormat::TestPeruCurrencyFormat() {
}

$Class* TestPeruCurrencyFormat::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestPeruCurrencyFormat, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestPeruCurrencyFormat, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestPeruCurrencyFormat",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestPeruCurrencyFormat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPeruCurrencyFormat);
	});
	return class$;
}

$Class* TestPeruCurrencyFormat::class$ = nullptr;
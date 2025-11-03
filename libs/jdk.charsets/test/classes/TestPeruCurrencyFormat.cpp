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

$MethodInfo _TestPeruCurrencyFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestPeruCurrencyFormat::*)()>(&TestPeruCurrencyFormat::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestPeruCurrencyFormat::main))},
	{}
};

$ClassInfo _TestPeruCurrencyFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestPeruCurrencyFormat",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestPeruCurrencyFormat_MethodInfo_
};

$Object* allocate$TestPeruCurrencyFormat($Class* clazz) {
	return $of($alloc(TestPeruCurrencyFormat));
}

void TestPeruCurrencyFormat::init$() {
}

void TestPeruCurrencyFormat::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(TestPeruCurrencyFormat, name, initialize, &_TestPeruCurrencyFormat_ClassInfo_, allocate$TestPeruCurrencyFormat);
	return class$;
}

$Class* TestPeruCurrencyFormat::class$ = nullptr;
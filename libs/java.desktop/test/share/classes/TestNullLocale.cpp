#include <TestNullLocale.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef GERMAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $JComponent = ::javax::swing::JComponent;

void TestNullLocale::init$() {
}

void TestNullLocale::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Locale, defaultLocale, $JComponent::getDefaultLocale());
	$init($Locale);
	$JComponent::setDefaultLocale($Locale::GERMAN);
	$JComponent::setDefaultLocale(nullptr);
	$var($Locale, currentLocale, $JComponent::getDefaultLocale());
	if (defaultLocale != currentLocale) {
		$nc($System::out)->println($$str({"currentLocale "_s, currentLocale}));
		$System::out->println($$str({"defaultLocale "_s, defaultLocale}));
		$throwNew($RuntimeException, "locale not reset to default locale"_s);
	}
}

TestNullLocale::TestNullLocale() {
}

$Class* TestNullLocale::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestNullLocale, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestNullLocale, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestNullLocale",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestNullLocale, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestNullLocale);
	});
	return class$;
}

$Class* TestNullLocale::class$ = nullptr;
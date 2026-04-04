#include <bug6622002.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;

void bug6622002::init$() {
}

void bug6622002::main($StringArray* args) {
	$load(bug6622002);
	$beforeCallerSensitive();
	if (createPrivateValue() == nullptr) {
		$throwNew($RuntimeException, "The private value unexpectedly wasn\'t created"_s);
	}
	if (createPublicValue() == nullptr) {
		$throwNew($RuntimeException, "The public value unexpectedly wasn\'t created"_s);
	}
	$System::setSecurityManager($$new($SecurityManager));
	if (createPrivateValue() != nullptr) {
		$throwNew($RuntimeException, "The private value was unexpectedly created"_s);
	}
	if (createPublicValue() == nullptr) {
		$throwNew($RuntimeException, "The public value unexpectedly wasn\'t created"_s);
	}
}

$Object* bug6622002::createPrivateValue() {
	return $$new($UIDefaults$ProxyLazyValue, "javax.swing.MultiUIDefaults"_s)->createValue(nullptr);
}

$Object* bug6622002::createPublicValue() {
	return $$new($UIDefaults$ProxyLazyValue, "javax.swing.UIDefaults"_s)->createValue(nullptr);
}

bug6622002::bug6622002() {
}

$Class* bug6622002::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6622002, init$, void)},
		{"createPrivateValue", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6622002, createPrivateValue, $Object*)},
		{"createPublicValue", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6622002, createPublicValue, $Object*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6622002, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6622002",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6622002, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6622002);
	});
	return class$;
}

$Class* bug6622002::class$ = nullptr;
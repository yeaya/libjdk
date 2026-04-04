#include <HeadlessPopupFactory.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupFactory = ::javax::swing::PopupFactory;

void HeadlessPopupFactory::init$() {
}

void HeadlessPopupFactory::main($StringArray* args) {
	$var($PopupFactory, msm, $PopupFactory::getSharedInstance());
}

HeadlessPopupFactory::HeadlessPopupFactory() {
}

$Class* HeadlessPopupFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessPopupFactory, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessPopupFactory, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessPopupFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessPopupFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessPopupFactory);
	});
	return class$;
}

$Class* HeadlessPopupFactory::class$ = nullptr;
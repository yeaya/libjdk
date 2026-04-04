#include <bug5073047.h>
#include <bug5073047$MyTheme.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

using $bug5073047$MyTheme = ::bug5073047$MyTheme;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug5073047::init$() {
}

void bug5073047::main($StringArray* args) {
	$useLocalObjectStack();
	$var($bug5073047$MyTheme, theme, $new($bug5073047$MyTheme));
	$MetalLookAndFeel::setCurrentTheme(theme);
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	if (!$equals($UIManager::get("Button.font"_s), theme->ctf)) {
		$throwNew($RuntimeException, "Unexpected font"_s);
	}
}

bug5073047::bug5073047() {
}

$Class* bug5073047::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug5073047, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug5073047, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5073047$MyTheme", "bug5073047", "MyTheme", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug5073047",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug5073047$MyTheme"
	};
	$loadClass(bug5073047, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5073047);
	});
	return class$;
}

$Class* bug5073047::class$ = nullptr;
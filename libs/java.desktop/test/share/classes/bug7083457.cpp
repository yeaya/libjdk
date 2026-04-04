#include <bug7083457.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

void bug7083457::init$() {
}

void bug7083457::main($StringArray* args) {
	$useLocalObjectStack();
	$var($DefaultCaret, caret, $new($DefaultCaret));
	for (int32_t i = 0; i < 10; ++i) {
		bool active = (i % 2 == 0);
		caret->setVisible(active);
		if (caret->isActive() != active) {
			$throwNew($RuntimeException, $$str({"caret.isActive() does not equal: "_s, $$str(active)}));
		}
	}
}

bug7083457::bug7083457() {
}

$Class* bug7083457::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7083457, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7083457, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7083457",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug7083457, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7083457);
	});
	return class$;
}

$Class* bug7083457::class$ = nullptr;
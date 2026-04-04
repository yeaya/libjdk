#include <bug7071166$1.h>
#include <bug7071166.h>
#include <java/awt/Container.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <jcpp.h>

#undef POSITIONS
#undef RELATED

using $bug7071166 = ::bug7071166;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

void bug7071166$1::init$() {
}

void bug7071166$1::run() {
	$useLocalObjectStack();
	$var($LayoutStyle, layoutStyle, $LayoutStyle::getInstance());
	$nc($System::out)->println($$str({"LayoutStyle: "_s, layoutStyle}));
	$init($bug7071166);
	for (int32_t i = 0; i < $nc($bug7071166::POSITIONS)->length; ++i) {
		int32_t position = $bug7071166::POSITIONS->get(i);
		try {
			$var($JComponent, var$0, $new($JButton));
			$var($JComponent, var$1, $new($JButton));
			$init($LayoutStyle$ComponentPlacement);
			$var($LayoutStyle$ComponentPlacement, var$2, $LayoutStyle$ComponentPlacement::RELATED);
			$nc(layoutStyle)->getPreferredGap(var$0, var$1, var$2, position, $$new($Container));
			if (i > 3) {
				$throwNew($RuntimeException, $$str({"IllegalArgumentException is not thrown for position "_s, $$str(position)}));
			}
		} catch ($IllegalArgumentException& e) {
			if (i <= 3) {
				$throwNew($RuntimeException, $$str({"IllegalArgumentException is thrown for position "_s, $$str(position)}));
			}
		}
	}
}

bug7071166$1::bug7071166$1() {
}

$Class* bug7071166$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7071166$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7071166$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7071166",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7071166$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7071166$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7071166"
	};
	$loadClass(bug7071166$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7071166$1);
	});
	return class$;
}

$Class* bug7071166$1::class$ = nullptr;
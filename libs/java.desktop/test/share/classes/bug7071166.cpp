#include <bug7071166.h>
#include <bug7071166$1.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef POSITIONS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug7071166$1 = ::bug7071166$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$ints* bug7071166::POSITIONS = nullptr;

void bug7071166::init$() {
}

void bug7071166::main($StringArray* args) {
	$init(bug7071166);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
		{
			try {
				$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
			} catch ($UnsupportedLookAndFeelException& ignored) {
				continue;
			}
			$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(lookAndFeelInfo)->getName())}));
			$SwingUtilities::invokeAndWait($$new($bug7071166$1));
			$System::out->println("passed"_s);
		}
	}
}

void bug7071166::clinit$($Class* clazz) {
	$assignStatic(bug7071166::POSITIONS, $new($ints, {
		1,
		3,
		5,
		7,
		2,
		4,
		6,
		8,
		123,
		-456
	}));
}

bug7071166::bug7071166() {
}

$Class* bug7071166::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"POSITIONS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7071166, POSITIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7071166, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7071166, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7071166$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7071166",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7071166$1"
	};
	$loadClass(bug7071166, name, initialize, &classInfo$$, bug7071166::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7071166);
	});
	return class$;
}

$Class* bug7071166::class$ = nullptr;
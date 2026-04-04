#include <bug4235420.h>
#include <bug4235420$1.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LF

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4235420$1 = ::bug4235420$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

void bug4235420::init$() {
}

void bug4235420::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
		{
			try {
				$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
			} catch ($UnsupportedLookAndFeelException& ignored) {
				$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(LF)->getClassName())}));
			} catch ($ClassNotFoundException& e) {
				$throwNew($RuntimeException, e);
			} catch ($InstantiationException& e) {
				$throwNew($RuntimeException, e);
			} catch ($IllegalAccessException& e) {
				$throwNew($RuntimeException, e);
			}
			$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(LF)->getClassName())}));
			bool var$0 = "Nimbus"_s->equals($($$nc($UIManager::getLookAndFeel())->getName()));
			if (var$0 || "GTK"_s->equals($($$nc($UIManager::getLookAndFeel())->getName()))) {
				$System::out->println("The test is skipped for Nimbus and GTK"_s);
				continue;
			}
			$SwingUtilities::invokeAndWait($$new($bug4235420$1));
		}
	}
}

bug4235420::bug4235420() {
}

$Class* bug4235420::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4235420, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4235420, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4235420$Table", "bug4235420", "Table", $PRIVATE | $STATIC},
		{"bug4235420$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4235420",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4235420$Table,bug4235420$1"
	};
	$loadClass(bug4235420, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4235420);
	});
	return class$;
}

$Class* bug4235420::class$ = nullptr;
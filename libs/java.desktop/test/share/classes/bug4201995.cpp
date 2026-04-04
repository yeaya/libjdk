#include <bug4201995.h>
#include <bug4201995$1.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LF

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4201995$1 = ::bug4201995$1;
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

void bug4201995::init$() {
}

void bug4201995::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
		{
			try {
				$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
			} catch ($UnsupportedLookAndFeelException& ignored) {
				$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(LF)->getClassName())}));
				continue;
			} catch ($ClassNotFoundException& e) {
				$throwNew($RuntimeException, e);
			} catch ($InstantiationException& e) {
				$throwNew($RuntimeException, e);
			} catch ($IllegalAccessException& e) {
				$throwNew($RuntimeException, e);
			}
			$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(LF)->getClassName())}));
			$SwingUtilities::invokeAndWait($$new($bug4201995$1));
		}
	}
}

bug4201995::bug4201995() {
}

$Class* bug4201995::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4201995, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4201995, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4201995$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4201995",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4201995$1"
	};
	$loadClass(bug4201995, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4201995);
	});
	return class$;
}

$Class* bug4201995::class$ = nullptr;
#include <TestJInternalFrameIconify.h>
#include <TestJInternalFrameIconify$1.h>
#include <TestJInternalFrameIconify$2.h>
#include <java/awt/Robot.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $TestJInternalFrameIconify$1 = ::TestJInternalFrameIconify$1;
using $TestJInternalFrameIconify$2 = ::TestJInternalFrameIconify$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$JDesktopPane* TestJInternalFrameIconify::desktopPane = nullptr;
$JFrame* TestJInternalFrameIconify::frame = nullptr;
$Robot* TestJInternalFrameIconify::robot = nullptr;
$volatile($String*) TestJInternalFrameIconify::errorMessage = nullptr;

void TestJInternalFrameIconify::init$() {
}

void TestJInternalFrameIconify::main($StringArray* args) {
	$init(TestJInternalFrameIconify);
	$useLocalObjectStack();
	$assignStatic(TestJInternalFrameIconify::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				if (tryLookAndFeel(lookAndFeelString)) {
					createUI(lookAndFeelString);
					$nc(TestJInternalFrameIconify::robot)->waitForIdle();
					executeTest(lookAndFeelString);
				}
			}
		}
	}
	if (!""_s->equals(TestJInternalFrameIconify::errorMessage)) {
		$throwNew($RuntimeException, TestJInternalFrameIconify::errorMessage);
	}
}

bool TestJInternalFrameIconify::tryLookAndFeel($String* lookAndFeelString) {
	$init(TestJInternalFrameIconify);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
		return true;
	} catch ($UnsupportedLookAndFeelException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($ClassNotFoundException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($InstantiationException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($IllegalAccessException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	}
	$shouldNotReachHere();
}

void TestJInternalFrameIconify::createUI($String* lookAndFeelString) {
	$init(TestJInternalFrameIconify);
	$SwingUtilities::invokeAndWait($$new($TestJInternalFrameIconify$1, lookAndFeelString));
}

void TestJInternalFrameIconify::executeTest($String* lookAndFeelString) {
	$init(TestJInternalFrameIconify);
	$SwingUtilities::invokeAndWait($$new($TestJInternalFrameIconify$2, lookAndFeelString));
}

void TestJInternalFrameIconify::clinit$($Class* clazz) {
	$assignStatic(TestJInternalFrameIconify::errorMessage, ""_s);
}

TestJInternalFrameIconify::TestJInternalFrameIconify() {
}

$Class* TestJInternalFrameIconify::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"desktopPane", "Ljavax/swing/JDesktopPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestJInternalFrameIconify, desktopPane)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJInternalFrameIconify, frame)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJInternalFrameIconify, robot)},
		{"errorMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJInternalFrameIconify, errorMessage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJInternalFrameIconify, init$, void)},
		{"createUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJInternalFrameIconify, createUI, void, $String*), "java.lang.Exception"},
		{"executeTest", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJInternalFrameIconify, executeTest, void, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJInternalFrameIconify, main, void, $StringArray*), "java.lang.Exception"},
		{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJInternalFrameIconify, tryLookAndFeel, bool, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJInternalFrameIconify$2", nullptr, nullptr, 0},
		{"TestJInternalFrameIconify$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJInternalFrameIconify",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJInternalFrameIconify$2,TestJInternalFrameIconify$1"
	};
	$loadClass(TestJInternalFrameIconify, name, initialize, &classInfo$$, TestJInternalFrameIconify::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJInternalFrameIconify);
	});
	return class$;
}

$Class* TestJInternalFrameIconify::class$ = nullptr;
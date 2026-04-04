#include <NimbusGlueTest.h>
#include <NimbusGlueTest$1.h>
#include <NimbusGlueTest$2.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $NimbusGlueTest$1 = ::NimbusGlueTest$1;
using $NimbusGlueTest$2 = ::NimbusGlueTest$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$JFrame* NimbusGlueTest::frame = nullptr;
$Robot* NimbusGlueTest::robot = nullptr;
$volatile($String*) NimbusGlueTest::errorMessage = nullptr;
$JToolBar* NimbusGlueTest::bar = nullptr;

void NimbusGlueTest::init$() {
}

void NimbusGlueTest::main($StringArray* args) {
	$init(NimbusGlueTest);
	$useLocalObjectStack();
	$assignStatic(NimbusGlueTest::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				if (tryLookAndFeel(lookAndFeelString)) {
					createUI();
					performTest();
					$nc(NimbusGlueTest::robot)->waitForIdle();
				}
			}
		}
	}
	if (!""_s->equals(NimbusGlueTest::errorMessage)) {
		$throwNew($RuntimeException, NimbusGlueTest::errorMessage);
	}
}

bool NimbusGlueTest::tryLookAndFeel($String* lookAndFeelString) {
	$init(NimbusGlueTest);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
		return true;
	} catch ($UnsupportedLookAndFeelException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($ClassNotFoundException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($InstantiationException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($IllegalAccessException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	}
	$shouldNotReachHere();
}

void NimbusGlueTest::performTest() {
	$init(NimbusGlueTest);
	$SwingUtilities::invokeAndWait($$new($NimbusGlueTest$1));
}

void NimbusGlueTest::createUI() {
	$init(NimbusGlueTest);
	$SwingUtilities::invokeAndWait($$new($NimbusGlueTest$2));
}

$JButton* NimbusGlueTest::createButton(int32_t id) {
	$init(NimbusGlueTest);
	$useLocalObjectStack();
	$var($JButton, b, $new($JButton, $$str({"B: "_s, $$str(id)})));
	b->setPreferredSize($$new($Dimension, 60, $nc($(b->getPreferredSize()))->height));
	return b;
}

void NimbusGlueTest::clinit$($Class* clazz) {
	$assignStatic(NimbusGlueTest::errorMessage, ""_s);
}

NimbusGlueTest::NimbusGlueTest() {
}

$Class* NimbusGlueTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusGlueTest, frame)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusGlueTest, robot)},
		{"errorMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(NimbusGlueTest, errorMessage)},
		{"bar", "Ljavax/swing/JToolBar;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusGlueTest, bar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NimbusGlueTest, init$, void)},
		{"createButton", "(I)Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticMethod(NimbusGlueTest, createButton, $JButton*, int32_t)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(NimbusGlueTest, createUI, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NimbusGlueTest, main, void, $StringArray*), "java.lang.Exception"},
		{"performTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(NimbusGlueTest, performTest, void), "java.lang.Exception"},
		{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(NimbusGlueTest, tryLookAndFeel, bool, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NimbusGlueTest$2", nullptr, nullptr, 0},
		{"NimbusGlueTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NimbusGlueTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NimbusGlueTest$2,NimbusGlueTest$1"
	};
	$loadClass(NimbusGlueTest, name, initialize, &classInfo$$, NimbusGlueTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusGlueTest);
	});
	return class$;
}

$Class* NimbusGlueTest::class$ = nullptr;
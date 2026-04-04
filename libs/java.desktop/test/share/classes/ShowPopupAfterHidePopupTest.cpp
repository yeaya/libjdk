#include <ShowPopupAfterHidePopupTest.h>
#include <ShowPopupAfterHidePopupTest$1.h>
#include <ShowPopupAfterHidePopupTest$2.h>
#include <ShowPopupAfterHidePopupTest$3.h>
#include <java/awt/Robot.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest$1 = ::ShowPopupAfterHidePopupTest$1;
using $ShowPopupAfterHidePopupTest$2 = ::ShowPopupAfterHidePopupTest$2;
using $ShowPopupAfterHidePopupTest$3 = ::ShowPopupAfterHidePopupTest$3;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$JFrame* ShowPopupAfterHidePopupTest::frame = nullptr;
$JComboBox* ShowPopupAfterHidePopupTest::comboBox = nullptr;
bool ShowPopupAfterHidePopupTest::popupIsVisible = false;

void ShowPopupAfterHidePopupTest::init$() {
}

void ShowPopupAfterHidePopupTest::main($StringArray* args) {
	$init(ShowPopupAfterHidePopupTest);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($ShowPopupAfterHidePopupTest$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($ShowPopupAfterHidePopupTest$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($ShowPopupAfterHidePopupTest$3));
	if (!ShowPopupAfterHidePopupTest::popupIsVisible) {
		$throwNew($RuntimeException, "Calling hidePopup() affected the next call to showPopup()."_s);
	}
}

void ShowPopupAfterHidePopupTest::clinit$($Class* clazz) {
	$assignStatic(ShowPopupAfterHidePopupTest::frame, nullptr);
	$assignStatic(ShowPopupAfterHidePopupTest::comboBox, nullptr);
	ShowPopupAfterHidePopupTest::popupIsVisible = false;
}

ShowPopupAfterHidePopupTest::ShowPopupAfterHidePopupTest() {
}

$Class* ShowPopupAfterHidePopupTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ShowPopupAfterHidePopupTest, frame)},
		{"comboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(ShowPopupAfterHidePopupTest, comboBox)},
		{"popupIsVisible", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ShowPopupAfterHidePopupTest, popupIsVisible)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShowPopupAfterHidePopupTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ShowPopupAfterHidePopupTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShowPopupAfterHidePopupTest$3", nullptr, nullptr, 0},
		{"ShowPopupAfterHidePopupTest$2", nullptr, nullptr, 0},
		{"ShowPopupAfterHidePopupTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ShowPopupAfterHidePopupTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ShowPopupAfterHidePopupTest$3,ShowPopupAfterHidePopupTest$2,ShowPopupAfterHidePopupTest$1"
	};
	$loadClass(ShowPopupAfterHidePopupTest, name, initialize, &classInfo$$, ShowPopupAfterHidePopupTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ShowPopupAfterHidePopupTest);
	});
	return class$;
}

$Class* ShowPopupAfterHidePopupTest::class$ = nullptr;
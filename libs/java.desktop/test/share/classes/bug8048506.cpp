#include <bug8048506.h>
#include <bug8048506$1.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8048506$1 = ::bug8048506$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug8048506::init$() {
}

void bug8048506::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug8048506$1));
	$nc($System::out)->println("The test passed"_s);
}

void bug8048506::createAndShowGUI() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame, "bug8048506"_s));
	frame->setSize(400, 400);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setVisible(true);
	$var($PopupFactory, factory, $PopupFactory::getSharedInstance());
	$var($Popup, popup1, $nc(factory)->getPopup(frame, $$new($JLabel, "Popup with owner"_s), 100, 100));
	$nc(popup1)->show();
	$var($Popup, popup2, factory->getPopup(nullptr, $$new($JLabel, "Popup without owner"_s), 200, 200));
	$nc(popup2)->show();
}

bug8048506::bug8048506() {
}

$Class* bug8048506::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8048506, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8048506, createAndShowGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8048506, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8048506$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8048506",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8048506$1"
	};
	$loadClass(bug8048506, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8048506);
	});
	return class$;
}

$Class* bug8048506::class$ = nullptr;
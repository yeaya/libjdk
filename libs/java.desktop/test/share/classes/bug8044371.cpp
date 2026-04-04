#include <bug8044371.h>
#include <SwingTest.h>
#include <bug8044371$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SPLIT
#undef VERTICAL_SCROLLBAR_ALWAYS

using $SwingTest = ::SwingTest;
using $bug8044371$1 = ::bug8044371$1;
using $Rectangle = ::java::awt::Rectangle;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug8044371::main($StringArray* args) {
	$init(bug8044371);
	$load($MetalLookAndFeel);
	$UIManager::setLookAndFeel($($MetalLookAndFeel::class$->getName()));
	$SwingTest::start(bug8044371::class$);
}

void bug8044371::init$($JFrame* frame) {
	$useLocalObjectStack();
	this->lastAdjust = 0;
	this->initialAdjust = 0;
	$var($JPanel, p, $new($JPanel));
	$var($JScrollPane, jScrollPane, $new($JScrollPane, $$new($bug8044371$1, this), $JScrollPane::VERTICAL_SCROLLBAR_ALWAYS, $JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS));
	$$nc(jScrollPane->getViewport())->scrollRectToVisible($$new($Rectangle, 1500, 1500, 0, 0));
	$$nc(jScrollPane->getVerticalScrollBar())->addAdjustmentListener(this);
	$set(this, sptPane, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, jScrollPane, p));
	this->sptPane->setDividerLocation(90);
	$nc(this->sptPane)->setOneTouchExpandable(true);
	$$nc($nc(frame)->getContentPane())->add(this->sptPane);
}

void bug8044371::adjustmentValueChanged($AdjustmentEvent* e) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"adjustmentValueChanged: "_s, $$str($nc(e)->getValue())}));
	this->lastAdjust = e->getValue();
}

void bug8044371::step1() {
	if (this->lastAdjust == 0) {
		$throwNew($RuntimeException, "Adjustment == 0"_s);
	}
	this->initialAdjust = this->lastAdjust;
	$nc(this->sptPane)->setDividerLocation(0);
}

void bug8044371::step2() {
	$useLocalObjectStack();
	if (this->lastAdjust < this->initialAdjust) {
		$throwNew($RuntimeException, $$str({"Failed: Adjustment decreased: "_s, $$str(this->lastAdjust)}));
	}
	$nc(this->sptPane)->setDividerLocation(90);
}

void bug8044371::step3() {
	$useLocalObjectStack();
	if (this->lastAdjust < this->initialAdjust) {
		$throwNew($RuntimeException, $$str({"Failed: Adjustment decreased: "_s, $$str(this->lastAdjust)}));
	}
}

bug8044371::bug8044371() {
}

$Class* bug8044371::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sptPane", "Ljavax/swing/JSplitPane;", nullptr, 0, $field(bug8044371, sptPane)},
		{"lastAdjust", "I", nullptr, 0, $field(bug8044371, lastAdjust)},
		{"initialAdjust", "I", nullptr, 0, $field(bug8044371, initialAdjust)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(bug8044371, init$, void, $JFrame*)},
		{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8044371, adjustmentValueChanged, void, $AdjustmentEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8044371, main, void, $StringArray*), "java.lang.Throwable"},
		{"step1", "()V", nullptr, $PUBLIC, $virtualMethod(bug8044371, step1, void)},
		{"step2", "()V", nullptr, $PUBLIC, $virtualMethod(bug8044371, step2, void)},
		{"step3", "()V", nullptr, $PUBLIC, $virtualMethod(bug8044371, step3, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8044371$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8044371",
		"java.lang.Object",
		"java.awt.event.AdjustmentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8044371$1"
	};
	$loadClass(bug8044371, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8044371);
	});
	return class$;
}

$Class* bug8044371::class$ = nullptr;
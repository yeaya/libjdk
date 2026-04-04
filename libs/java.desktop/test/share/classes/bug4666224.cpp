#include <bug4666224.h>
#include <Sysout4bug4666224.h>
#include <bug4666224$1.h>
#include <bug4666224$ChangeLayoutAction.h>
#include <bug4666224$DumpAction.h>
#include <bug4666224$RotateAction.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef SCROLL_TAB_LAYOUT
#undef TOP
#undef WHEN_IN_FOCUSED_WINDOW

using $Sysout4bug4666224 = ::Sysout4bug4666224;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $bug4666224$1 = ::bug4666224$1;
using $bug4666224$ChangeLayoutAction = ::bug4666224$ChangeLayoutAction;
using $bug4666224$DumpAction = ::bug4666224$DumpAction;
using $bug4666224$RotateAction = ::bug4666224$RotateAction;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4666224$$Lambda$lambda$new$0 : public $Runnable {
	$class(bug4666224$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4666224* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	bug4666224* inst$ = nullptr;
};
$Class* bug4666224$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4666224$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4666224;)V", nullptr, $PUBLIC, $method(bug4666224$$Lambda$lambda$new$0, init$, void, bug4666224*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4666224$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4666224$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4666224$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4666224$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* bug4666224$$Lambda$lambda$new$0::class$ = nullptr;

$ints* bug4666224::placements = nullptr;

void bug4666224::init$() {
	$JApplet::init$();
	$EventQueue::invokeAndWait($$new(bug4666224$$Lambda$lambda$new$0, this));
}

void bug4666224::init() {
	$useLocalObjectStack();
	$var($StringArray2, instructionsSet, $new($StringArray2, {
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. Click on any of the tabs, focus indicator is visible"_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'C\' to change the tab layout to WRAP_TAB_LAYOUT "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'R\' to align the tabs to the right side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'B\' to align the tabs to the bottom side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'L\' to align the tabs to the left side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'T\' to align the tabs to the top side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'B\' to align the tabs to the bottom side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'R\' to align the tabs to the right side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		})
	}));
	$var($StringArray, exceptionsSet, $new($StringArray, {
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the TOP of the window"_s,
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the RIGHT of the window"_s,
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the BOTTOM of the window"_s,
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the LEFT of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the LEFT of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the TOP of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the BOTTOM of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the RIGHT of the window"_s
	}));
	$Sysout4bug4666224::setInstructionsWithExceptions(instructionsSet, exceptionsSet);
}

void bug4666224::start() {
}

void bug4666224::destroy() {
	if ($Sysout4bug4666224::failStatus()) {
		$var($String, failMsg, $Sysout4bug4666224::getFailureMessages());
		$assign(failMsg, $nc(failMsg)->replace(u'\n', u' '));
		$throwNew($RuntimeException, failMsg);
	}
}

$InputMap* bug4666224::createInputMap() {
	$useLocalObjectStack();
	return $LookAndFeel::makeComponentInputMap($(getRootPane()), $$new($ObjectArray, {
		"R"_s,
		"right"_s,
		"L"_s,
		"left"_s,
		"T"_s,
		"top"_s,
		"B"_s,
		"bottom"_s,
		"C"_s,
		"changeLayout"_s,
		"D"_s,
		"dump"_s
	}));
}

$ActionMap* bug4666224::createActionMap() {
	$useLocalObjectStack();
	$var($ActionMap, map, $new($ActionMap));
	map->put("right"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::RIGHT));
	map->put("left"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::LEFT));
	map->put("top"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::TOP));
	map->put("bottom"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::BOTTOM));
	map->put("changeLayout"_s, $$new($bug4666224$ChangeLayoutAction, this));
	map->put("dump"_s, $$new($bug4666224$DumpAction, this));
	return map;
}

void bug4666224::lambda$new$0() {
	$useLocalObjectStack();
	$set(this, tabPane, $new($JTabbedPane));
	this->tabPane->addMouseListener($$new($bug4666224$1, this));
	$var($InputMap, inputMap, createInputMap());
	$SwingUtilities::replaceUIInputMap($(getRootPane()), $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
	$var($ActionMap, actionMap, createActionMap());
	$SwingUtilities::replaceUIActionMap($(getRootPane()), actionMap);
	$nc(this->tabPane)->setTabPlacement($JTabbedPane::TOP);
	$nc(this->tabPane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
	$var($JPanel, panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Zero"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number One"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Two"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Three"_s, $$new($JColorChooser));
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Four"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Five"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Six"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Seven"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Eight"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Nine"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Ten"_s, panel);
	$set(this, mainPanel, $new($JPanel));
	this->mainPanel->add(this->tabPane);
	$$nc(getContentPane())->add(this->mainPanel);
	$nc(this->tabPane)->requestFocus();
}

void bug4666224::clinit$($Class* clazz) {
	$assignStatic(bug4666224::placements, $new($ints, {
		$JTabbedPane::LEFT,
		$JTabbedPane::RIGHT,
		$JTabbedPane::TOP,
		$JTabbedPane::BOTTOM
	}));
}

bug4666224::bug4666224() {
}

$Class* bug4666224::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4666224$$Lambda$lambda$new$0")) {
			return bug4666224$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"placements", "[I", nullptr, $STATIC | $FINAL, $staticField(bug4666224, placements)},
		{"tabPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE, $field(bug4666224, tabPane)},
		{"mainPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(bug4666224, mainPanel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4666224, init$, void), "java.lang.Exception"},
		{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED, $virtualMethod(bug4666224, createActionMap, $ActionMap*)},
		{"createInputMap", "()Ljavax/swing/InputMap;", nullptr, $PROTECTED, $virtualMethod(bug4666224, createInputMap, $InputMap*)},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(bug4666224, destroy, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4666224, init, void)},
		{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4666224, lambda$new$0, void)},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(bug4666224, start, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4666224$DumpAction", "bug4666224", "DumpAction", $PRIVATE},
		{"bug4666224$ChangeLayoutAction", "bug4666224", "ChangeLayoutAction", $PRIVATE},
		{"bug4666224$RotateAction", "bug4666224", "RotateAction", $PRIVATE},
		{"bug4666224$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4666224",
		"javax.swing.JApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4666224$DumpAction,bug4666224$ChangeLayoutAction,bug4666224$RotateAction,bug4666224$1"
	};
	$loadClass(bug4666224, name, initialize, &classInfo$$, bug4666224::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4666224));
	});
	return class$;
}

$Class* bug4666224::class$ = nullptr;
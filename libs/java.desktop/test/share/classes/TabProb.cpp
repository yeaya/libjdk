#include <TabProb.h>
#include <TabProb$1.h>
#include <TabProb$FixLayout.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef TOP

using $TabProb$1 = ::TabProb$1;
using $TabProb$FixLayout = ::TabProb$FixLayout;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class TabProb$$Lambda$lambda$test$0 : public $Runnable {
	$class(TabProb$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TabProb::lambda$test$0();
	}
};
$Class* TabProb$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TabProb$$Lambda$lambda$test$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TabProb$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TabProb$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TabProb$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TabProb$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* TabProb$$Lambda$lambda$test$0::class$ = nullptr;

class TabProb$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(TabProb$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TabProb::lambda$test$1();
	}
};
$Class* TabProb$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TabProb$$Lambda$lambda$test$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TabProb$$Lambda$lambda$test$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TabProb$$Lambda$lambda$test$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TabProb$$Lambda$lambda$test$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TabProb$$Lambda$lambda$test$1$1);
	});
	return class$;
}
$Class* TabProb$$Lambda$lambda$test$1$1::class$ = nullptr;

TabProb* TabProb::tb1 = nullptr;
TabProb* TabProb::tb2 = nullptr;

void TabProb::init$(int32_t layoutPolicy) {
	$useLocalObjectStack();
	$JFrame::init$();
	$var($JTabbedPane, tabpanel, $new($JTabbedPane));
	tabpanel->setTabPlacement($JTabbedPane::TOP);
	tabpanel->setTabLayoutPolicy(layoutPolicy);
	$var($JPanel, panel, $new($JPanel, $$new($TabProb$FixLayout, this)));
	$var($JLabel, label, $new($JLabel, "Label"_s));
	$init($Color);
	label->setBorder($($BorderFactory::createLineBorder($Color::green, 3)));
	panel->add(label);
	tabpanel->add("TEST"_s, panel);
	$init($BorderLayout);
	add(tabpanel, $BorderLayout::CENTER);
	setUndecorated(true);
	setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
}

void TabProb::main($StringArray* args) {
	$init(TabProb);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
			$UIManager::setLookAndFeel($(laf->getClassName()));
			test();
			$System::out->println($$str({"Test passed for LookAndFeel "_s, $(laf->getClassName())}));
		}
	}
}

void TabProb::test() {
	$init(TabProb);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($TabProb$1));
	double tb1height = $$nc($nc(TabProb::tb1)->getPreferredSize())->getHeight();
	double tb2height = $$nc($nc(TabProb::tb2)->getPreferredSize())->getHeight();
	$nc($System::out)->println(tb1height);
	$System::out->println(tb2height);
	robot->waitForIdle();
	robot->delay(2000);
	$SwingUtilities::invokeAndWait($$new(TabProb$$Lambda$lambda$test$0));
	$SwingUtilities::invokeAndWait($$new(TabProb$$Lambda$lambda$test$1$1));
	if (tb1height != tb2height) {
		$throwNew($RuntimeException, "JTabbedPane preferred size calculation is wrong for SCROLL_TAB_LAYOUT"_s);
	}
}

void TabProb::lambda$test$1() {
	$init(TabProb);
	$nc(TabProb::tb2)->dispose();
}

void TabProb::lambda$test$0() {
	$init(TabProb);
	$nc(TabProb::tb1)->dispose();
}

TabProb::TabProb() {
}

$Class* TabProb::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TabProb$$Lambda$lambda$test$0")) {
			return TabProb$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals("TabProb$$Lambda$lambda$test$1$1")) {
			return TabProb$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"tb1", "LTabProb;", nullptr, $STATIC, $staticField(TabProb, tb1)},
		{"tb2", "LTabProb;", nullptr, $STATIC, $staticField(TabProb, tb2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(TabProb, init$, void, int32_t)},
		{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TabProb, lambda$test$0, void)},
		{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TabProb, lambda$test$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TabProb, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(TabProb, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TabProb$FixLayout", "TabProb", "FixLayout", 0},
		{"TabProb$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TabProb",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TabProb$FixLayout,TabProb$1"
	};
	$loadClass(TabProb, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TabProb));
	});
	return class$;
}

$Class* TabProb::class$ = nullptr;
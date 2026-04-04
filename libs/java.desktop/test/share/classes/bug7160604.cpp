#include <bug7160604.h>
#include <bug7160604$1.h>
#include <bug7160604$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/Action.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef NORTH
#undef PERPIXEL_TRANSLUCENT
#undef RED
#undef SOUTH

using $bug7160604$1 = ::bug7160604$1;
using $bug7160604$2 = ::bug7160604$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JComboBox = ::javax::swing::JComboBox;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JWindow = ::javax::swing::JWindow;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug7160604$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug7160604$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug7160604* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	bug7160604* inst$ = nullptr;
};
$Class* bug7160604$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug7160604$$Lambda$lambda$init$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7160604;)V", nullptr, $PUBLIC, $method(bug7160604$$Lambda$lambda$init$0, init$, void, bug7160604*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7160604$$Lambda$lambda$init$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug7160604$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug7160604$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7160604$$Lambda$lambda$init$0);
	});
	return class$;
}
$Class* bug7160604$$Lambda$lambda$init$0::class$ = nullptr;

void bug7160604::init$() {
	$JApplet::init$();
}

void bug7160604::init() {
	$SwingUtilities::invokeLater($$new(bug7160604$$Lambda$lambda$init$0, this));
}

void bug7160604::lambda$init$0() {
	$useLocalObjectStack();
	$init($GraphicsDevice$WindowTranslucency);
	if (!$$nc($$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice())->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT)) {
		return;
	}
	$var($JWindow, window, $new($JWindow));
	window->setLocation(200, 200);
	window->setSize(300, 300);
	$var($JLabel, label, $new($JLabel, "...click to invoke JPopupMenu"_s));
	label->setOpaque(true);
	$var($JPanel, contentPane, $new($JPanel, $$new($BorderLayout)));
	$init($Color);
	contentPane->setBorder($($BorderFactory::createLineBorder($Color::RED)));
	window->setContentPane(contentPane);
	contentPane->add(label, $BorderLayout::NORTH);
	$var($JComboBox, comboBox, $new($JComboBox, $$new($ObjectArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	})));
	contentPane->add(comboBox, $BorderLayout::SOUTH);
	$var($JPopupMenu, jPopupMenu, $new($JPopupMenu));
	jPopupMenu->add("string"_s);
	jPopupMenu->add($$new($bug7160604$1, this, "action"_s));
	jPopupMenu->add($$new($JLabel, "label"_s));
	jPopupMenu->add($$new($JMenuItem, "MenuItem"_s));
	label->addMouseListener($$new($bug7160604$2, this, jPopupMenu, label));
	window->setBackground($$new($Color, 0, 0, 0, 0));
	window->setVisible(true);
}

bug7160604::bug7160604() {
}

$Class* bug7160604::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug7160604$$Lambda$lambda$init$0")) {
			return bug7160604$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7160604, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug7160604, init, void)},
		{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug7160604, lambda$init$0, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7160604$2", nullptr, nullptr, 0},
		{"bug7160604$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7160604",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7160604$2,bug7160604$1"
	};
	$loadClass(bug7160604, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7160604));
	});
	return class$;
}

$Class* bug7160604::class$ = nullptr;
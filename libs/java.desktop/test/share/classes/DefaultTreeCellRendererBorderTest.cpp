#include <DefaultTreeCellRendererBorderTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE

using $BorderLayout = ::java::awt::BorderLayout;
using $Insets = ::java::awt::Insets;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

class DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DefaultTreeCellRendererBorderTest::lambda$main$0();
	}
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::class$ = nullptr;

class DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DefaultTreeCellRendererBorderTest::lambda$main$1();
	}
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DefaultTreeCellRendererBorderTest::lambda$main$2();
	}
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class DefaultTreeCellRendererBorderTest$$Lambda$dispose$3 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultTreeCellRendererBorderTest$$Lambda$dispose$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3);
	});
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::class$ = nullptr;

$JFrame* DefaultTreeCellRendererBorderTest::frame = nullptr;
$JTree* DefaultTreeCellRendererBorderTest::tree = nullptr;
$DefaultTreeCellRenderer* DefaultTreeCellRendererBorderTest::treeCellRenderer = nullptr;
$Robot* DefaultTreeCellRendererBorderTest::robot = nullptr;
$Insets* DefaultTreeCellRendererBorderTest::margin1 = nullptr;
$Insets* DefaultTreeCellRendererBorderTest::margin2 = nullptr;

void DefaultTreeCellRendererBorderTest::init$() {
}

void DefaultTreeCellRendererBorderTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$init(DefaultTreeCellRendererBorderTest);
		$assignStatic(DefaultTreeCellRendererBorderTest::robot, $new($Robot));
		DefaultTreeCellRendererBorderTest::robot->setAutoDelay(50);
		$SwingUtilities::invokeAndWait($$new(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0));
		$nc(DefaultTreeCellRendererBorderTest::robot)->waitForIdle();
		$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
		$UIManager::put("Tree.rendererMargins"_s, $$new($Insets, 2, 2, 2, 2));
		$SwingUtilities::invokeAndWait($$new(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1));
		$nc(DefaultTreeCellRendererBorderTest::robot)->waitForIdle();
		$UIManager::put("Tree.rendererMargins"_s, nullptr);
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
		$SwingUtilities::invokeAndWait($$new(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2));
		$nc(DefaultTreeCellRendererBorderTest::robot)->waitForIdle();
		if ($nc(DefaultTreeCellRendererBorderTest::margin1)->equals(DefaultTreeCellRendererBorderTest::margin2)) {
			$throwNew($RuntimeException, "Test Failed : NimbusLookAndFeel Border persists for MetalLookAndFeel"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(DefaultTreeCellRendererBorderTest);
		if (DefaultTreeCellRendererBorderTest::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, DefaultTreeCellRendererBorderTest::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void DefaultTreeCellRendererBorderTest::lambda$main$2() {
	$init(DefaultTreeCellRendererBorderTest);
	$SwingUtilities::updateComponentTreeUI(DefaultTreeCellRendererBorderTest::frame);
	$assignStatic(DefaultTreeCellRendererBorderTest::margin2, $nc(DefaultTreeCellRendererBorderTest::treeCellRenderer)->getInsets());
}

void DefaultTreeCellRendererBorderTest::lambda$main$1() {
	$init(DefaultTreeCellRendererBorderTest);
	$SwingUtilities::updateComponentTreeUI(DefaultTreeCellRendererBorderTest::frame);
	$assignStatic(DefaultTreeCellRendererBorderTest::margin1, $nc(DefaultTreeCellRendererBorderTest::treeCellRenderer)->getInsets());
}

void DefaultTreeCellRendererBorderTest::lambda$main$0() {
	$init(DefaultTreeCellRendererBorderTest);
	$assignStatic(DefaultTreeCellRendererBorderTest::frame, $new($JFrame));
	$assignStatic(DefaultTreeCellRendererBorderTest::tree, $new($JTree));
	$assignStatic(DefaultTreeCellRendererBorderTest::treeCellRenderer, $new($DefaultTreeCellRenderer));
	DefaultTreeCellRendererBorderTest::tree->add(DefaultTreeCellRendererBorderTest::treeCellRenderer);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setSize(300, 300);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setVisible(true);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setLayout($$new($BorderLayout));
	$nc(DefaultTreeCellRendererBorderTest::tree)->setRootVisible(true);
	$nc(DefaultTreeCellRendererBorderTest::tree)->setShowsRootHandles(true);
	$nc(DefaultTreeCellRendererBorderTest::frame)->add(DefaultTreeCellRendererBorderTest::tree, $BorderLayout::CENTER);
}

DefaultTreeCellRendererBorderTest::DefaultTreeCellRendererBorderTest() {
}

$Class* DefaultTreeCellRendererBorderTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0")) {
			return DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1")) {
			return DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2")) {
			return DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("DefaultTreeCellRendererBorderTest$$Lambda$dispose$3")) {
			return DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, frame)},
		{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, tree)},
		{"treeCellRenderer", "Ljavax/swing/tree/DefaultTreeCellRenderer;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, treeCellRenderer)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, robot)},
		{"margin1", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, margin1)},
		{"margin2", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, margin2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultTreeCellRendererBorderTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultTreeCellRendererBorderTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultTreeCellRendererBorderTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultTreeCellRendererBorderTest, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultTreeCellRendererBorderTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultTreeCellRendererBorderTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultTreeCellRendererBorderTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultTreeCellRendererBorderTest);
	});
	return class$;
}

$Class* DefaultTreeCellRendererBorderTest::class$ = nullptr;
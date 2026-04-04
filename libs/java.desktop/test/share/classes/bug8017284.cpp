#include <bug8017284.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE
#undef ITERATIONS
#undef TAB_COUNT

using $BorderLayout = ::java::awt::BorderLayout;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8017284$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8017284$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8017284::lambda$main$0();
	}
};
$Class* bug8017284$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8017284$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8017284$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8017284$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8017284$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8017284$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug8017284$$Lambda$lambda$main$0::class$ = nullptr;

class bug8017284$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8017284$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8017284::lambda$main$1();
	}
};
$Class* bug8017284$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8017284$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8017284$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8017284$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8017284$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8017284$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug8017284$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug8017284$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(bug8017284$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8017284::lambda$main$2();
	}
};
$Class* bug8017284$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8017284$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8017284$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8017284$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8017284$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8017284$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* bug8017284$$Lambda$lambda$main$2$2::class$ = nullptr;

$JFrame* bug8017284::frame = nullptr;
$JTabbedPane* bug8017284::tabbedPane = nullptr;

void bug8017284::init$() {
}

void bug8017284::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new(bug8017284$$Lambda$lambda$main$0));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(bug8017284$$Lambda$lambda$main$1$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(bug8017284$$Lambda$lambda$main$2$2));
}

$String* bug8017284::getHtmlText(int32_t i) {
	return $str({"<html><b><i>"_s, $$str(i), "</b></i>"_s});
}

void bug8017284::lambda$main$2() {
	$init(bug8017284);
	$nc(bug8017284::frame)->dispose();
}

void bug8017284::lambda$main$1() {
	$useLocalObjectStack();
	for (int32_t j = 0; j < bug8017284::ITERATIONS; ++j) {
		for (int32_t i = 0; i < bug8017284::TAB_COUNT; ++i) {
			$init(bug8017284);
			$nc(bug8017284::tabbedPane)->setTitleAt(i, $(getHtmlText(j * bug8017284::TAB_COUNT + i)));
		}
	}
}

void bug8017284::lambda$main$0() {
	$useLocalObjectStack();
	$init(bug8017284);
	$assignStatic(bug8017284::frame, $new($JFrame));
	bug8017284::frame->setSize(500, 500);
	$nc(bug8017284::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug8017284::tabbedPane, $new($JTabbedPane));
	for (int32_t i = 0; i < bug8017284::TAB_COUNT; ++i) {
		$nc(bug8017284::tabbedPane)->add($$str({"Header "_s, $$str(i)}), $$new($JLabel, $$str({"Content: "_s, $$str(i)})));
	}
	$$nc($nc(bug8017284::frame)->getContentPane())->setLayout($$new($BorderLayout));
	$$nc($nc(bug8017284::frame)->getContentPane())->add(bug8017284::tabbedPane, $BorderLayout::CENTER);
	$nc(bug8017284::frame)->setVisible(true);
}

bug8017284::bug8017284() {
}

$Class* bug8017284::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8017284$$Lambda$lambda$main$0")) {
			return bug8017284$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug8017284$$Lambda$lambda$main$1$1")) {
			return bug8017284$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("bug8017284$$Lambda$lambda$main$2$2")) {
			return bug8017284$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TAB_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8017284, TAB_COUNT)},
		{"ITERATIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8017284, ITERATIONS)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8017284, frame)},
		{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug8017284, tabbedPane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8017284, init$, void)},
		{"getHtmlText", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8017284, getHtmlText, $String*, int32_t)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8017284, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8017284, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8017284, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8017284, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8017284",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug8017284, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8017284);
	});
	return class$;
}

$Class* bug8017284::class$ = nullptr;
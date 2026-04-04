#include <bug6559152.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef VK_DOWN
#undef VK_ENTER

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

class bug6559152$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6559152$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6559152::lambda$main$0();
	}
};
$Class* bug6559152$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6559152$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6559152$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug6559152$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6559152$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6559152$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug6559152$$Lambda$lambda$main$0::class$ = nullptr;

class bug6559152$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug6559152$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6559152::lambda$main$1();
	}
};
$Class* bug6559152$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6559152$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6559152$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug6559152$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6559152$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6559152$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug6559152$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug6559152$$Lambda$lambda$blockTillDisplayed$2$2 : public $Runnable {
	$class(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* comp) {
		$set(this, comp, comp);
	}
	virtual void run() override {
		bug6559152::lambda$blockTillDisplayed$2(comp);
	}
	$JComponent* comp = nullptr;
};
$Class* bug6559152$$Lambda$lambda$blockTillDisplayed$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2, comp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2, init$, void, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug6559152$$Lambda$lambda$blockTillDisplayed$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2);
	});
	return class$;
}
$Class* bug6559152$$Lambda$lambda$blockTillDisplayed$2$2::class$ = nullptr;

$JFrame* bug6559152::frame = nullptr;
$JComboBox* bug6559152::cb = nullptr;
$Robot* bug6559152::robot = nullptr;
$Point* bug6559152::p = nullptr;

void bug6559152::init$() {
}

void bug6559152::main($StringArray* args) {
	$init(bug6559152);
	$useLocalObjectStack();
	$assignStatic(bug6559152::robot, $new($Robot));
	bug6559152::robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(bug6559152$$Lambda$lambda$main$0));
		blockTillDisplayed(bug6559152::cb);
		$nc(bug6559152::robot)->waitForIdle();
		$nc(bug6559152::robot)->delay(1000);
		test();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (bug6559152::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug6559152$$Lambda$lambda$main$1$1));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug6559152::blockTillDisplayed($JComponent* comp) {
	$init(bug6559152);
	$useLocalObjectStack();
	while (bug6559152::p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait($$new(bug6559152$$Lambda$lambda$blockTillDisplayed$2$2, comp));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void bug6559152::setupUI() {
	$init(bug6559152);
	$useLocalObjectStack();
	$assignStatic(bug6559152::frame, $new($JFrame));
	bug6559152::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($DefaultTableModel, model, $new($DefaultTableModel, 1, 1));
	$var($JTable, table, $new($JTable, model));
	$assignStatic(bug6559152::cb, $new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s,
		"three"_s
	})));
	bug6559152::cb->setEditable(true);
	$$nc($$nc(table->getColumnModel())->getColumn(0))->setCellEditor($$new($DefaultCellEditor, bug6559152::cb));
	$nc(bug6559152::frame)->add(bug6559152::cb);
	$nc(bug6559152::frame)->pack();
	$nc(bug6559152::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6559152::frame)->setVisible(true);
}

void bug6559152::test() {
	$init(bug6559152);
	$nc(bug6559152::robot)->mouseMove($nc(bug6559152::p)->x, $nc(bug6559152::p)->y);
	$nc(bug6559152::robot)->waitForIdle();
	$nc(bug6559152::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(bug6559152::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(bug6559152::robot)->waitForIdle();
	testImpl();
	checkResult();
}

void bug6559152::testImpl() {
	$init(bug6559152);
	$nc(bug6559152::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6559152::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6559152::robot)->waitForIdle();
	$nc(bug6559152::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6559152::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6559152::robot)->waitForIdle();
	$nc(bug6559152::robot)->keyPress($KeyEvent::VK_ENTER);
	$nc(bug6559152::robot)->keyRelease($KeyEvent::VK_ENTER);
	$nc(bug6559152::robot)->waitForIdle();
}

void bug6559152::checkResult() {
	$init(bug6559152);
	if ($$nc($nc(bug6559152::cb)->getSelectedItem())->equals("two"_s)) {
		$nc($System::out)->println("Test passed"_s);
	} else {
		$nc($System::out)->println("Test failed"_s);
		$throwNew($RuntimeException, "Cannot select an item from popup with the ENTER key."_s);
	}
}

void bug6559152::lambda$blockTillDisplayed$2($JComponent* comp) {
	$init(bug6559152);
	$assignStatic(bug6559152::p, $nc(comp)->getLocationOnScreen());
}

void bug6559152::lambda$main$1() {
	$init(bug6559152);
	$nc(bug6559152::frame)->dispose();
}

void bug6559152::lambda$main$0() {
	$init(bug6559152);
	setupUI();
}

void bug6559152::clinit$($Class* clazz) {
	$assignStatic(bug6559152::p, nullptr);
}

bug6559152::bug6559152() {
}

$Class* bug6559152::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug6559152$$Lambda$lambda$main$0")) {
			return bug6559152$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug6559152$$Lambda$lambda$main$1$1")) {
			return bug6559152$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("bug6559152$$Lambda$lambda$blockTillDisplayed$2$2")) {
			return bug6559152$$Lambda$lambda$blockTillDisplayed$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6559152, frame)},
		{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug6559152, cb)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6559152, robot)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(bug6559152, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6559152, init$, void)},
		{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, $STATIC, $staticMethod(bug6559152, blockTillDisplayed, void, $JComponent*), "java.lang.Exception"},
		{"checkResult", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6559152, checkResult, void)},
		{"lambda$blockTillDisplayed$2", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug6559152, lambda$blockTillDisplayed$2, void, $JComponent*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug6559152, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug6559152, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6559152, main, void, $StringArray*), "java.lang.Exception"},
		{"setupUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6559152, setupUI, void)},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6559152, test, void), "java.lang.Exception"},
		{"testImpl", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6559152, testImpl, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6559152",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug6559152, name, initialize, &classInfo$$, bug6559152::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6559152);
	});
	return class$;
}

$Class* bug6559152::class$ = nullptr;
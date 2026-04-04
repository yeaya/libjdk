#include <bug8032878.h>
#include <bug8032878$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef EXPECTED
#undef ONE
#undef THREE
#undef TWO
#undef VK_1
#undef VK_2
#undef VK_3
#undef VK_ENTER
#undef VK_TAB

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $bug8032878$1 = ::bug8032878$1;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class bug8032878$$Lambda$lambda$test$0 : public $Runnable {
	$class(bug8032878$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug8032878* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test$0();
	}
	bug8032878* inst$ = nullptr;
};
$Class* bug8032878$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug8032878$$Lambda$lambda$test$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8032878;)V", nullptr, $PUBLIC, $method(bug8032878$$Lambda$lambda$test$0, init$, void, bug8032878*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032878$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8032878$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug8032878$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032878$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* bug8032878$$Lambda$lambda$test$0::class$ = nullptr;

$String* bug8032878::ONE = nullptr;
$String* bug8032878::TWO = nullptr;
$String* bug8032878::THREE = nullptr;
$String* bug8032878::EXPECTED = nullptr;

void bug8032878::main($StringArray* args) {
	$init(bug8032878);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	$var(bug8032878, test, $new(bug8032878));
	test->test(false);
	test->test(true);
}

void bug8032878::init$() {
	$set(this, robot, $new($Robot));
	this->robot->setAutoDelay(100);
}

void bug8032878::setupUI() {
	$useLocalObjectStack();
	$set(this, frame, $new($JFrame));
	this->frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JTable, table, $new($JTable, $$cast($ObjectArray2, $new($StringArray2, {
		$$new($StringArray, {bug8032878::ONE}),
		$$new($StringArray, {bug8032878::TWO}),
		$$new($StringArray, {bug8032878::THREE})
	})), $$new($StringArray, {"#"_s})));
	table->setSurrendersFocusOnKeystroke(this->surrender);
	$set(this, cb, $new($JComboBox, $$new($StringArray, {
		bug8032878::ONE,
		bug8032878::TWO,
		bug8032878::THREE
	})));
	this->cb->setEditable(true);
	$var($DefaultCellEditor, comboEditor, $new($DefaultCellEditor, this->cb));
	comboEditor->setClickCountToStart(1);
	$$nc($$nc(table->getColumnModel())->getColumn(0))->setCellEditor(comboEditor);
	$nc(this->frame)->add(table);
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
	$nc(this->frame)->setLocationRelativeTo(nullptr);
}

void bug8032878::test(bool flag) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		this->surrender = flag;
		$SwingUtilities::invokeAndWait(this);
		this->robot->waitForIdle();
		this->robot->delay(1000);
		runTest();
		checkResult();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (this->frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug8032878$$Lambda$lambda$test$0, this));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug8032878::runTest() {
	this->robot->waitForIdle();
	this->robot->keyPress($KeyEvent::VK_TAB);
	this->robot->keyRelease($KeyEvent::VK_TAB);
	this->robot->waitForIdle();
	this->robot->keyPress($KeyEvent::VK_1);
	this->robot->keyRelease($KeyEvent::VK_1);
	this->robot->waitForIdle();
	this->robot->keyPress($KeyEvent::VK_2);
	this->robot->keyRelease($KeyEvent::VK_2);
	this->robot->waitForIdle();
	this->robot->keyPress($KeyEvent::VK_3);
	this->robot->keyRelease($KeyEvent::VK_3);
	this->robot->waitForIdle();
	this->robot->keyPress($KeyEvent::VK_ENTER);
	this->robot->keyRelease($KeyEvent::VK_ENTER);
	this->robot->waitForIdle();
}

void bug8032878::checkResult() {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($bug8032878$1, this));
	if ($nc(this->text)->equals(bug8032878::EXPECTED)) {
		$nc($System::out)->println($$str({"Test with surrender = "_s, $$str(this->surrender), " passed"_s}));
	} else {
		$nc($System::out)->println($$str({"Test with surrender = "_s, $$str(this->surrender), " failed"_s}));
		$throwNew($RuntimeException, $$str({"Expected value in JComboBox editor \'"_s, bug8032878::EXPECTED, "\' but found \'"_s, this->text, "\'."_s}));
	}
}

void bug8032878::run() {
	setupUI();
}

void bug8032878::lambda$test$0() {
	$nc(this->frame)->dispose();
}

bug8032878::bug8032878() {
}

void bug8032878::clinit$($Class* clazz) {
	$assignStatic(bug8032878::ONE, "one"_s);
	$assignStatic(bug8032878::TWO, "two"_s);
	$assignStatic(bug8032878::THREE, "three"_s);
	$assignStatic(bug8032878::EXPECTED, "one123"_s);
}

$Class* bug8032878::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8032878$$Lambda$lambda$test$0")) {
			return bug8032878$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"ONE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, ONE)},
		{"TWO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, TWO)},
		{"THREE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, THREE)},
		{"EXPECTED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, EXPECTED)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $FINAL, $field(bug8032878, robot)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug8032878, frame)},
		{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE, $field(bug8032878, cb)},
		{"surrender", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug8032878, surrender)},
		{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(bug8032878, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8032878, init$, void), "java.awt.AWTException"},
		{"checkResult", "()V", nullptr, $PRIVATE, $method(bug8032878, checkResult, void), "java.lang.Exception"},
		{"lambda$test$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug8032878, lambda$test$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8032878, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032878, run, void)},
		{"runTest", "()V", nullptr, $PRIVATE, $method(bug8032878, runTest, void), "java.lang.Exception"},
		{"setupUI", "()V", nullptr, $PRIVATE, $method(bug8032878, setupUI, void)},
		{"test", "(Z)V", nullptr, $PRIVATE, $method(bug8032878, test, void, bool), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032878$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8032878",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8032878$1"
	};
	$loadClass(bug8032878, name, initialize, &classInfo$$, bug8032878::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032878);
	});
	return class$;
}

$Class* bug8032878::class$ = nullptr;
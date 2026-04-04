#include <Test8019180.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef ITEMS
#undef LATCH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$CountDownLatch* Test8019180::LATCH = nullptr;
$StringArray* Test8019180::ITEMS = nullptr;

void Test8019180::init$() {
}

void Test8019180::main($StringArray* args) {
	$init(Test8019180);
	$SwingUtilities::invokeLater($$new(Test8019180));
	Test8019180::LATCH->await();
}

void Test8019180::run() {
	$useLocalObjectStack();
	if (this->test == nullptr) {
		$set(this, test, $new($JComboBox, Test8019180::ITEMS));
		this->test->addActionListener(this->test);
		$var($JFrame, frame, $new($JFrame));
		frame->add(this->test);
		frame->pack();
		frame->setVisible(true);
		$SwingUtilities::invokeLater(this);
	} else {
		int32_t index = this->test->getSelectedIndex();
		$nc(this->test)->setSelectedIndex(1 + index);
		if (0 > $nc(this->test)->getSelectedIndex()) {
			$nc($System::err)->println("ERROR: no selection"_s);
			$System::exit(0x007a5cec);
		}
		$$nc($SwingUtilities::getWindowAncestor(this->test))->dispose();
		Test8019180::LATCH->countDown();
	}
}

void Test8019180::clinit$($Class* clazz) {
	$assignStatic(Test8019180::LATCH, $new($CountDownLatch, 1));
	$assignStatic(Test8019180::ITEMS, $new($StringArray, {
		"First"_s,
		"Second"_s,
		"Third"_s,
		"Fourth"_s
	}));
}

Test8019180::Test8019180() {
}

$Class* Test8019180::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LATCH", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8019180, LATCH)},
		{"ITEMS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8019180, ITEMS)},
		{"test", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE, $field(Test8019180, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8019180, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8019180, main, void, $StringArray*), "java.lang.InterruptedException"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8019180, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8019180",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test8019180, name, initialize, &classInfo$$, Test8019180::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test8019180);
	});
	return class$;
}

$Class* Test8019180::class$ = nullptr;
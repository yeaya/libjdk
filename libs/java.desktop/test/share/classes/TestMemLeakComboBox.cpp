#include <TestMemLeakComboBox.h>
#include <TestMemLeakComboBox$MyPanel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $TestMemLeakComboBox$MyPanel = ::TestMemLeakComboBox$MyPanel;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestMemLeakComboBox$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestMemLeakComboBox$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		TestMemLeakComboBox::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* TestMemLeakComboBox$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(TestMemLeakComboBox$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(TestMemLeakComboBox$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestMemLeakComboBox$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestMemLeakComboBox$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestMemLeakComboBox$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMemLeakComboBox$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestMemLeakComboBox$$Lambda$lambda$main$0::class$ = nullptr;

class TestMemLeakComboBox$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(TestMemLeakComboBox$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestMemLeakComboBox::lambda$test$1();
	}
};
$Class* TestMemLeakComboBox$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMemLeakComboBox$$Lambda$lambda$test$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestMemLeakComboBox$$Lambda$lambda$test$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestMemLeakComboBox$$Lambda$lambda$test$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestMemLeakComboBox$$Lambda$lambda$test$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMemLeakComboBox$$Lambda$lambda$test$1$1);
	});
	return class$;
}
$Class* TestMemLeakComboBox$$Lambda$lambda$test$1$1::class$ = nullptr;

class TestMemLeakComboBox$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(TestMemLeakComboBox$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestMemLeakComboBox::lambda$test$2();
	}
};
$Class* TestMemLeakComboBox$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMemLeakComboBox$$Lambda$lambda$test$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestMemLeakComboBox$$Lambda$lambda$test$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestMemLeakComboBox$$Lambda$lambda$test$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestMemLeakComboBox$$Lambda$lambda$test$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMemLeakComboBox$$Lambda$lambda$test$2$2);
	});
	return class$;
}
$Class* TestMemLeakComboBox$$Lambda$lambda$test$2$2::class$ = nullptr;

$JFrame* TestMemLeakComboBox::frame = nullptr;
$String* TestMemLeakComboBox::failed = nullptr;

void TestMemLeakComboBox::init$() {
}

void TestMemLeakComboBox::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(TestMemLeakComboBox);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void TestMemLeakComboBox::main($StringArray* args) {
	$init(TestMemLeakComboBox);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$nc($System::out)->println($$str({"Testing l&f : "_s, $($nc(laf)->getClassName())}));
			$SwingUtilities::invokeAndWait($$new(TestMemLeakComboBox$$Lambda$lambda$main$0, laf));
			test();
			if (TestMemLeakComboBox::failed != nullptr) {
				$throwNew($RuntimeException, TestMemLeakComboBox::failed);
			}
		}
	}
}

void TestMemLeakComboBox::test() {
	$init(TestMemLeakComboBox);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(TestMemLeakComboBox$$Lambda$lambda$test$1$1));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestMemLeakComboBox::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestMemLeakComboBox$$Lambda$lambda$test$2$2));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestMemLeakComboBox::lambda$test$2() {
	$init(TestMemLeakComboBox);
	$nc(TestMemLeakComboBox::frame)->dispose();
}

void TestMemLeakComboBox::lambda$test$1() {
	$init(TestMemLeakComboBox);
	$useLocalObjectStack();
	$assignStatic(TestMemLeakComboBox::frame, $new($JFrame));
	$var($JPanel, panel, $new($TestMemLeakComboBox$MyPanel));
	panel->setPreferredSize($$new($Dimension, 100, 100));
	panel->setLayout($$new($FlowLayout));
	panel->add($$new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s,
		"three"_s
	})));
	$nc(TestMemLeakComboBox::frame)->add(panel);
	$nc(TestMemLeakComboBox::frame)->pack();
	$nc(TestMemLeakComboBox::frame)->setVisible(true);
}

void TestMemLeakComboBox::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(TestMemLeakComboBox);
	setLookAndFeel(laf);
}

void TestMemLeakComboBox::clinit$($Class* clazz) {
	$assignStatic(TestMemLeakComboBox::failed, nullptr);
}

TestMemLeakComboBox::TestMemLeakComboBox() {
}

$Class* TestMemLeakComboBox::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestMemLeakComboBox$$Lambda$lambda$main$0")) {
			return TestMemLeakComboBox$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestMemLeakComboBox$$Lambda$lambda$test$1$1")) {
			return TestMemLeakComboBox$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals("TestMemLeakComboBox$$Lambda$lambda$test$2$2")) {
			return TestMemLeakComboBox$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestMemLeakComboBox, frame)},
		{"failed", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TestMemLeakComboBox, failed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMemLeakComboBox, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestMemLeakComboBox, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestMemLeakComboBox, lambda$test$1, void)},
		{"lambda$test$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestMemLeakComboBox, lambda$test$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestMemLeakComboBox, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestMemLeakComboBox, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestMemLeakComboBox, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestMemLeakComboBox$MyPanel", "TestMemLeakComboBox", "MyPanel", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestMemLeakComboBox",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestMemLeakComboBox$MyPanel"
	};
	$loadClass(TestMemLeakComboBox, name, initialize, &classInfo$$, TestMemLeakComboBox::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestMemLeakComboBox);
	});
	return class$;
}

$Class* TestMemLeakComboBox::class$ = nullptr;
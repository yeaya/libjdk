#include <Test6981576.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $TitledBorder = ::javax::swing::border::TitledBorder;

class Test6981576$$Lambda$lambda$main$0 : public $Thread$UncaughtExceptionHandler {
	$class(Test6981576$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Thread$UncaughtExceptionHandler)
public:
	void init$() {
	}
	virtual void uncaughtException($Thread* t, $Throwable* e) override {
		Test6981576::lambda$main$0(t, e);
	}
};
$Class* Test6981576$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6981576$$Lambda$lambda$main$0, init$, void)},
		{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Test6981576$$Lambda$lambda$main$0, uncaughtException, void, $Thread*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test6981576$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Thread$UncaughtExceptionHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6981576$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6981576$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$0::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		Test6981576::lambda$main$1(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* Test6981576$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(Test6981576$$Lambda$lambda$main$1$1, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(Test6981576$$Lambda$lambda$main$1$1, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6981576$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test6981576$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6981576$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6981576$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$1$1::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test6981576::lambda$main$2();
	}
};
$Class* Test6981576$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6981576$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6981576$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test6981576$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6981576$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6981576$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$2$2::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test6981576::lambda$main$3();
	}
};
$Class* Test6981576$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6981576$$Lambda$lambda$main$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6981576$$Lambda$lambda$main$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test6981576$$Lambda$lambda$main$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6981576$$Lambda$lambda$main$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6981576$$Lambda$lambda$main$3$3);
	});
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$3$3::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test6981576::lambda$main$4();
	}
};
$Class* Test6981576$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6981576$$Lambda$lambda$main$4$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6981576$$Lambda$lambda$main$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test6981576$$Lambda$lambda$main$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6981576$$Lambda$lambda$main$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6981576$$Lambda$lambda$main$4$4);
	});
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$4$4::class$ = nullptr;

$volatile($Throwable*) Test6981576::failed = nullptr;
$JFrame* Test6981576::frame = nullptr;

void Test6981576::main($StringArray* args) {
	$init(Test6981576);
	$useLocalObjectStack();
	$($Thread::currentThread())->setUncaughtExceptionHandler($$new(Test6981576$$Lambda$lambda$main$0));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait($$new(Test6981576$$Lambda$lambda$main$1$1, laf));
				$EventQueue::invokeAndWait($$new(Test6981576$$Lambda$lambda$main$2$2));
				$EventQueue::invokeAndWait($$new(Test6981576$$Lambda$lambda$main$3$3));
				$EventQueue::invokeAndWait($$new(Test6981576$$Lambda$lambda$main$4$4));
			}
		}
	}
	if (Test6981576::failed != nullptr) {
		$throw(Test6981576::failed);
	}
}

void Test6981576::init$() {
	$TitledBorder::init$(""_s);
}

void Test6981576::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$$nc(getBorder())->paintBorder(c, g, x, y, width, height);
}

void Test6981576::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(Test6981576);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void Test6981576::lambda$main$4() {
	$init(Test6981576);
	$nc(Test6981576::frame)->dispose();
}

void Test6981576::lambda$main$3() {
	$init(Test6981576);
	$nc(Test6981576::frame)->repaint();
}

void Test6981576::lambda$main$2() {
	$init(Test6981576);
	$useLocalObjectStack();
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder($$new(Test6981576));
	$assignStatic(Test6981576::frame, $new($JFrame, "Test6981576"_s));
	Test6981576::frame->add(panel);
	$nc(Test6981576::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(Test6981576::frame)->setSize(300, 300);
	$nc(Test6981576::frame)->setLocationRelativeTo(nullptr);
	$nc(Test6981576::frame)->setVisible(true);
}

void Test6981576::lambda$main$1($UIManager$LookAndFeelInfo* laf) {
	$init(Test6981576);
	setLookAndFeel(laf);
}

void Test6981576::lambda$main$0($Thread* t, $Throwable* e) {
	$init(Test6981576);
	$nc(e)->printStackTrace();
	$assignStatic(Test6981576::failed, e);
}

Test6981576::Test6981576() {
}

$Class* Test6981576::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Test6981576$$Lambda$lambda$main$0")) {
			return Test6981576$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("Test6981576$$Lambda$lambda$main$1$1")) {
			return Test6981576$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("Test6981576$$Lambda$lambda$main$2$2")) {
			return Test6981576$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("Test6981576$$Lambda$lambda$main$3$3")) {
			return Test6981576$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals("Test6981576$$Lambda$lambda$main$4$4")) {
			return Test6981576$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"failed", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Test6981576, failed)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6981576, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Test6981576, init$, void)},
		{"lambda$main$0", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test6981576, lambda$main$0, void, $Thread*, $Throwable*)},
		{"lambda$main$1", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test6981576, lambda$main$1, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test6981576, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test6981576, lambda$main$3, void)},
		{"lambda$main$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test6981576, lambda$main$4, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6981576, main, void, $StringArray*), "java.lang.Throwable"},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(Test6981576, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6981576, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6981576",
		"javax.swing.border.TitledBorder",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6981576, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6981576));
	});
	return class$;
}

$Class* Test6981576::class$ = nullptr;
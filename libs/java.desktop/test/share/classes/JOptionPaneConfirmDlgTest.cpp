#include <JOptionPaneConfirmDlgTest.h>
#include <JOptionPaneConfirmDlgTest$1.h>
#include <JOptionPaneConfirmDlgTest$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef INFORMATION_MESSAGE

using $JOptionPaneConfirmDlgTest$1 = ::JOptionPaneConfirmDlgTest$1;
using $JOptionPaneConfirmDlgTest$2 = ::JOptionPaneConfirmDlgTest$2;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0 : public $Runnable {
	$class(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JOptionPaneConfirmDlgTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	JOptionPaneConfirmDlgTest* inst$ = nullptr;
};
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, $PUBLIC, $method(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, init$, void, JOptionPaneConfirmDlgTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::class$ = nullptr;

class JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JOptionPaneConfirmDlgTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	JOptionPaneConfirmDlgTest* inst$ = nullptr;
};
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, $PUBLIC, $method(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, init$, void, JOptionPaneConfirmDlgTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::class$ = nullptr;

void JOptionPaneConfirmDlgTest::main($StringArray* args) {
	$new(JOptionPaneConfirmDlgTest);
}

void JOptionPaneConfirmDlgTest::init$() {
	$useLocalObjectStack();
	$set(this, f, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, this));
		$Thread::sleep(10000);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, this));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JOptionPaneConfirmDlgTest::createGUI() {
	$useLocalObjectStack();
	$JOptionPane::showMessageDialog(($Component*)nullptr, "An internalFrame with 2 buttons will be displayed. \n Press \"Hit me 1\" button. The bug causes a RuntimeException to be thrown here\n But If a confirmation dialog comes, test has passed\n Similarly, press \"Hit me 2\" button. The bug will cause a RuntimeException\n to be thrown here but if a confirmation dialog comes, test has passed.\n Close the dialog and frame."_s, "information"_s, $JOptionPane::INFORMATION_MESSAGE);
	$set(this, f, $new($JFrame));
	$set(this, textFrame, $new($JInternalFrame, "Main-Frame"_s, true));
	this->f->setContentPane(this->textFrame);
	$var($Dimension, dim, $$nc($Toolkit::getDefaultToolkit())->getScreenSize());
	$nc(this->f)->setSize($nc(dim)->width / 6, $nc(dim)->height / 5);
	$nc(this->textFrame)->setBounds(10, 10, dim->width / 8, dim->height / 8);
	$nc(this->textFrame)->setVisible(true);
	$var($JButton, b1, $new($JButton, "Hit me 1"_s));
	b1->addActionListener($$new($JOptionPaneConfirmDlgTest$1, this));
	$var($JButton, b2, $new($JButton, "Hit me 2"_s));
	b2->addActionListener($$new($JOptionPaneConfirmDlgTest$2, this));
	$nc(this->textFrame)->setLayout($$new($FlowLayout));
	$nc(this->textFrame)->add(b1);
	$nc(this->textFrame)->add(b2);
	$nc(this->f)->setVisible(true);
}

void JOptionPaneConfirmDlgTest::lambda$new$1() {
	$nc(this->f)->dispose();
}

void JOptionPaneConfirmDlgTest::lambda$new$0() {
	createGUI();
}

JOptionPaneConfirmDlgTest::JOptionPaneConfirmDlgTest() {
}

$Class* JOptionPaneConfirmDlgTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0")) {
			return JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1")) {
			return JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"textFrame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(JOptionPaneConfirmDlgTest, textFrame)},
		{"f", "Ljavax/swing/JFrame;", nullptr, 0, $field(JOptionPaneConfirmDlgTest, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JOptionPaneConfirmDlgTest, init$, void), "java.lang.Exception"},
		{"createGUI", "()V", nullptr, $PUBLIC, $virtualMethod(JOptionPaneConfirmDlgTest, createGUI, void)},
		{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(JOptionPaneConfirmDlgTest, lambda$new$0, void)},
		{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(JOptionPaneConfirmDlgTest, lambda$new$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPaneConfirmDlgTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JOptionPaneConfirmDlgTest$2", nullptr, nullptr, 0},
		{"JOptionPaneConfirmDlgTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JOptionPaneConfirmDlgTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JOptionPaneConfirmDlgTest$2,JOptionPaneConfirmDlgTest$1"
	};
	$loadClass(JOptionPaneConfirmDlgTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPaneConfirmDlgTest);
	});
	return class$;
}

$Class* JOptionPaneConfirmDlgTest::class$ = nullptr;
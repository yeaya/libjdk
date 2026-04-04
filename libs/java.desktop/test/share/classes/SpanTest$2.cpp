#include <SpanTest$2.h>
#include <SpanTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH

using $SpanTest = ::SpanTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $FlowLayout = ::java::awt::FlowLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JDialog = ::javax::swing::JDialog;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;

class SpanTest$2$$Lambda$lambda$run$0 : public $ActionListener {
	$class(SpanTest$2$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(SpanTest$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	SpanTest$2* inst$ = nullptr;
};
$Class* SpanTest$2$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SpanTest$2$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSpanTest$2;)V", nullptr, $PUBLIC, $method(SpanTest$2$$Lambda$lambda$run$0, init$, void, SpanTest$2*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SpanTest$2$$Lambda$lambda$run$0, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SpanTest$2$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SpanTest$2$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanTest$2$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* SpanTest$2$$Lambda$lambda$run$0::class$ = nullptr;

class SpanTest$2$$Lambda$lambda$run$1$1 : public $ActionListener {
	$class(SpanTest$2$$Lambda$lambda$run$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(SpanTest$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$1(e);
	}
	SpanTest$2* inst$ = nullptr;
};
$Class* SpanTest$2$$Lambda$lambda$run$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SpanTest$2$$Lambda$lambda$run$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSpanTest$2;)V", nullptr, $PUBLIC, $method(SpanTest$2$$Lambda$lambda$run$1$1, init$, void, SpanTest$2*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SpanTest$2$$Lambda$lambda$run$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SpanTest$2$$Lambda$lambda$run$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SpanTest$2$$Lambda$lambda$run$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanTest$2$$Lambda$lambda$run$1$1);
	});
	return class$;
}
$Class* SpanTest$2$$Lambda$lambda$run$1$1::class$ = nullptr;

void SpanTest$2::init$($SpanTest* this$0) {
	$set(this, this$0, this$0);
}

void SpanTest$2::run() {
	$useLocalObjectStack();
	$var($String, description, " INSTRUCTIONS:\n A string will be shown.\n  Press Pass if there is no overlap of characters\n else press Fail."_s);
	$init($SpanTest);
	$assignStatic($SpanTest::dialog, $new($JDialog));
	$SpanTest::dialog->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener($$new(SpanTest$2$$Lambda$lambda$run$0, this));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener($$new(SpanTest$2$$Lambda$lambda$run$1$1, this));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	mainPanel->add(textArea, $BorderLayout::CENTER);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(passButton);
	buttonPanel->add(failButton);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	$nc($SpanTest::dialog)->add(mainPanel);
	$nc($SpanTest::dialog)->pack();
	$nc($SpanTest::dialog)->setVisible(true);
}

void SpanTest$2::lambda$run$1($ActionEvent* e) {
	this->this$0->testResult = false;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

void SpanTest$2::lambda$run$0($ActionEvent* e) {
	this->this$0->testResult = true;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

SpanTest$2::SpanTest$2() {
}

$Class* SpanTest$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SpanTest$2$$Lambda$lambda$run$0")) {
			return SpanTest$2$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals("SpanTest$2$$Lambda$lambda$run$1$1")) {
			return SpanTest$2$$Lambda$lambda$run$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSpanTest;", nullptr, $FINAL | $SYNTHETIC, $field(SpanTest$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSpanTest;)V", nullptr, 0, $method(SpanTest$2, init$, void, $SpanTest*)},
		{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(SpanTest$2, lambda$run$0, void, $ActionEvent*)},
		{"lambda$run$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(SpanTest$2, lambda$run$1, void, $ActionEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpanTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SpanTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpanTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpanTest$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SpanTest"
	};
	$loadClass(SpanTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanTest$2);
	});
	return class$;
}

$Class* SpanTest$2::class$ = nullptr;
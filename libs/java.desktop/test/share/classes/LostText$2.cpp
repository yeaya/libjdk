#include <LostText$2.h>
#include <LostText.h>
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

using $LostText = ::LostText;
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

class LostText$2$$Lambda$lambda$run$0 : public $ActionListener {
	$class(LostText$2$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(LostText$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	LostText$2* inst$ = nullptr;
};
$Class* LostText$2$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LostText$2$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LLostText$2;)V", nullptr, $PUBLIC, $method(LostText$2$$Lambda$lambda$run$0, init$, void, LostText$2*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(LostText$2$$Lambda$lambda$run$0, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LostText$2$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LostText$2$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LostText$2$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* LostText$2$$Lambda$lambda$run$0::class$ = nullptr;

class LostText$2$$Lambda$lambda$run$1$1 : public $ActionListener {
	$class(LostText$2$$Lambda$lambda$run$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(LostText$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$1(e);
	}
	LostText$2* inst$ = nullptr;
};
$Class* LostText$2$$Lambda$lambda$run$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LostText$2$$Lambda$lambda$run$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LLostText$2;)V", nullptr, $PUBLIC, $method(LostText$2$$Lambda$lambda$run$1$1, init$, void, LostText$2*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(LostText$2$$Lambda$lambda$run$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LostText$2$$Lambda$lambda$run$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LostText$2$$Lambda$lambda$run$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LostText$2$$Lambda$lambda$run$1$1);
	});
	return class$;
}
$Class* LostText$2$$Lambda$lambda$run$1$1::class$ = nullptr;

void LostText$2::init$($LostText* this$0) {
	$set(this, this$0, this$0);
}

void LostText$2::run() {
	$useLocalObjectStack();
	$var($String, description, " INSTRUCTIONS:\n A JTable will be shown.\n Try to select different rows via mouse or keyboard.\n  Please verify if text are painted properly.\n If any moment any part of the rows will not be\n  painted properly and if some text are missing in JTable,\n  then press fail else press pass"_s);
	$init($LostText);
	$assignStatic($LostText::dialog, $new($JDialog));
	$LostText::dialog->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener($$new(LostText$2$$Lambda$lambda$run$0, this));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener($$new(LostText$2$$Lambda$lambda$run$1$1, this));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	mainPanel->add(textArea, $BorderLayout::CENTER);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(passButton);
	buttonPanel->add(failButton);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	$nc($LostText::dialog)->add(mainPanel);
	$nc($LostText::dialog)->pack();
	$nc($LostText::dialog)->setVisible(true);
}

void LostText$2::lambda$run$1($ActionEvent* e) {
	this->this$0->testResult = false;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

void LostText$2::lambda$run$0($ActionEvent* e) {
	this->this$0->testResult = true;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

LostText$2::LostText$2() {
}

$Class* LostText$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("LostText$2$$Lambda$lambda$run$0")) {
			return LostText$2$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals("LostText$2$$Lambda$lambda$run$1$1")) {
			return LostText$2$$Lambda$lambda$run$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LLostText;", nullptr, $FINAL | $SYNTHETIC, $field(LostText$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LLostText;)V", nullptr, 0, $method(LostText$2, init$, void, $LostText*)},
		{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(LostText$2, lambda$run$0, void, $ActionEvent*)},
		{"lambda$run$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(LostText$2, lambda$run$1, void, $ActionEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LostText$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LostText",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LostText$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LostText$2",
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
		"LostText"
	};
	$loadClass(LostText$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LostText$2);
	});
	return class$;
}

$Class* LostText$2::class$ = nullptr;
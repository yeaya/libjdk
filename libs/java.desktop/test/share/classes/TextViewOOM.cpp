#include <TextViewOOM.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

#undef N
#undef STRING

using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;

class TextViewOOM$$Lambda$createAndShowGUI : public $Runnable {
	$class(TextViewOOM$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TextViewOOM::createAndShowGUI();
	}
};
$Class* TextViewOOM$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextViewOOM$$Lambda$createAndShowGUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TextViewOOM$$Lambda$createAndShowGUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TextViewOOM$$Lambda$createAndShowGUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TextViewOOM$$Lambda$createAndShowGUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextViewOOM$$Lambda$createAndShowGUI);
	});
	return class$;
}
$Class* TextViewOOM$$Lambda$createAndShowGUI::class$ = nullptr;

class TextViewOOM$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(TextViewOOM$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void run() override {
		TextViewOOM::lambda$main$0(sb);
	}
	$StringBuilder* sb = nullptr;
};
$Class* TextViewOOM$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(TextViewOOM$$Lambda$lambda$main$0$1, sb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(TextViewOOM$$Lambda$lambda$main$0$1, init$, void, $StringBuilder*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TextViewOOM$$Lambda$lambda$main$0$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TextViewOOM$$Lambda$lambda$main$0$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextViewOOM$$Lambda$lambda$main$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextViewOOM$$Lambda$lambda$main$0$1);
	});
	return class$;
}
$Class* TextViewOOM$$Lambda$lambda$main$0$1::class$ = nullptr;

class TextViewOOM$$Lambda$dispose$2 : public $Runnable {
	$class(TextViewOOM$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TextViewOOM$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TextViewOOM$$Lambda$dispose$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TextViewOOM$$Lambda$dispose$2, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TextViewOOM$$Lambda$dispose$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TextViewOOM$$Lambda$dispose$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextViewOOM$$Lambda$dispose$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextViewOOM$$Lambda$dispose$2);
	});
	return class$;
}
$Class* TextViewOOM$$Lambda$dispose$2::class$ = nullptr;

$JFrame* TextViewOOM::frame = nullptr;
$JTextArea* TextViewOOM::ta = nullptr;
$String* TextViewOOM::STRING = nullptr;

void TextViewOOM::init$() {
}

void TextViewOOM::createAndShowGUI() {
	$init(TextViewOOM);
	$assignStatic(TextViewOOM::frame, $new($JFrame));
	$var($JScrollPane, jScrollPane1, $new($JScrollPane));
	$assignStatic(TextViewOOM::ta, $new($JTextArea));
	TextViewOOM::ta->setEditable(false);
	$nc(TextViewOOM::ta)->setColumns(20);
	$nc(TextViewOOM::ta)->setRows(5);
	jScrollPane1->setViewportView(TextViewOOM::ta);
	$nc(TextViewOOM::frame)->add(TextViewOOM::ta);
	$nc(TextViewOOM::frame)->pack();
	$nc(TextViewOOM::frame)->setLocationRelativeTo(nullptr);
	$nc(TextViewOOM::frame)->setVisible(true);
}

void TextViewOOM::main($StringArray* args) {
	$init(TextViewOOM);
	$useLocalObjectStack();
	$EventQueue::invokeAndWait($$new(TextViewOOM$$Lambda$createAndShowGUI));
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		$Thread::sleep(1000);
	}
	int64_t var$0 = $$nc($Runtime::getRuntime())->totalMemory();
	int64_t mem = var$0 - $$nc($Runtime::getRuntime())->freeMemory();
	$nc($System::err)->println($$str({"Memory before creating the text: "_s, $$str(mem)}));
	$var($StringBuilder, sb, $new($StringBuilder, TextViewOOM::N * TextViewOOM::STRING->length()));
	for (int32_t i = 0; i < TextViewOOM::N; ++i) {
		sb->append(TextViewOOM::STRING);
	}
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		$Thread::sleep(1000);
	}
	int64_t var$1 = $$nc($Runtime::getRuntime())->totalMemory();
	mem = var$1 - $$nc($Runtime::getRuntime())->freeMemory();
	$System::err->println($$str({"Memory after  creating the text: "_s, $$str(mem)}));
	$EventQueue::invokeAndWait($$new(TextViewOOM$$Lambda$lambda$main$0$1, sb));
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		$Thread::sleep(1000);
	}
	int64_t var$2 = $$nc($Runtime::getRuntime())->totalMemory();
	mem = var$2 - $$nc($Runtime::getRuntime())->freeMemory();
	$System::err->println($$str({"Final memory  after everything: "_s, $$str(mem)}));
	$EventQueue::invokeAndWait($$new(TextViewOOM$$Lambda$dispose$2, $nc(TextViewOOM::frame)));
}

void TextViewOOM::lambda$main$0($StringBuilder* sb) {
	$init(TextViewOOM);
	$useLocalObjectStack();
	$nc(TextViewOOM::ta)->setText($($nc(sb)->toString()));
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		try {
			$Thread::sleep(200);
		} catch ($InterruptedException& iex) {
		}
	}
	int64_t var$0 = $$nc($Runtime::getRuntime())->totalMemory();
	int64_t mem1 = var$0 - $$nc($Runtime::getRuntime())->freeMemory();
	$nc($System::err)->println($$str({"Memory after  setting the text: "_s, $$str(mem1)}));
}

TextViewOOM::TextViewOOM() {
}

void TextViewOOM::clinit$($Class* clazz) {
	$assignStatic(TextViewOOM::STRING, $cstr({0xdc00, 0x00010bff}));
}

$Class* TextViewOOM::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TextViewOOM$$Lambda$createAndShowGUI")) {
			return TextViewOOM$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals("TextViewOOM$$Lambda$lambda$main$0$1")) {
			return TextViewOOM$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals("TextViewOOM$$Lambda$dispose$2")) {
			return TextViewOOM$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TextViewOOM, frame)},
		{"ta", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TextViewOOM, ta)},
		{"STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextViewOOM, STRING)},
		{"N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextViewOOM, N)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextViewOOM, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TextViewOOM, createAndShowGUI, void)},
		{"lambda$main$0", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TextViewOOM, lambda$main$0, void, $StringBuilder*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TextViewOOM, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TextViewOOM",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextViewOOM, name, initialize, &classInfo$$, TextViewOOM::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TextViewOOM);
	});
	return class$;
}

$Class* TextViewOOM::class$ = nullptr;
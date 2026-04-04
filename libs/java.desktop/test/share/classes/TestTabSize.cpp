#include <TestTabSize.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$SequentialGroup.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

#undef DEFAULT_SIZE
#undef LEADING
#undef MAX_VALUE

using $Font = ::java::awt::Font;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;

class TestTabSize$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTabSize$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTabSize::lambda$main$0();
	}
};
$Class* TestTabSize$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTabSize$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTabSize$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTabSize$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestTabSize$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTabSize$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestTabSize$$Lambda$lambda$main$0::class$ = nullptr;

$JScrollPane* TestTabSize::jScrollPane1 = nullptr;
$JTextArea* TestTabSize::jTextArea1 = nullptr;
$JFrame* TestTabSize::f = nullptr;
$Rectangle2D* TestTabSize::rect = nullptr;
$Rectangle2D* TestTabSize::rect1 = nullptr;
bool TestTabSize::excpnthrown = false;

void TestTabSize::init$() {
}

void TestTabSize::main($StringArray* args) {
	$init(TestTabSize);
	$SwingUtilities::invokeAndWait($$new(TestTabSize$$Lambda$lambda$main$0));
	if (TestTabSize::excpnthrown) {
		$throwNew($RuntimeException, "BadLocationException thrown"_s);
	}
	int32_t var$0 = $cast(int32_t, $nc(TestTabSize::rect)->getX());
	if (var$0 != $cast(int32_t, $nc(TestTabSize::rect1)->getX())) {
		$throwNew($RuntimeException, "Tab width calculation wrong"_s);
	}
}

void TestTabSize::lambda$main$0() {
	$init(TestTabSize);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assignStatic(TestTabSize::jScrollPane1, $new($JScrollPane));
			$assignStatic(TestTabSize::jTextArea1, $new($JTextArea));
			TestTabSize::jTextArea1->setTabSize(8);
			$assignStatic(TestTabSize::f, $new($JFrame));
			$nc(TestTabSize::jTextArea1)->setFont($$new($Font, "Monospaced"_s, 0, 10));
			$var($String, str, "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#\n! Some Text\t\t\t\t\t#"_s);
			$nc(TestTabSize::jTextArea1)->setText(str);
			$nc(TestTabSize::jScrollPane1)->setViewportView(TestTabSize::jTextArea1);
			$var($GroupLayout, layout, $new($GroupLayout, $($nc(TestTabSize::f)->getContentPane())));
			$$nc($nc(TestTabSize::f)->getContentPane())->setLayout(layout);
			$init($GroupLayout$Alignment);
			layout->setHorizontalGroup($($$nc(layout->createParallelGroup($GroupLayout$Alignment::LEADING))->addGroup($($$nc($$nc($$nc(layout->createSequentialGroup())->addContainerGap())->addComponent(TestTabSize::jScrollPane1, $GroupLayout::DEFAULT_SIZE, 446, $Short::MAX_VALUE))->addContainerGap()))));
			layout->setVerticalGroup($($$nc(layout->createParallelGroup($GroupLayout$Alignment::LEADING))->addGroup($($$nc($$nc($$nc(layout->createSequentialGroup())->addContainerGap())->addComponent(TestTabSize::jScrollPane1))->addContainerGap()))));
			$nc(TestTabSize::f)->pack();
			int32_t first = str->indexOf("#"_s);
			$nc(TestTabSize::jTextArea1)->setCaretPosition(first);
			$var($Caret, caret, $nc(TestTabSize::jTextArea1)->getCaret());
			$assignStatic(TestTabSize::rect, $nc(TestTabSize::jTextArea1)->modelToView2D($nc(caret)->getDot()));
			$nc($System::out)->println($$str({"caret x position "_s, $$str($nc(TestTabSize::rect)->getX())}));
			$nc(TestTabSize::jTextArea1)->setCaretPosition(str->indexOf("#"_s, first + 1));
			$assign(caret, $nc(TestTabSize::jTextArea1)->getCaret());
			$assignStatic(TestTabSize::rect1, $nc(TestTabSize::jTextArea1)->modelToView2D($nc(caret)->getDot()));
			$System::out->println($$str({"2nd caret x position "_s, $$str($nc(TestTabSize::rect1)->getX())}));
		} catch ($BadLocationException& ex) {
			TestTabSize::excpnthrown = true;
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestTabSize::f != nullptr) {
			TestTabSize::f->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestTabSize::clinit$($Class* clazz) {
	TestTabSize::excpnthrown = false;
}

TestTabSize::TestTabSize() {
}

$Class* TestTabSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestTabSize$$Lambda$lambda$main$0")) {
			return TestTabSize$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"jScrollPane1", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, jScrollPane1)},
		{"jTextArea1", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, jTextArea1)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, f)},
		{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, rect)},
		{"rect1", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, rect1)},
		{"excpnthrown", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, excpnthrown)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTabSize, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTabSize, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTabSize, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestTabSize",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTabSize, name, initialize, &classInfo$$, TestTabSize::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestTabSize);
	});
	return class$;
}

$Class* TestTabSize::class$ = nullptr;
#include <TestTabSizeWithLineWrap.h>
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

class TestTabSizeWithLineWrap$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTabSizeWithLineWrap$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTabSizeWithLineWrap::lambda$main$0();
	}
};
$Class* TestTabSizeWithLineWrap$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTabSizeWithLineWrap$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTabSizeWithLineWrap$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTabSizeWithLineWrap$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestTabSizeWithLineWrap$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTabSizeWithLineWrap$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestTabSizeWithLineWrap$$Lambda$lambda$main$0::class$ = nullptr;

$JScrollPane* TestTabSizeWithLineWrap::jScrollPane1 = nullptr;
$JTextArea* TestTabSizeWithLineWrap::jTextArea1 = nullptr;
$JFrame* TestTabSizeWithLineWrap::f = nullptr;
$Rectangle2D* TestTabSizeWithLineWrap::rect = nullptr;
$Rectangle2D* TestTabSizeWithLineWrap::rect1 = nullptr;
bool TestTabSizeWithLineWrap::excpnthrown = false;

void TestTabSizeWithLineWrap::init$() {
}

void TestTabSizeWithLineWrap::main($StringArray* args) {
	$init(TestTabSizeWithLineWrap);
	$SwingUtilities::invokeAndWait($$new(TestTabSizeWithLineWrap$$Lambda$lambda$main$0));
	if (TestTabSizeWithLineWrap::excpnthrown) {
		$throwNew($RuntimeException, "BadLocationException thrown"_s);
	}
	int32_t var$0 = $cast(int32_t, $nc(TestTabSizeWithLineWrap::rect)->getX());
	if (var$0 != $cast(int32_t, $nc(TestTabSizeWithLineWrap::rect1)->getX())) {
		$throwNew($RuntimeException, "Tab width calculation wrong"_s);
	}
}

void TestTabSizeWithLineWrap::lambda$main$0() {
	$init(TestTabSizeWithLineWrap);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assignStatic(TestTabSizeWithLineWrap::jScrollPane1, $new($JScrollPane));
			$assignStatic(TestTabSizeWithLineWrap::jTextArea1, $new($JTextArea));
			TestTabSizeWithLineWrap::jTextArea1->setTabSize(8);
			$assignStatic(TestTabSizeWithLineWrap::f, $new($JFrame));
			$nc(TestTabSizeWithLineWrap::jTextArea1)->setFont($$new($Font, "Monospaced"_s, 0, 10));
			$nc(TestTabSizeWithLineWrap::jTextArea1)->setLineWrap(true);
			$var($String, str, "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#\n! Some Text\t\t\t\t\t#"_s);
			$nc(TestTabSizeWithLineWrap::jTextArea1)->setText(str);
			$nc(TestTabSizeWithLineWrap::jScrollPane1)->setViewportView(TestTabSizeWithLineWrap::jTextArea1);
			$var($GroupLayout, layout, $new($GroupLayout, $($nc(TestTabSizeWithLineWrap::f)->getContentPane())));
			$$nc($nc(TestTabSizeWithLineWrap::f)->getContentPane())->setLayout(layout);
			$init($GroupLayout$Alignment);
			layout->setHorizontalGroup($($$nc(layout->createParallelGroup($GroupLayout$Alignment::LEADING))->addGroup($($$nc($$nc($$nc(layout->createSequentialGroup())->addContainerGap())->addComponent(TestTabSizeWithLineWrap::jScrollPane1, $GroupLayout::DEFAULT_SIZE, 446, $Short::MAX_VALUE))->addContainerGap()))));
			layout->setVerticalGroup($($$nc(layout->createParallelGroup($GroupLayout$Alignment::LEADING))->addGroup($($$nc($$nc($$nc(layout->createSequentialGroup())->addContainerGap())->addComponent(TestTabSizeWithLineWrap::jScrollPane1))->addContainerGap()))));
			$nc(TestTabSizeWithLineWrap::f)->pack();
			int32_t first = str->indexOf("#"_s);
			$nc(TestTabSizeWithLineWrap::jTextArea1)->setCaretPosition(first);
			$var($Caret, caret, $nc(TestTabSizeWithLineWrap::jTextArea1)->getCaret());
			$assignStatic(TestTabSizeWithLineWrap::rect, $nc(TestTabSizeWithLineWrap::jTextArea1)->modelToView2D($nc(caret)->getDot()));
			$nc($System::out)->println($$str({"caret x position "_s, $$str($nc(TestTabSizeWithLineWrap::rect)->getX())}));
			$nc(TestTabSizeWithLineWrap::jTextArea1)->setCaretPosition(str->indexOf("#"_s, first + 1));
			$assign(caret, $nc(TestTabSizeWithLineWrap::jTextArea1)->getCaret());
			$assignStatic(TestTabSizeWithLineWrap::rect1, $nc(TestTabSizeWithLineWrap::jTextArea1)->modelToView2D($nc(caret)->getDot()));
			$System::out->println($$str({"2nd caret x position "_s, $$str($nc(TestTabSizeWithLineWrap::rect1)->getX())}));
		} catch ($BadLocationException& ex) {
			TestTabSizeWithLineWrap::excpnthrown = true;
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestTabSizeWithLineWrap::f != nullptr) {
			TestTabSizeWithLineWrap::f->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestTabSizeWithLineWrap::clinit$($Class* clazz) {
	TestTabSizeWithLineWrap::excpnthrown = false;
}

TestTabSizeWithLineWrap::TestTabSizeWithLineWrap() {
}

$Class* TestTabSizeWithLineWrap::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestTabSizeWithLineWrap$$Lambda$lambda$main$0")) {
			return TestTabSizeWithLineWrap$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"jScrollPane1", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSizeWithLineWrap, jScrollPane1)},
		{"jTextArea1", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSizeWithLineWrap, jTextArea1)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSizeWithLineWrap, f)},
		{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSizeWithLineWrap, rect)},
		{"rect1", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSizeWithLineWrap, rect1)},
		{"excpnthrown", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSizeWithLineWrap, excpnthrown)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTabSizeWithLineWrap, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTabSizeWithLineWrap, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTabSizeWithLineWrap, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestTabSizeWithLineWrap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTabSizeWithLineWrap, name, initialize, &classInfo$$, TestTabSizeWithLineWrap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestTabSizeWithLineWrap);
	});
	return class$;
}

$Class* TestTabSizeWithLineWrap::class$ = nullptr;
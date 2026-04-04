#include <I18NViewNoWrapMinSpan.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;

class I18NViewNoWrapMinSpan$$Lambda$lambda$main$0 : public $Runnable {
	$class(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		I18NViewNoWrapMinSpan::lambda$main$0();
	}
};
$Class* I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"I18NViewNoWrapMinSpan$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::class$ = nullptr;

void I18NViewNoWrapMinSpan::init$() {
}

void I18NViewNoWrapMinSpan::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0));
	$nc($System::out)->println("ok"_s);
}

void I18NViewNoWrapMinSpan::lambda$main$0() {
	$useLocalObjectStack();
	try {
		$var($JTextField, textField, $new($JTextField, 15));
		textField->setText(u"ม12345"_s);
		float noSpaceMin = $$nc($$sure($TextUI, textField->getUI())->getRootView(textField))->getMinimumSpan(0);
		$$nc(textField->getDocument())->insertString(3, " "_s, nullptr);
		if (noSpaceMin > $$nc($$sure($TextUI, textField->getUI())->getRootView(textField))->getMinimumSpan(0)) {
			$throwNew($RuntimeException, "Minimum span is calculated for wrapped text"_s);
		}
	} catch ($BadLocationException& e) {
		$throwNew($RuntimeException, e);
	}
}

I18NViewNoWrapMinSpan::I18NViewNoWrapMinSpan() {
}

$Class* I18NViewNoWrapMinSpan::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("I18NViewNoWrapMinSpan$$Lambda$lambda$main$0")) {
			return I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(I18NViewNoWrapMinSpan, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(I18NViewNoWrapMinSpan, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(I18NViewNoWrapMinSpan, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"I18NViewNoWrapMinSpan",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(I18NViewNoWrapMinSpan, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I18NViewNoWrapMinSpan);
	});
	return class$;
}

$Class* I18NViewNoWrapMinSpan::class$ = nullptr;
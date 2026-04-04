#include <bug4644444.h>
#include <Sysout4bug4644444.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $Sysout4bug4644444 = ::Sysout4bug4644444;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JPanel = ::javax::swing::JPanel;

class bug4644444$$Lambda$lambda$new$0 : public $Runnable {
	$class(bug4644444$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4644444* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	bug4644444* inst$ = nullptr;
};
$Class* bug4644444$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4644444$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4644444;)V", nullptr, $PUBLIC, $method(bug4644444$$Lambda$lambda$new$0, init$, void, bug4644444*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4644444$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4644444$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4644444$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4644444$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* bug4644444$$Lambda$lambda$new$0::class$ = nullptr;

void bug4644444::init$() {
	$JApplet::init$();
	$EventQueue::invokeLater($$new(bug4644444$$Lambda$lambda$new$0, this));
}

void bug4644444::init() {
	$useLocalObjectStack();
	$var($StringArray2, instructionsSet, $new($StringArray2, {$$new($StringArray, {
		" Note : Incase of Assertion failure,user can enter"_s,
		" remarks by pressing \'Assertion Fail Remarks \' button"_s,
		" "_s,
		" You would see a testframe with a Button"_s,
		" "_s,
		" ON ALL PLATFORMS"_s,
		"1. Move the mouse on the button, "_s,
		"   so that the tooltip attached to it comes up "_s,
		"2. Tool tip should get adjusted it-self to show "_s,
		"       its full length of text. "_s,
		"3. If tooltip  text gets cut, "_s,
		"   press \'Assertion Fail\' else press \'Assertion Pass\'"_s,
		"4. Similarly, move the applet to different locations of the screen, "_s,
		"   & see if tooltip works properly everywhere. "_s
	})}));
	$var($StringArray, exceptionsSet, $new($StringArray, {"JToolTip is shown partially when placed very close to screen boundaries"_s}));
	$Sysout4bug4644444::setInstructionsWithExceptions(instructionsSet, exceptionsSet);
}

void bug4644444::start() {
}

void bug4644444::destroy() {
	if ($Sysout4bug4644444::failStatus()) {
		$var($String, failMsg, $Sysout4bug4644444::getFailureMessages());
		$assign(failMsg, $nc(failMsg)->replace(u'\n', u' '));
		$throwNew($RuntimeException, failMsg);
	}
}

void bug4644444::lambda$new$0() {
	$set(this, panel, $new($JPanel));
	$set(this, button, $new($JButton, "whooo"_s));
	this->button->setToolTipText("Somthing really long 1234567890 1234567890 1234567890 1234567890 1234567890 1234567890 1234567890 1234567890"_s);
	$nc(this->panel)->add(this->button);
	$$nc(getContentPane())->add(this->panel);
}

bug4644444::bug4644444() {
}

$Class* bug4644444::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4644444$$Lambda$lambda$new$0")) {
			return bug4644444$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"panel", "Ljavax/swing/JPanel;", nullptr, 0, $field(bug4644444, panel)},
		{"button", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4644444, button)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4644444, init$, void), "java.lang.Exception"},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(bug4644444, destroy, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4644444, init, void)},
		{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4644444, lambda$new$0, void)},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(bug4644444, start, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4644444",
		"javax.swing.JApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4644444, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4644444));
	});
	return class$;
}

$Class* bug4644444::class$ = nullptr;
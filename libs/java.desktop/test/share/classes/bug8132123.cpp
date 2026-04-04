#include <bug8132123.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef GRAY
#undef HORIZONTAL_SPLIT

using $Color = ::java::awt::Color;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JApplet = ::javax::swing::JApplet;
using $JPanel = ::javax::swing::JPanel;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8132123$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug8132123$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug8132123* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	bug8132123* inst$ = nullptr;
};
$Class* bug8132123$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug8132123$$Lambda$lambda$init$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8132123;)V", nullptr, $PUBLIC, $method(bug8132123$$Lambda$lambda$init$0, init$, void, bug8132123*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8132123$$Lambda$lambda$init$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8132123$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug8132123$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8132123$$Lambda$lambda$init$0);
	});
	return class$;
}
$Class* bug8132123$$Lambda$lambda$init$0::class$ = nullptr;

void bug8132123::init$() {
	$JApplet::init$();
}

void bug8132123::init() {
	$SwingUtilities::invokeLater($$new(bug8132123$$Lambda$lambda$init$0, this));
}

void bug8132123::lambda$init$0() {
	$useLocalObjectStack();
	$var($JPanel, left, $new($JPanel));
	$init($Color);
	left->setBackground($Color::GRAY);
	$var($JPanel, right, $new($JPanel));
	right->setBackground($Color::GRAY);
	$var($JSplitPane, splitPane, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, left, right));
	splitPane->setOneTouchExpandable(true);
	$$nc(getContentPane())->add(splitPane);
}

bug8132123::bug8132123() {
}

$Class* bug8132123::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8132123$$Lambda$lambda$init$0")) {
			return bug8132123$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8132123, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug8132123, init, void)},
		{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug8132123, lambda$init$0, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8132123",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8132123, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8132123));
	});
	return class$;
}

$Class* bug8132123::class$ = nullptr;
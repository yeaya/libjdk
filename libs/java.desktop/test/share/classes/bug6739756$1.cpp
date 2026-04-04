#include <bug6739756$1.h>
#include <bug6739756.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JToolBar = ::javax::swing::JToolBar;

void bug6739756$1::init$() {
}

void bug6739756$1::run() {
	$useLocalObjectStack();
	$var($JToolBar, tb, $new($JToolBar));
	$var($Dimension, preferredSize, tb->getPreferredSize());
	$var($JButton, button, $new($JButton, "Test"_s));
	button->setVisible(false);
	tb->add(button);
	if (!$nc(preferredSize)->equals($(tb->getPreferredSize()))) {
		$throwNew($RuntimeException, "Toolbar\'s preferredSize is wrong"_s);
	}
}

bug6739756$1::bug6739756$1() {
}

$Class* bug6739756$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6739756$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6739756$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6739756",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6739756$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6739756$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6739756"
	};
	$loadClass(bug6739756$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6739756$1);
	});
	return class$;
}

$Class* bug6739756$1::class$ = nullptr;
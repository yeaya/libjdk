#include <LastNodeLowerHalfDrop$1.h>
#include <LastNodeLowerHalfDrop.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $LastNodeLowerHalfDrop = ::LastNodeLowerHalfDrop;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void LastNodeLowerHalfDrop$1::init$() {
}

void LastNodeLowerHalfDrop$1::run() {
	$useLocalObjectStack();
	$init($LastNodeLowerHalfDrop);
	$assignStatic($LastNodeLowerHalfDrop::f, $new($JFrame));
	$LastNodeLowerHalfDrop::f->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($LastNodeLowerHalfDrop::f)->add($($$new($LastNodeLowerHalfDrop)->getContent()));
	$nc($LastNodeLowerHalfDrop::f)->setSize(400, 400);
	$nc($LastNodeLowerHalfDrop::f)->setLocationRelativeTo(nullptr);
	$nc($LastNodeLowerHalfDrop::f)->setVisible(true);
}

LastNodeLowerHalfDrop$1::LastNodeLowerHalfDrop$1() {
}

$Class* LastNodeLowerHalfDrop$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LastNodeLowerHalfDrop$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastNodeLowerHalfDrop$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastNodeLowerHalfDrop",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastNodeLowerHalfDrop$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastNodeLowerHalfDrop$1",
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
		"LastNodeLowerHalfDrop"
	};
	$loadClass(LastNodeLowerHalfDrop$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastNodeLowerHalfDrop$1);
	});
	return class$;
}

$Class* LastNodeLowerHalfDrop$1::class$ = nullptr;
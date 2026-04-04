#include <bug6913768$1.h>
#include <bug6913768.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;

void bug6913768$1::init$() {
}

void bug6913768$1::run() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	$var($JTable, table, $new($JTable, $$new($ObjectArray2, {
		$$new($ObjectArray, {
			"1"_s,
			"2"_s
		}),
		$$new($ObjectArray, {
			"3"_s,
			"4"_s
		})
	}), $$new($ObjectArray, {
		"col1"_s,
		"col2"_s
	})));
	$$nc(frame->getContentPane())->add($$new($JScrollPane, table));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setSize(300, 200);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

bug6913768$1::bug6913768$1() {
}

$Class* bug6913768$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6913768$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6913768$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6913768",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6913768$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6913768$1",
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
		"bug6913768"
	};
	$loadClass(bug6913768$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6913768$1);
	});
	return class$;
}

$Class* bug6913768$1::class$ = nullptr;
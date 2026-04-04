#include <TableViewLayoutTest$2.h>
#include <TableViewLayoutTest.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TableViewLayoutTest$2::init$() {
}

void TableViewLayoutTest$2::run() {
	$init($TableViewLayoutTest);
	$assignStatic($TableViewLayoutTest::frame, $new($TableViewLayoutTest));
	$TableViewLayoutTest::frame->setVisible(true);
}

TableViewLayoutTest$2::TableViewLayoutTest$2() {
}

$Class* TableViewLayoutTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TableViewLayoutTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TableViewLayoutTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TableViewLayoutTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TableViewLayoutTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TableViewLayoutTest$2",
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
		"TableViewLayoutTest"
	};
	$loadClass(TableViewLayoutTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableViewLayoutTest$2);
	});
	return class$;
}

$Class* TableViewLayoutTest$2::class$ = nullptr;
#include <TableViewLayoutTest$5.h>
#include <TableViewLayoutTest.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TableViewLayoutTest$5::init$() {
}

void TableViewLayoutTest$5::run() {
	$init($TableViewLayoutTest);
	$nc($TableViewLayoutTest::frame)->dispose();
}

TableViewLayoutTest$5::TableViewLayoutTest$5() {
}

$Class* TableViewLayoutTest$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TableViewLayoutTest$5, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TableViewLayoutTest$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TableViewLayoutTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TableViewLayoutTest$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TableViewLayoutTest$5",
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
	$loadClass(TableViewLayoutTest$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableViewLayoutTest$5);
	});
	return class$;
}

$Class* TableViewLayoutTest$5::class$ = nullptr;
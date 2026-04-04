#include <bug6894632$1.h>
#include <bug6894632.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

#undef UNSORTED

using $bug6894632 = ::bug6894632;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;

void bug6894632$1::init$() {
}

void bug6894632$1::run() {
	$useLocalObjectStack();
	$bug6894632::test($$new($ArrayList));
	$var($List, sortKeys, $new($ArrayList));
	$init($SortOrder);
	sortKeys->add(0, $$new($RowSorter$SortKey, 0, $SortOrder::UNSORTED));
	$bug6894632::test(sortKeys);
}

bug6894632$1::bug6894632$1() {
}

$Class* bug6894632$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6894632$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6894632$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6894632",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6894632$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6894632$1",
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
		"bug6894632"
	};
	$loadClass(bug6894632$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6894632$1);
	});
	return class$;
}

$Class* bug6894632$1::class$ = nullptr;
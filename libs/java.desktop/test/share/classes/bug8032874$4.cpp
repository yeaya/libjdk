#include <bug8032874$4.h>
#include <bug8032874.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

void bug8032874$4::init$() {
	$RowFilter::init$();
}

bool bug8032874$4::include($RowFilter$Entry* entry) {
	return $$sure($Integer, $nc(entry)->getIdentifier())->intValue() % 2 == 0;
}

bug8032874$4::bug8032874$4() {
}

$Class* bug8032874$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8032874$4, init$, void)},
		{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+Lbug8032874$TestTableModel;+Ljava/lang/Integer;>;)Z", $PUBLIC, $virtualMethod(bug8032874$4, include, bool, $RowFilter$Entry*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032874",
		"createAndShowUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032874$4", nullptr, nullptr, 0},
		{"bug8032874$TestTableModel", "bug8032874", "TestTableModel", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032874$4",
		"javax.swing.RowFilter",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/RowFilter<Lbug8032874$TestTableModel;Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8032874"
	};
	$loadClass(bug8032874$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032874$4);
	});
	return class$;
}

$Class* bug8032874$4::class$ = nullptr;
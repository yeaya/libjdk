#include <bug6884066$1.h>
#include <bug6884066.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6884066 = ::bug6884066;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $JTableHeader = ::javax::swing::table::JTableHeader;

void bug6884066$1::init$() {
}

void bug6884066$1::run() {
	$useLocalObjectStack();
	$var($JTable, table, $new($JTable, 10, 5));
	$init($bug6884066);
	$assignStatic($bug6884066::header, $new($JTableHeader, $(table->getColumnModel())));
	$bug6884066::checkColumn(0, "A"_s);
	$var($JFrame, frame, $new($JFrame, "standalone header"_s));
	frame->add($bug6884066::header);
	frame->pack();
	frame->setVisible(true);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
}

bug6884066$1::bug6884066$1() {
}

$Class* bug6884066$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6884066$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6884066$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6884066",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6884066$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6884066$1",
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
		"bug6884066"
	};
	$loadClass(bug6884066$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6884066$1);
	});
	return class$;
}

$Class* bug6884066$1::class$ = nullptr;
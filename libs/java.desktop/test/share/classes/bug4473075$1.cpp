#include <bug4473075$1.h>
#include <bug4473075.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef AUTO_RESIZE_OFF
#undef EXIT_ON_CLOSE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug4473075 = ::bug4473075;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

void bug4473075$1::init$() {
}

void bug4473075$1::run() {
	$useLocalObjectStack();
	$init($bug4473075);
	$assignStatic($bug4473075::frame, $new($JFrame));
	$bug4473075::frame->setUndecorated(true);
	$nc($bug4473075::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug4473075::table, $new($JTable));
	$var($String, t, "a cell text"_s);
	$bug4473075::table->setModel($$new($DefaultTableModel, $$new($ObjectArray2, {$$new($ObjectArray, {
		t,
		t,
		t,
		t,
		t
	})}), $$new($ObjectArray, {
		t,
		t,
		t,
		t,
		t
	})));
	$nc($bug4473075::table)->setAutoResizeMode($JTable::AUTO_RESIZE_OFF);
	$assignStatic($bug4473075::scpScroll, $new($JScrollPane, $bug4473075::table));
	$var($Dimension, preferredSize, $new($Dimension, $nc($($nc($bug4473075::table)->getSize()))->width, 40));
	$$nc($nc($bug4473075::table)->getTableHeader())->setPreferredSize(preferredSize);
	$nc($bug4473075::frame)->setContentPane($bug4473075::scpScroll);
	$nc($bug4473075::frame)->setSize(250, 480);
	$nc($bug4473075::frame)->setLocationRelativeTo(nullptr);
	$nc($bug4473075::frame)->setVisible(true);
	$assignStatic($bug4473075::point, $$nc($nc($bug4473075::scpScroll)->getHorizontalScrollBar())->getLocationOnScreen());
}

bug4473075$1::bug4473075$1() {
}

$Class* bug4473075$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4473075$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4473075$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4473075",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4473075$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4473075$1",
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
		"bug4473075"
	};
	$loadClass(bug4473075$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4473075$1);
	});
	return class$;
}

$Class* bug4473075$1::class$ = nullptr;
#include <bug6777378$1.h>
#include <bug6777378$1$1.h>
#include <bug6777378.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6777378 = ::bug6777378;
using $bug6777378$1$1 = ::bug6777378$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $JTableHeader = ::javax::swing::table::JTableHeader;

void bug6777378$1::init$() {
}

void bug6777378$1::run() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	$var($JTable, table, $new($JTable, $$new($bug6777378$1$1, this)));
	$init($bug6777378);
	$assignStatic($bug6777378::header, $new($JTableHeader, $(table->getColumnModel())));
	$nc($bug6777378::header)->setToolTipText("hello"_s);
	$assignStatic($bug6777378::frame, $new($JFrame));
	$bug6777378::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug6777378::frame)->add($bug6777378::header);
	$nc($bug6777378::frame)->setSize(300, 300);
	$nc($bug6777378::frame)->setVisible(true);
}

bug6777378$1::bug6777378$1() {
}

$Class* bug6777378$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6777378$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6777378$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6777378",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6777378$1", nullptr, nullptr, 0},
		{"bug6777378$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6777378$1",
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
		"bug6777378"
	};
	$loadClass(bug6777378$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6777378$1);
	});
	return class$;
}

$Class* bug6777378$1::class$ = nullptr;
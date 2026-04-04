#include <bug6889007$1.h>
#include <bug6889007$MyTableHeaderUI.h>
#include <bug6889007.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6889007$MyTableHeaderUI = ::bug6889007$MyTableHeaderUI;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $JTableHeader = ::javax::swing::table::JTableHeader;

void bug6889007$1::init$($JFrame* val$frame) {
	$set(this, val$frame, val$frame);
}

void bug6889007$1::run() {
	$useLocalObjectStack();
	$nc(this->val$frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JTableHeader, th, $new($JTableHeader));
	th->setColumnModel($($$new($JTable, 20, 5)->getColumnModel()));
	th->setUI($$new($bug6889007$MyTableHeaderUI));
	this->val$frame->add(th);
	this->val$frame->pack();
	this->val$frame->setLocationRelativeTo(nullptr);
	this->val$frame->setVisible(true);
}

bug6889007$1::bug6889007$1() {
}

$Class* bug6889007$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$frame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(bug6889007$1, val$frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(bug6889007$1, init$, void, $JFrame*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6889007$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6889007",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6889007$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6889007$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6889007"
	};
	$loadClass(bug6889007$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6889007$1);
	});
	return class$;
}

$Class* bug6889007$1::class$ = nullptr;
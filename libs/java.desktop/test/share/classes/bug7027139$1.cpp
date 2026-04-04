#include <bug7027139$1.h>
#include <bug7027139$1$1.h>
#include <bug7027139.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $bug7027139$1$1 = ::bug7027139$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

void bug7027139$1::init$() {
}

void bug7027139$1::run() {
	$useLocalObjectStack();
	$var($JTable, orderTable, $new($JTable, $$cast($ObjectArray2, $new($StringArray2, {
		$$new($StringArray, {
			"Item 1 1"_s,
			"Item 1 2"_s
		}),
		$$new($StringArray, {
			"Item 2 1"_s,
			"Item 2 2"_s
		}),
		$$new($StringArray, {
			"Item 3 1"_s,
			"Item 3 2"_s
		}),
		$$new($StringArray, {
			"Item 4 1"_s,
			"Item 4 2"_s
		})
	})), $$new($StringArray, {
		"Col 1"_s,
		"Col 2"_s
	})));
	$var($ListSelectionModel, selectionModel, orderTable->getSelectionModel());
	$nc(selectionModel)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	selectionModel->addListSelectionListener($$new($bug7027139$1$1, this));
	orderTable->selectAll();
}

bug7027139$1::bug7027139$1() {
}

$Class* bug7027139$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7027139$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7027139$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7027139",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7027139$1", nullptr, nullptr, 0},
		{"bug7027139$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7027139$1",
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
		"bug7027139"
	};
	$loadClass(bug7027139$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7027139$1);
	});
	return class$;
}

$Class* bug7027139$1::class$ = nullptr;
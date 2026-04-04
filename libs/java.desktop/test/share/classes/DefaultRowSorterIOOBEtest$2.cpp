#include <DefaultRowSorterIOOBEtest$2.h>
#include <DefaultRowSorterIOOBEtest$SorterModelWrapper.h>
#include <DefaultRowSorterIOOBEtest.h>
#include <javax/swing/DefaultRowSorter.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest$SorterModelWrapper = ::DefaultRowSorterIOOBEtest$SorterModelWrapper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;

void DefaultRowSorterIOOBEtest$2::init$() {
	$DefaultRowSorter::init$();
	{
		setModelWrapper($$new($DefaultRowSorterIOOBEtest$SorterModelWrapper));
	}
}

DefaultRowSorterIOOBEtest$2::DefaultRowSorterIOOBEtest$2() {
}

$Class* DefaultRowSorterIOOBEtest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultRowSorterIOOBEtest$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DefaultRowSorterIOOBEtest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultRowSorterIOOBEtest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultRowSorterIOOBEtest$2",
		"javax.swing.DefaultRowSorter",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/DefaultRowSorter<Ljavax/swing/table/TableModel;Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DefaultRowSorterIOOBEtest"
	};
	$loadClass(DefaultRowSorterIOOBEtest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRowSorterIOOBEtest$2);
	});
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$2::class$ = nullptr;
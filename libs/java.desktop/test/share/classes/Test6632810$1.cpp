#include <Test6632810$1.h>
#include <Test6632810.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

void Test6632810$1::init$() {
}

void Test6632810$1::run() {
	$useLocalObjectStack();
	$var($BasicScrollPaneUI, ui, $new($BasicScrollPaneUI));
	ui->installUI($$new($JScrollPane));
	try {
		ui->getBaseline(nullptr, 1, 1);
		$throwNew($RuntimeException, "getBaseline(null, 1, 1) does not throw NPE"_s);
	} catch ($NullPointerException& e) {
	}
	$var($intArray2, illegelParams, $new($intArray2, {
		$$new($ints, {
			-1,
			1
		}),
		$$new($ints, {
			1,
			-1
		}),
		$$new($ints, {
			-1,
			-1
		})
	}));
	{
		$var($intArray2, arr$, illegelParams);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($ints, illegelParam, arr$->get(i$));
			try {
				int32_t width = $nc(illegelParam)->get(0);
				int32_t height = illegelParam->get(1);
				ui->getBaseline($$new($JScrollPane), width, height);
				$throwNew($RuntimeException, $$str({"getBaseline(new JScrollPane(), "_s, $$str(width), ", "_s, $$str(height), ") does not throw IAE"_s}));
			} catch ($IllegalArgumentException& e) {
			}
		}
	}
}

Test6632810$1::Test6632810$1() {
}

$Class* Test6632810$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6632810$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6632810$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6632810",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6632810$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6632810$1",
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
		"Test6632810"
	};
	$loadClass(Test6632810$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6632810$1);
	});
	return class$;
}

$Class* Test6632810$1::class$ = nullptr;
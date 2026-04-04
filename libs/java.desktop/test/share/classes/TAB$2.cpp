#include <TAB$2.h>
#include <TAB.h>
#include <java/awt/Color.h>
#include <java/lang/Number.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

void TAB$2::init$() {
	$DefaultTableCellRenderer::init$();
}

void TAB$2::setValue(Object$* value) {
	int32_t cellValue = ($instanceOf($Number, value)) ? $cast($Number, value)->intValue() : 0;
	$init($Color);
	setForeground((cellValue > 30) ? $Color::black : $Color::red);
	setText((value == nullptr) ? ""_s : $($of(value)->toString()));
}

TAB$2::TAB$2() {
}

$Class* TAB$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TAB$2, init$, void)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TAB$2, setValue, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TAB",
		"initTest",
		"(Ljava/awt/Container;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TAB$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TAB$2",
		"javax.swing.table.DefaultTableCellRenderer",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TAB"
	};
	$loadClass(TAB$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TAB$2));
	});
	return class$;
}

$Class* TAB$2::class$ = nullptr;
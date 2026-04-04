#include <KeyBoardNavigation$2.h>
#include <KeyBoardNavigation.h>
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

void KeyBoardNavigation$2::init$() {
	$DefaultTableCellRenderer::init$();
}

void KeyBoardNavigation$2::setValue(Object$* value) {
	int32_t cellValue = ($instanceOf($Number, value)) ? $cast($Number, value)->intValue() : 0;
	$init($Color);
	setForeground((cellValue > 30) ? $Color::black : $Color::red);
	setText((value == nullptr) ? ""_s : $($of(value)->toString()));
}

KeyBoardNavigation$2::KeyBoardNavigation$2() {
}

$Class* KeyBoardNavigation$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyBoardNavigation$2, init$, void)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$2, setValue, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeyBoardNavigation",
		"initTest",
		"(Ljava/awt/Container;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeyBoardNavigation$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeyBoardNavigation$2",
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
		"KeyBoardNavigation"
	};
	$loadClass(KeyBoardNavigation$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KeyBoardNavigation$2));
	});
	return class$;
}

$Class* KeyBoardNavigation$2::class$ = nullptr;
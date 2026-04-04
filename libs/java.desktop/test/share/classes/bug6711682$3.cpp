#include <bug6711682$3.h>
#include <bug6711682.h>
#include <java/awt/Component.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef TRUE

using $bug6711682 = ::bug6711682;
using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

void bug6711682$3::init$() {
}

$Component* bug6711682$3::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$init($bug6711682);
	$nc($bug6711682::rendererCb)->setSelected($nc($Boolean::TRUE)->equals(value));
	return $bug6711682::rendererCb;
}

bug6711682$3::bug6711682$3() {
}

$Class* bug6711682$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6711682$3, init$, void)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(bug6711682$3, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6711682",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6711682$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6711682$3",
		"java.lang.Object",
		"javax.swing.table.TableCellRenderer",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6711682"
	};
	$loadClass(bug6711682$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6711682$3);
	});
	return class$;
}

$Class* bug6711682$3::class$ = nullptr;
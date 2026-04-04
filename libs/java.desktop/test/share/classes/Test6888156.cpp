#include <Test6888156.h>
#include <Test6888156$1.h>
#include <Test6888156$2.h>
#include <Test6888156$3.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef ICON

using $Test6888156$1 = ::Test6888156$1;
using $Test6888156$2 = ::Test6888156$2;
using $Test6888156$3 = ::Test6888156$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $TableModel = ::javax::swing::table::TableModel;

void Test6888156::init$() {
	$set(this, ICON, $new($Test6888156$1, this));
	$var($TableModel, model, $new($Test6888156$2, this));
	$set(this, table, $new($JTable, model));
}

void Test6888156::test($String* laf) {
	$SwingUtilities::invokeAndWait($$new($Test6888156$3, this, laf));
}

void Test6888156::main($StringArray* args) {
	$useLocalObjectStack();
	$var(Test6888156, t, $new(Test6888156));
	t->test("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	t->test("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				t->test($($nc(laf)->getClassName()));
			}
		}
	}
}

Test6888156::Test6888156() {
}

$Class* Test6888156::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(Test6888156, table)},
		{"ICON", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(Test6888156, ICON)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6888156, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6888156, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Test6888156, test, void, $String*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6888156$3", nullptr, nullptr, 0},
		{"Test6888156$2", nullptr, nullptr, 0},
		{"Test6888156$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6888156",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6888156$3,Test6888156$2,Test6888156$1"
	};
	$loadClass(Test6888156, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6888156);
	});
	return class$;
}

$Class* Test6888156::class$ = nullptr;
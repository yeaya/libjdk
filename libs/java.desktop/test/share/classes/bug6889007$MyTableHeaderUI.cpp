#include <bug6889007$MyTableHeaderUI.h>
#include <bug6889007.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

#undef E_RESIZE_CURSOR

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;

int32_t bug6889007$MyTableHeaderUI::testValue = 0;

void bug6889007$MyTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
}

void bug6889007$MyTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
	increaseTestValue(newColumn);
	$var($Cursor, cursor, $Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR));
	if (oldColumn != -1 && newColumn != -1 && $nc(this->header)->getCursor() != cursor) {
		$throwNew($RuntimeException, "Wrong type of cursor!"_s);
	}
}

void bug6889007$MyTableHeaderUI::increaseTestValue(int32_t increment) {
	$init(bug6889007$MyTableHeaderUI);
	$synchronized(class$) {
		bug6889007$MyTableHeaderUI::testValue += increment;
	}
}

int32_t bug6889007$MyTableHeaderUI::getTestValue() {
	$init(bug6889007$MyTableHeaderUI);
	$synchronized(class$) {
		return bug6889007$MyTableHeaderUI::testValue;
	}
}

bug6889007$MyTableHeaderUI::bug6889007$MyTableHeaderUI() {
}

$Class* bug6889007$MyTableHeaderUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testValue", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug6889007$MyTableHeaderUI, testValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6889007$MyTableHeaderUI, init$, void)},
		{"getTestValue", "()I", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(bug6889007$MyTableHeaderUI, getTestValue, int32_t)},
		{"increaseTestValue", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(bug6889007$MyTableHeaderUI, increaseTestValue, void, int32_t)},
		{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED, $virtualMethod(bug6889007$MyTableHeaderUI, rolloverColumnUpdated, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6889007$MyTableHeaderUI", "bug6889007", "MyTableHeaderUI", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6889007$MyTableHeaderUI",
		"javax.swing.plaf.basic.BasicTableHeaderUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6889007"
	};
	$loadClass(bug6889007$MyTableHeaderUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6889007$MyTableHeaderUI);
	});
	return class$;
}

$Class* bug6889007$MyTableHeaderUI::class$ = nullptr;
#include <ClearSelTest$1.h>
#include <ClearSelTest.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

void ClearSelTest$1::init$($JTable* val$table) {
	$set(this, val$table, val$table);
	$MouseAdapter::init$();
}

void ClearSelTest$1::mouseMoved($MouseEvent* pE) {
	int32_t row = $nc(this->val$table)->rowAtPoint($($nc(pE)->getPoint()));
	if (row > -1) {
		this->val$table->setRowSelectionInterval(row, row);
	} else {
		this->val$table->clearSelection();
	}
}

void ClearSelTest$1::mouseEntered($MouseEvent* pE) {
	int32_t row = $nc(this->val$table)->rowAtPoint($($nc(pE)->getPoint()));
	if (row > -1) {
		this->val$table->setRowSelectionInterval(row, row);
	} else {
		this->val$table->clearSelection();
	}
}

void ClearSelTest$1::mouseExited($MouseEvent* pE) {
	$nc(this->val$table)->clearSelection();
}

ClearSelTest$1::ClearSelTest$1() {
}

$Class* ClearSelTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$table", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(ClearSelTest$1, val$table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable;)V", nullptr, 0, $method(ClearSelTest$1, init$, void, $JTable*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest$1, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest$1, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest$1, mouseMoved, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ClearSelTest",
		"clearSelTest",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClearSelTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ClearSelTest$1",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ClearSelTest"
	};
	$loadClass(ClearSelTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ClearSelTest$1));
	});
	return class$;
}

$Class* ClearSelTest$1::class$ = nullptr;
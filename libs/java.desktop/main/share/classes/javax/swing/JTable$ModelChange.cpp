#include <javax/swing/JTable$ModelChange.h>
#include <java/lang/Math.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;

namespace javax {
	namespace swing {

void JTable$ModelChange::init$($JTable* this$0, $TableModelEvent* e) {
	$set(this, this$0, this$0);
	this->startModelIndex = $Math::max(0, $nc(e)->getFirstRow());
	this->endModelIndex = e->getLastRow();
	this->modelRowCount = $$nc(this$0->getModel())->getRowCount();
	if (this->endModelIndex < 0) {
		this->endModelIndex = $Math::max(0, this->modelRowCount - 1);
	}
	this->length = this->endModelIndex - this->startModelIndex + 1;
	this->type = e->getType();
	$set(this, event, e);
	this->allRowsChanged = (e->getLastRow() == $Integer::MAX_VALUE);
}

JTable$ModelChange::JTable$ModelChange() {
}

$Class* JTable$ModelChange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ModelChange, this$0)},
		{"startModelIndex", "I", nullptr, 0, $field(JTable$ModelChange, startModelIndex)},
		{"endModelIndex", "I", nullptr, 0, $field(JTable$ModelChange, endModelIndex)},
		{"type", "I", nullptr, 0, $field(JTable$ModelChange, type)},
		{"modelRowCount", "I", nullptr, 0, $field(JTable$ModelChange, modelRowCount)},
		{"event", "Ljavax/swing/event/TableModelEvent;", nullptr, 0, $field(JTable$ModelChange, event)},
		{"length", "I", nullptr, 0, $field(JTable$ModelChange, length)},
		{"allRowsChanged", "Z", nullptr, 0, $field(JTable$ModelChange, allRowsChanged)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/event/TableModelEvent;)V", nullptr, 0, $method(JTable$ModelChange, init$, void, $JTable*, $TableModelEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$ModelChange", "javax.swing.JTable", "ModelChange", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.JTable$ModelChange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$ModelChange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$ModelChange);
	});
	return class$;
}

$Class* JTable$ModelChange::class$ = nullptr;

	} // swing
} // javax
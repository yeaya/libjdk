#include <javax/swing/DefaultRowSorter$FilterEntry.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/RowFilter$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

void DefaultRowSorter$FilterEntry::init$($DefaultRowSorter* this$0) {
	$set(this, this$0, this$0);
	$RowFilter$Entry::init$();
}

$Object* DefaultRowSorter$FilterEntry::getModel() {
	return $$nc(this->this$0->getModelWrapper())->getModel();
}

int32_t DefaultRowSorter$FilterEntry::getValueCount() {
	return $$nc(this->this$0->getModelWrapper())->getColumnCount();
}

$Object* DefaultRowSorter$FilterEntry::getValue(int32_t index) {
	return $$nc(this->this$0->getModelWrapper())->getValueAt(this->modelIndex, index);
}

$String* DefaultRowSorter$FilterEntry::getStringValue(int32_t index) {
	return $$nc(this->this$0->getModelWrapper())->getStringValueAt(this->modelIndex, index);
}

$Object* DefaultRowSorter$FilterEntry::getIdentifier() {
	return $$nc(this->this$0->getModelWrapper())->getIdentifier(this->modelIndex);
}

DefaultRowSorter$FilterEntry::DefaultRowSorter$FilterEntry() {
}

$Class* DefaultRowSorter$FilterEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/DefaultRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultRowSorter$FilterEntry, this$0)},
		{"modelIndex", "I", nullptr, 0, $field(DefaultRowSorter$FilterEntry, modelIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultRowSorter;)V", nullptr, $PRIVATE, $method(DefaultRowSorter$FilterEntry, init$, void, $DefaultRowSorter*)},
		{"getIdentifier", "()Ljava/lang/Object;", "()TI;", $PUBLIC, $virtualMethod(DefaultRowSorter$FilterEntry, getIdentifier, $Object*)},
		{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC, $virtualMethod(DefaultRowSorter$FilterEntry, getModel, $Object*)},
		{"getStringValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorter$FilterEntry, getStringValue, $String*, int32_t)},
		{"getValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorter$FilterEntry, getValue, $Object*, int32_t)},
		{"getValueCount", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorter$FilterEntry, getValueCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.DefaultRowSorter$FilterEntry", "javax.swing.DefaultRowSorter", "FilterEntry", $PRIVATE},
		{"javax.swing.RowFilter$Entry", "javax.swing.RowFilter", "Entry", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DefaultRowSorter$FilterEntry",
		"javax.swing.RowFilter$Entry",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/RowFilter$Entry<TM;TI;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.DefaultRowSorter"
	};
	$loadClass(DefaultRowSorter$FilterEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRowSorter$FilterEntry);
	});
	return class$;
}

$Class* DefaultRowSorter$FilterEntry::class$ = nullptr;

	} // swing
} // javax
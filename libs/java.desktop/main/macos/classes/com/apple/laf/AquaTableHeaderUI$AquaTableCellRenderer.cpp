#include <com/apple/laf/AquaTableHeaderUI$AquaTableCellRenderer.h>
#include <com/apple/laf/AquaTableHeaderBorder.h>
#include <com/apple/laf/AquaTableHeaderUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef SORT_NONE

using $AquaTableHeaderBorder = ::com::apple::laf::AquaTableHeaderBorder;
using $AquaTableHeaderUI = ::com::apple::laf::AquaTableHeaderUI;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

namespace com {
	namespace apple {
		namespace laf {

$String* AquaTableHeaderUI$AquaTableCellRenderer::toString() {
	return this->$DefaultTableCellRenderer::toString();
}

int32_t AquaTableHeaderUI$AquaTableCellRenderer::hashCode() {
	return this->$DefaultTableCellRenderer::hashCode();
}

bool AquaTableHeaderUI$AquaTableCellRenderer::equals(Object$* arg0) {
	return this->$DefaultTableCellRenderer::equals(arg0);
}

$Object* AquaTableHeaderUI$AquaTableCellRenderer::clone() {
	return this->$DefaultTableCellRenderer::clone();
}

void AquaTableHeaderUI$AquaTableCellRenderer::finalize() {
	this->$DefaultTableCellRenderer::finalize();
}

void AquaTableHeaderUI$AquaTableCellRenderer::init$($AquaTableHeaderUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
}

$Component* AquaTableHeaderUI$AquaTableCellRenderer::getTableCellRendererComponent($JTable* localTable, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalObjectStack();
	if (localTable != nullptr) {
		if ($AquaTableHeaderUI::access$000(this->this$0) != nullptr) {
			setForeground($($$nc($AquaTableHeaderUI::access$100(this->this$0))->getForeground()));
			setBackground($($$nc($AquaTableHeaderUI::access$200(this->this$0))->getBackground()));
			setFont($($UIManager::getFont("TableHeader.font"_s)));
		}
	}
	setText((value == nullptr) ? ""_s : $($of(value)->toString()));
	$var($AquaTableHeaderBorder, cellBorder, $AquaTableHeaderBorder::getListHeaderBorder());
	$nc(cellBorder)->setSortOrder($AquaTableHeaderBorder::SORT_NONE);
	if (localTable != nullptr) {
		bool thisColumnSelected = $$nc($$nc(localTable->getColumnModel())->getColumn(column))->getModelIndex() == this->this$0->sortColumn;
		cellBorder->setSelected(thisColumnSelected);
		if (thisColumnSelected) {
			cellBorder->setSortOrder(this->this$0->sortOrder);
		}
	}
	setBorder(cellBorder);
	return this;
}

AquaTableHeaderUI$AquaTableCellRenderer::AquaTableHeaderUI$AquaTableCellRenderer() {
}

$Class* AquaTableHeaderUI$AquaTableCellRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTableHeaderUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableHeaderUI$AquaTableCellRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/apple/laf/AquaTableHeaderUI;)V", nullptr, 0, $method(AquaTableHeaderUI$AquaTableCellRenderer, init$, void, $AquaTableHeaderUI*)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(AquaTableHeaderUI$AquaTableCellRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTableHeaderUI$AquaTableCellRenderer", "com.apple.laf.AquaTableHeaderUI", "AquaTableCellRenderer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTableHeaderUI$AquaTableCellRenderer",
		"javax.swing.table.DefaultTableCellRenderer",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTableHeaderUI"
	};
	$loadClass(AquaTableHeaderUI$AquaTableCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTableHeaderUI$AquaTableCellRenderer));
	});
	return class$;
}

$Class* AquaTableHeaderUI$AquaTableCellRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com
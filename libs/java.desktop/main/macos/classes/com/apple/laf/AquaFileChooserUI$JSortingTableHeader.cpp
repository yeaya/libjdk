#include <com/apple/laf/AquaFileChooserUI$JSortingTableHeader.h>
#include <com/apple/laf/AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef LEFT
#undef SORT_ASCENDING_CHANGED
#undef SORT_BY_CHANGED

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer = ::com::apple::laf::AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$JSortingTableHeader::init$($AquaFileChooserUI* this$0, $TableColumnModel* cm) {
	$set(this, this$0, this$0);
	$JTableHeader::init$(cm);
	$set(this, fSortAscending, $new($booleans, {
		true,
		true
	}));
	setReorderingAllowed(true);
}

void AquaFileChooserUI$JSortingTableHeader::setDraggedColumn($TableColumn* aColumn) {
	if (aColumn != nullptr) {
		int32_t colIndex = aColumn->getModelIndex();
		if (colIndex != this->this$0->fSortColumn) {
			$init($AquaFileSystemModel);
			$nc(this->this$0->filechooser)->firePropertyChange($AquaFileSystemModel::SORT_BY_CHANGED, this->this$0->fSortColumn, colIndex);
			this->this$0->fSortColumn = colIndex;
		} else {
			this->fSortAscending->set(colIndex, !this->fSortAscending->get(colIndex));
			$init($AquaFileSystemModel);
			$nc(this->this$0->filechooser)->firePropertyChange($AquaFileSystemModel::SORT_ASCENDING_CHANGED, !this->fSortAscending->get(colIndex), this->fSortAscending->get(colIndex));
		}
		repaint();
	}
}

$TableColumn* AquaFileChooserUI$JSortingTableHeader::getDraggedColumn() {
	return nullptr;
}

$TableCellRenderer* AquaFileChooserUI$JSortingTableHeader::createDefaultRenderer() {
	$var($DefaultTableCellRenderer, label, $new($AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer, this));
	label->setHorizontalAlignment($SwingConstants::LEFT);
	return label;
}

AquaFileChooserUI$JSortingTableHeader::AquaFileChooserUI$JSortingTableHeader() {
}

$Class* AquaFileChooserUI$JSortingTableHeader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$JSortingTableHeader, this$0)},
		{"fSortAscending", "[Z", nullptr, $FINAL, $field(AquaFileChooserUI$JSortingTableHeader, fSortAscending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljavax/swing/table/TableColumnModel;)V", nullptr, $PUBLIC, $method(AquaFileChooserUI$JSortingTableHeader, init$, void, $AquaFileChooserUI*, $TableColumnModel*)},
		{"createDefaultRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$JSortingTableHeader, createDefaultRenderer, $TableCellRenderer*)},
		{"getDraggedColumn", "()Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$JSortingTableHeader, getDraggedColumn, $TableColumn*)},
		{"setDraggedColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$JSortingTableHeader, setDraggedColumn, void, $TableColumn*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$JSortingTableHeader", "com.apple.laf.AquaFileChooserUI", "JSortingTableHeader", 0},
		{"com.apple.laf.AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer", "com.apple.laf.AquaFileChooserUI$JSortingTableHeader", "AquaTableCellRenderer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$JSortingTableHeader",
		"javax.swing.table.JTableHeader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$JSortingTableHeader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$JSortingTableHeader));
	});
	return class$;
}

$Class* AquaFileChooserUI$JSortingTableHeader::class$ = nullptr;

		} // laf
	} // apple
} // com
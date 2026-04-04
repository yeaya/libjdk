#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$JTableExtension::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JTable::init$();
}

void AquaFileChooserUI$JTableExtension::setSelectedIndex(int32_t index) {
	$$nc(getSelectionModel())->setSelectionInterval(index, index);
}

void AquaFileChooserUI$JTableExtension::removeSelectedIndex(int32_t index) {
	$$nc(getSelectionModel())->removeSelectionInterval(index, index);
}

void AquaFileChooserUI$JTableExtension::ensureIndexIsVisible(int32_t index) {
	$var($Rectangle, cellBounds, getCellRect(index, 0, false));
	if (cellBounds != nullptr) {
		scrollRectToVisible(cellBounds);
	}
}

int32_t AquaFileChooserUI$JTableExtension::locationToIndex($Point* location) {
	return rowAtPoint(location);
}

AquaFileChooserUI$JTableExtension::AquaFileChooserUI$JTableExtension() {
}

$Class* AquaFileChooserUI$JTableExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$JTableExtension, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(AquaFileChooserUI$JTableExtension, init$, void, $AquaFileChooserUI*)},
		{"ensureIndexIsVisible", "(I)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$JTableExtension, ensureIndexIsVisible, void, int32_t)},
		{"locationToIndex", "(Ljava/awt/Point;)I", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$JTableExtension, locationToIndex, int32_t, $Point*)},
		{"removeSelectedIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$JTableExtension, removeSelectedIndex, void, int32_t)},
		{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$JTableExtension, setSelectedIndex, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$JTableExtension", "com.apple.laf.AquaFileChooserUI", "JTableExtension", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$JTableExtension",
		"javax.swing.JTable",
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
	$loadClass(AquaFileChooserUI$JTableExtension, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$JTableExtension));
	});
	return class$;
}

$Class* AquaFileChooserUI$JTableExtension::class$ = nullptr;

		} // laf
	} // apple
} // com
#include <com/apple/laf/AquaFileChooserUI$FileRenderer.h>
#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$MacFCTableCellRenderer = ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTable = ::javax::swing::JTable;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$FileRenderer::init$($AquaFileChooserUI* this$0, $Font* f) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$MacFCTableCellRenderer::init$(this$0, f);
}

$Component* AquaFileChooserUI$FileRenderer::getTableCellRendererComponent($JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) {
	$useLocalObjectStack();
	$AquaFileChooserUI$MacFCTableCellRenderer::getTableCellRendererComponent(list, value, isSelected, false, index, col);
	$var($File, file, $cast($File, value));
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	setText($($nc(fc)->getName(file)));
	setIcon($(fc->getIcon(file)));
	setEnabled(this->this$0->isSelectableInList(file));
	return this;
}

AquaFileChooserUI$FileRenderer::AquaFileChooserUI$FileRenderer() {
}

$Class* AquaFileChooserUI$FileRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FileRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(AquaFileChooserUI$FileRenderer, init$, void, $AquaFileChooserUI*, $Font*)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$FileRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$FileRenderer", "com.apple.laf.AquaFileChooserUI", "FileRenderer", $PROTECTED},
		{"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer", "com.apple.laf.AquaFileChooserUI", "MacFCTableCellRenderer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$FileRenderer",
		"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer",
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
	$loadClass(AquaFileChooserUI$FileRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$FileRenderer));
	});
	return class$;
}

$Class* AquaFileChooserUI$FileRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com
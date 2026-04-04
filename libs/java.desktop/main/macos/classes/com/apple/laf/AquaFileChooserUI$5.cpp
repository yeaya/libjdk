#include <com/apple/laf/AquaFileChooserUI$5.h>
#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JList = ::javax::swing::JList;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$5::init$($AquaFileChooserUI* this$0, $JComboBox* comboBox) {
	$set(this, this$0, this$0);
	$AquaComboBoxRendererInternal::init$(comboBox);
}

$Component* AquaFileChooserUI$5::getListCellRendererComponent($JList* list, $FileFilter* filter, int32_t index, bool isSelected, bool cellHasFocus) {
	$AquaComboBoxRendererInternal::getListCellRendererComponent(list, filter, index, isSelected, cellHasFocus);
	if (filter != nullptr) {
		setText($(filter->getDescription()));
	}
	return this;
}

$Component* AquaFileChooserUI$5::getListCellRendererComponent($JList* list, Object$* filter, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($FileFilter, filter), index, isSelected, cellHasFocus);
}

AquaFileChooserUI$5::AquaFileChooserUI$5() {
}

$Class* AquaFileChooserUI$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$5, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljavax/swing/JComboBox;)V", nullptr, 0, $method(AquaFileChooserUI$5, init$, void, $AquaFileChooserUI*, $JComboBox*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljavax/swing/filechooser/FileFilter;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/filechooser/FileFilter;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(AquaFileChooserUI$5, getListCellRendererComponent, $Component*, $JList*, $FileFilter*, int32_t, bool, bool)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AquaFileChooserUI$5, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFileChooserUI",
		"createFilterComboBoxRenderer",
		"()Ljavax/swing/ListCellRenderer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$5",
		"com.apple.laf.AquaComboBoxRendererInternal",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaComboBoxRendererInternal<Ljavax/swing/filechooser/FileFilter;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$5));
	});
	return class$;
}

$Class* AquaFileChooserUI$5::class$ = nullptr;

		} // laf
	} // apple
} // com
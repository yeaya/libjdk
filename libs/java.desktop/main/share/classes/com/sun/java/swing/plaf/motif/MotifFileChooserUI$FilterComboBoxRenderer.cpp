#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Component.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JList = ::javax::swing::JList;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifFileChooserUI$FilterComboBoxRenderer::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* MotifFileChooserUI$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (value != nullptr && $instanceOf($FileFilter, value)) {
		setText($($cast($FileFilter, value)->getDescription()));
	}
	return this;
}

MotifFileChooserUI$FilterComboBoxRenderer::MotifFileChooserUI$FilterComboBoxRenderer() {
}

$Class* MotifFileChooserUI$FilterComboBoxRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$FilterComboBoxRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PUBLIC, $method(MotifFileChooserUI$FilterComboBoxRenderer, init$, void, $MotifFileChooserUI*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(MotifFileChooserUI$FilterComboBoxRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxRenderer",
		"javax.swing.DefaultListCellRenderer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
	};
	$loadClass(MotifFileChooserUI$FilterComboBoxRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifFileChooserUI$FilterComboBoxRenderer));
	});
	return class$;
}

$Class* MotifFileChooserUI$FilterComboBoxRenderer::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com
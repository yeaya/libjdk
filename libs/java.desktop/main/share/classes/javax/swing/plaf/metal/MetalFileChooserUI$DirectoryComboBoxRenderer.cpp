#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxRenderer.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxModel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$IndentIcon.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $JList = ::javax::swing::JList;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $MetalFileChooserUI$IndentIcon = ::javax::swing::plaf::metal::MetalFileChooserUI$IndentIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$DirectoryComboBoxRenderer::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
	$set(this, ii, $new($MetalFileChooserUI$IndentIcon, this->this$0));
}

$Component* MetalFileChooserUI$DirectoryComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (value == nullptr) {
		setText(""_s);
		return this;
	}
	$var($File, directory, $cast($File, value));
	setText($($$nc(this->this$0->getFileChooser())->getName(directory)));
	$var($Icon, icon, $$nc(this->this$0->getFileChooser())->getIcon(directory));
	$set($nc(this->ii), icon, icon);
	this->ii->depth = $nc(this->this$0->directoryComboBoxModel)->getDepth(index);
	setIcon(this->ii);
	return this;
}

MetalFileChooserUI$DirectoryComboBoxRenderer::MetalFileChooserUI$DirectoryComboBoxRenderer() {
}

$Class* MetalFileChooserUI$DirectoryComboBoxRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$DirectoryComboBoxRenderer, this$0)},
		{"ii", "Ljavax/swing/plaf/metal/MetalFileChooserUI$IndentIcon;", nullptr, 0, $field(MetalFileChooserUI$DirectoryComboBoxRenderer, ii)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(MetalFileChooserUI$DirectoryComboBoxRenderer, init$, void, $MetalFileChooserUI*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(MetalFileChooserUI$DirectoryComboBoxRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxRenderer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer",
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
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$DirectoryComboBoxRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalFileChooserUI$DirectoryComboBoxRenderer));
	});
	return class$;
}

$Class* MetalFileChooserUI$DirectoryComboBoxRenderer::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
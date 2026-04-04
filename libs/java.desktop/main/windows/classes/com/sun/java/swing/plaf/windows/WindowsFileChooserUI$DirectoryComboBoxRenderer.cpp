#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxModel.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $WindowsFileChooserUI$IndentIcon = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$IndentIcon;
using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $JList = ::javax::swing::JList;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$DirectoryComboBoxRenderer::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
	$set(this, ii, $new($WindowsFileChooserUI$IndentIcon, this->this$0));
}

$Component* WindowsFileChooserUI$DirectoryComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
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

WindowsFileChooserUI$DirectoryComboBoxRenderer::WindowsFileChooserUI$DirectoryComboBoxRenderer() {
}

$Class* WindowsFileChooserUI$DirectoryComboBoxRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$DirectoryComboBoxRenderer, this$0)},
		{"ii", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon;", nullptr, 0, $field(WindowsFileChooserUI$DirectoryComboBoxRenderer, ii)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(WindowsFileChooserUI$DirectoryComboBoxRenderer, init$, void, $WindowsFileChooserUI*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(WindowsFileChooserUI$DirectoryComboBoxRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxRenderer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxRenderer",
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
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$DirectoryComboBoxRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileChooserUI$DirectoryComboBoxRenderer));
	});
	return class$;
}

$Class* WindowsFileChooserUI$DirectoryComboBoxRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$FileCellRenderer.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JList = ::javax::swing::JList;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKFileChooserUI$FileCellRenderer::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* GTKFileChooserUI$FileCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	setText($($$nc(this->this$0->getFileChooser())->getName($cast($File, value))));
	if (this->this$0->showFileIcons) {
		setIcon($($$nc(this->this$0->getFileChooser())->getIcon($cast($File, value))));
	}
	return this;
}

GTKFileChooserUI$FileCellRenderer::GTKFileChooserUI$FileCellRenderer() {
}

$Class* GTKFileChooserUI$FileCellRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$FileCellRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(GTKFileChooserUI$FileCellRenderer, init$, void, $GTKFileChooserUI*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(GTKFileChooserUI$FileCellRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FileCellRenderer", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "FileCellRenderer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FileCellRenderer",
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
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$FileCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKFileChooserUI$FileCellRenderer));
	});
	return class$;
}

$Class* GTKFileChooserUI$FileCellRenderer::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
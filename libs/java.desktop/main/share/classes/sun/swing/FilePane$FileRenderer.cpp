#include <sun/swing/FilePane$FileRenderer.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <sun/swing/FilePane.h>
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
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$FileRenderer::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* FilePane$FileRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	if (this->this$0->listViewWindowsStyle && !$nc(list)->isFocusOwner()) {
		isSelected = false;
	}
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	$var($File, file, $cast($File, value));
	$var($String, fileName, $$nc(this->this$0->getFileChooser())->getName(file));
	setText(fileName);
	setFont($($nc(list)->getFont()));
	$var($Icon, icon, $$nc(this->this$0->getFileChooser())->getIcon(file));
	if (icon != nullptr) {
		setIcon(icon);
	} else if (($$nc($$nc($$nc(this->this$0->getFileChooser())->getFileSystemView())->isTraversable(file)))->booleanValue()) {
		$init($File);
		setText($$str({fileName, $File::separator}));
	}
	return this;
}

FilePane$FileRenderer::FilePane$FileRenderer() {
}

$Class* FilePane$FileRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$FileRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PROTECTED, $method(FilePane$FileRenderer, init$, void, $FilePane*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(FilePane$FileRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$FileRenderer", "sun.swing.FilePane", "FileRenderer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.FilePane$FileRenderer",
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
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$FileRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilePane$FileRenderer));
	});
	return class$;
}

$Class* FilePane$FileRenderer::class$ = nullptr;

	} // swing
} // sun
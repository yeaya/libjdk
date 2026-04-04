#include <sun/swing/FilePane$DelayedSelectionUpdater.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$DelayedSelectionUpdater::init$($FilePane* this$0) {
	FilePane$DelayedSelectionUpdater::init$(this$0, nullptr);
}

void FilePane$DelayedSelectionUpdater::init$($FilePane* this$0, $File* editFile) {
	$set(this, this$0, this$0);
	$set(this, editFile, editFile);
	if (this$0->isShowing()) {
		$SwingUtilities::invokeLater(this);
	}
}

void FilePane$DelayedSelectionUpdater::run() {
	$useLocalObjectStack();
	this->this$0->setFileSelected();
	if (this->editFile != nullptr) {
		this->this$0->editFileName($$nc(this->this$0->getRowSorter())->convertRowIndexToView($$nc(this->this$0->getModel())->indexOf(this->editFile)));
		$set(this, editFile, nullptr);
	}
}

FilePane$DelayedSelectionUpdater::FilePane$DelayedSelectionUpdater() {
}

$Class* FilePane$DelayedSelectionUpdater::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DelayedSelectionUpdater, this$0)},
		{"editFile", "Ljava/io/File;", nullptr, 0, $field(FilePane$DelayedSelectionUpdater, editFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(FilePane$DelayedSelectionUpdater, init$, void, $FilePane*)},
		{"<init>", "(Lsun/swing/FilePane;Ljava/io/File;)V", nullptr, 0, $method(FilePane$DelayedSelectionUpdater, init$, void, $FilePane*, $File*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FilePane$DelayedSelectionUpdater, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$DelayedSelectionUpdater", "sun.swing.FilePane", "DelayedSelectionUpdater", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$DelayedSelectionUpdater",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(FilePane$DelayedSelectionUpdater, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$DelayedSelectionUpdater);
	});
	return class$;
}

$Class* FilePane$DelayedSelectionUpdater::class$ = nullptr;

	} // swing
} // sun
#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader.h>
#include <java/io/File.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Vector.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader$1.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Vector = ::java::util::Vector;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicDirectoryModel$DoChangeContents = ::javax::swing::plaf::basic::BasicDirectoryModel$DoChangeContents;
using $BasicDirectoryModel$FilesLoader$1 = ::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader$1;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDirectoryModel$FilesLoader::init$($BasicDirectoryModel* this$0, $File* currentDirectory, int32_t fid) {
	$set(this, this$0, this$0);
	$set(this, currentDirectory, currentDirectory);
	this->fid = fid;
	$set(this, fileSystemView, $nc(this$0->filechooser)->getFileSystemView());
	this->useFileHiding = this$0->filechooser->isFileHidingEnabled();
	this->fileSelectionEnabled = this$0->filechooser->isFileSelectionEnabled();
	$var($String, name, "Basic L&F File Loading Thread"_s);
	$set(this, loadThread, $new($Thread, nullptr, this, name, 0, false));
	this->loadThread->start();
}

void BasicDirectoryModel$FilesLoader::run() {
	run0();
	this->this$0->setBusy(false, this->fid);
}

void BasicDirectoryModel$FilesLoader::run0() {
	$useLocalObjectStack();
	$var($FileSystemView, fileSystem, this->fileSystemView);
	if (this->loadThread->isInterrupted()) {
		return;
	}
	$var($FileArray, list, $nc(fileSystem)->getFiles(this->currentDirectory, this->useFileHiding));
	if (this->loadThread->isInterrupted()) {
		return;
	}
	$var($Vector, newFileCache, $new($Vector));
	$var($Vector, newFiles, $new($Vector));
	{
		$var($FileArray, arr$, list);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, file, arr$->get(i$));
			if ($nc(this->this$0->filechooser)->accept(file)) {
				bool isTraversable = this->this$0->filechooser->isTraversable(file);
				if (isTraversable) {
					newFileCache->addElement(file);
				} else if (this->fileSelectionEnabled) {
					newFiles->addElement(file);
				}
				if (this->loadThread->isInterrupted()) {
					return;
				}
			}
		}
	}
	this->this$0->sort(newFileCache);
	this->this$0->sort(newFiles);
	newFileCache->addAll($cast($AbstractCollection, newFiles));
	$set(this, runnable, $cast($BasicDirectoryModel$DoChangeContents, $ShellFolder::invoke($$new($BasicDirectoryModel$FilesLoader$1, this, newFileCache))));
	if (this->runnable != nullptr && !this->loadThread->isInterrupted()) {
		$SwingUtilities::invokeLater(this->runnable);
	}
}

void BasicDirectoryModel$FilesLoader::cancelRunnables() {
	if (this->runnable != nullptr) {
		$nc(this->runnable)->cancel();
	}
}

BasicDirectoryModel$FilesLoader::BasicDirectoryModel$FilesLoader() {
}

$Class* BasicDirectoryModel$FilesLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$FilesLoader, this$0)},
		{"fileSystemView", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$FilesLoader, fileSystemView)},
		{"useFileHiding", "Z", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$FilesLoader, useFileHiding)},
		{"fileSelectionEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$FilesLoader, fileSelectionEnabled)},
		{"fid", "I", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$FilesLoader, fid)},
		{"currentDirectory", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$FilesLoader, currentDirectory)},
		{"runnable", "Ljavax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents;", nullptr, $PRIVATE | $VOLATILE, $field(BasicDirectoryModel$FilesLoader, runnable)},
		{"loadThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$FilesLoader, loadThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDirectoryModel;Ljava/io/File;I)V", nullptr, $PRIVATE, $method(BasicDirectoryModel$FilesLoader, init$, void, $BasicDirectoryModel*, $File*, int32_t)},
		{"cancelRunnables", "()V", nullptr, $PRIVATE, $method(BasicDirectoryModel$FilesLoader, cancelRunnables, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BasicDirectoryModel$FilesLoader, run, void)},
		{"run0", "()V", nullptr, $PRIVATE, $method(BasicDirectoryModel$FilesLoader, run0, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader", "javax.swing.plaf.basic.BasicDirectoryModel", "FilesLoader", $PRIVATE | $FINAL},
		{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader",
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
		"javax.swing.plaf.basic.BasicDirectoryModel"
	};
	$loadClass(BasicDirectoryModel$FilesLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDirectoryModel$FilesLoader);
	});
	return class$;
}

$Class* BasicDirectoryModel$FilesLoader::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
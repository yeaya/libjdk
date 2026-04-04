#include <java/awt/FileDialog.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FileDialog$1.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/ObjectInputStream.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef LOAD
#undef SAVE

using $FileArray = $Array<::java::io::File>;
using $Dialog = ::java::awt::Dialog;
using $FileDialog$1 = ::java::awt::FileDialog$1;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace java {
	namespace awt {

$String* FileDialog::base = nullptr;
int32_t FileDialog::nameCounter = 0;

void FileDialog::initIDs() {
	$init(FileDialog);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void FileDialog::init$($Frame* parent) {
	FileDialog::init$(parent, ""_s, FileDialog::LOAD);
}

void FileDialog::init$($Frame* parent, $String* title) {
	FileDialog::init$(parent, title, FileDialog::LOAD);
}

void FileDialog::init$($Frame* parent, $String* title, int32_t mode) {
	$Dialog::init$(parent, title, true);
	this->multipleMode = false;
	this->setMode(mode);
	setLayout(nullptr);
}

void FileDialog::init$($Dialog* parent) {
	FileDialog::init$(parent, ""_s, FileDialog::LOAD);
}

void FileDialog::init$($Dialog* parent, $String* title) {
	FileDialog::init$(parent, title, FileDialog::LOAD);
}

void FileDialog::init$($Dialog* parent, $String* title, int32_t mode) {
	$Dialog::init$(parent, title, true);
	this->multipleMode = false;
	this->setMode(mode);
	setLayout(nullptr);
}

void FileDialog::setTitle($String* title) {
	$Dialog::setTitle(title);
}

$String* FileDialog::constructComponentName() {
	$synchronized(FileDialog::class$) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(FileDialog::base);
		var$0->append(FileDialog::nameCounter++);
		return $str(var$0);
	}
}

void FileDialog::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr && this->parent->peer == nullptr) {
			this->parent->addNotify();
		}
		if (this->peer == nullptr) {
			$set(this, peer, $$nc(getComponentFactory())->createFileDialog(this));
		}
		$Dialog::addNotify();
	}
}

int32_t FileDialog::getMode() {
	return this->mode;
}

void FileDialog::setMode(int32_t mode) {
	switch (mode) {
	case FileDialog::LOAD:
	case FileDialog::SAVE:
		this->mode = mode;
		break;
	default:
		$throwNew($IllegalArgumentException, "illegal file dialog mode"_s);
	}
}

$String* FileDialog::getDirectory() {
	return this->dir;
}

void FileDialog::setDirectory($String* dir) {
	$set(this, dir, (dir != nullptr && dir->isEmpty()) ? ($String*)nullptr : dir);
	$var($FileDialogPeer, peer, $cast($FileDialogPeer, this->peer));
	if (peer != nullptr) {
		peer->setDirectory(this->dir);
	}
}

$String* FileDialog::getFile() {
	return this->file;
}

$FileArray* FileDialog::getFiles() {
	$synchronized(getObjectLock()) {
		if (this->files != nullptr) {
			return $cast($FileArray, this->files->clone());
		} else {
			return $new($FileArray, 0);
		}
	}
}

void FileDialog::setFiles($FileArray* files) {
	$synchronized(getObjectLock()) {
		$set(this, files, files);
	}
}

void FileDialog::setFile($String* file) {
	$set(this, file, (file != nullptr && file->isEmpty()) ? ($String*)nullptr : file);
	$var($FileDialogPeer, peer, $cast($FileDialogPeer, this->peer));
	if (peer != nullptr) {
		peer->setFile(this->file);
	}
}

void FileDialog::setMultipleMode(bool enable) {
	$synchronized(getObjectLock()) {
		this->multipleMode = enable;
	}
}

bool FileDialog::isMultipleMode() {
	$synchronized(getObjectLock()) {
		return this->multipleMode;
	}
}

$FilenameFilter* FileDialog::getFilenameFilter() {
	return this->filter;
}

void FileDialog::setFilenameFilter($FilenameFilter* filter) {
	$synchronized(this) {
		$set(this, filter, filter);
		$var($FileDialogPeer, peer, $cast($FileDialogPeer, this->peer));
		if (peer != nullptr) {
			peer->setFilenameFilter(filter);
		}
	}
}

void FileDialog::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->dir != nullptr && this->dir->isEmpty()) {
		$set(this, dir, nullptr);
	}
	if (this->file != nullptr && this->file->isEmpty()) {
		$set(this, file, nullptr);
	}
}

$String* FileDialog::paramString() {
	$useLocalObjectStack();
	$var($String, str, $Dialog::paramString());
	$plusAssign(str, $$str({",dir= "_s, this->dir}));
	$plusAssign(str, $$str({",file= "_s, this->file}));
	return $str({str, ((this->mode == FileDialog::LOAD) ? ",load"_s : ",save"_s)});
}

bool FileDialog::postsOldMouseEvents() {
	return false;
}

void FileDialog::clinit$($Class* clazz) {
	$assignStatic(FileDialog::base, "filedlg"_s);
	FileDialog::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			FileDialog::initIDs();
		}
	}
	{
		$AWTAccessor::setFileDialogAccessor($$new($FileDialog$1));
	}
}

FileDialog::FileDialog() {
}

$Class* FileDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDialog, LOAD)},
		{"SAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDialog, SAVE)},
		{"mode", "I", nullptr, 0, $field(FileDialog, mode)},
		{"dir", "Ljava/lang/String;", nullptr, 0, $field(FileDialog, dir)},
		{"file", "Ljava/lang/String;", nullptr, 0, $field(FileDialog, file)},
		{"files", "[Ljava/io/File;", nullptr, $PRIVATE, $field(FileDialog, files)},
		{"multipleMode", "Z", nullptr, $PRIVATE, $field(FileDialog, multipleMode)},
		{"filter", "Ljava/io/FilenameFilter;", nullptr, 0, $field(FileDialog, filter)},
		{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileDialog, base)},
		{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileDialog, nameCounter)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileDialog, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(FileDialog, init$, void, $Frame*)},
		{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileDialog, init$, void, $Frame*, $String*)},
		{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(FileDialog, init$, void, $Frame*, $String*, int32_t)},
		{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $method(FileDialog, init$, void, $Dialog*)},
		{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileDialog, init$, void, $Dialog*, $String*)},
		{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(FileDialog, init$, void, $Dialog*, $String*, int32_t)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(FileDialog, addNotify, void)},
		{"constructComponentName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(FileDialog, constructComponentName, $String*)},
		{"getDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileDialog, getDirectory, $String*)},
		{"getFile", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileDialog, getFile, $String*)},
		{"getFilenameFilter", "()Ljava/io/FilenameFilter;", nullptr, $PUBLIC, $virtualMethod(FileDialog, getFilenameFilter, $FilenameFilter*)},
		{"getFiles", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(FileDialog, getFiles, $FileArray*)},
		{"getMode", "()I", nullptr, $PUBLIC, $virtualMethod(FileDialog, getMode, int32_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileDialog, initIDs, void)},
		{"isMultipleMode", "()Z", nullptr, $PUBLIC, $virtualMethod(FileDialog, isMultipleMode, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(FileDialog, paramString, $String*)},
		{"postsOldMouseEvents", "()Z", nullptr, 0, $virtualMethod(FileDialog, postsOldMouseEvents, bool)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(FileDialog, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
		{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FileDialog, setDirectory, void, $String*)},
		{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FileDialog, setFile, void, $String*)},
		{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FileDialog, setFilenameFilter, void, $FilenameFilter*)},
		{"setFiles", "([Ljava/io/File;)V", nullptr, $PRIVATE, $method(FileDialog, setFiles, void, $FileArray*)},
		{"setMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(FileDialog, setMode, void, int32_t)},
		{"setMultipleMode", "(Z)V", nullptr, $PUBLIC, $virtualMethod(FileDialog, setMultipleMode, void, bool)},
		{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FileDialog, setTitle, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.FileDialog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.FileDialog",
		"java.awt.Dialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.FileDialog$1"
	};
	$loadClass(FileDialog, name, initialize, &classInfo$$, FileDialog::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileDialog));
	});
	return class$;
}

$Class* FileDialog::class$ = nullptr;

	} // awt
} // java
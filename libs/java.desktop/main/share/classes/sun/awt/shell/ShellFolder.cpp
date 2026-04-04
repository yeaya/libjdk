#include <sun/awt/shell/ShellFolder.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URI.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Comparator.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/Callable.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingConstants.h>
#include <sun/awt/shell/ShellFolder$1.h>
#include <sun/awt/shell/ShellFolder$2.h>
#include <sun/awt/shell/ShellFolder$3.h>
#include <sun/awt/shell/ShellFolder$4.h>
#include <sun/awt/shell/ShellFolder$Invoker.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/awt/shell/ShellFolderManager.h>
#include <jcpp.h>

#undef COLUMN_DATE
#undef COLUMN_NAME
#undef COLUMN_SIZE
#undef DEFAULT_COMPARATOR
#undef FILE_COMPARATOR
#undef LEADING
#undef NOFOLLOW_LINKS
#undef RIGHT

using $FileArray = $Array<::java::io::File>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Paths = ::java::nio::file::Paths;
using $Comparator = ::java::util::Comparator;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Callable = ::java::util::concurrent::Callable;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ShellFolder$1 = ::sun::awt::shell::ShellFolder$1;
using $ShellFolder$2 = ::sun::awt::shell::ShellFolder$2;
using $ShellFolder$3 = ::sun::awt::shell::ShellFolder$3;
using $ShellFolder$4 = ::sun::awt::shell::ShellFolder$4;
using $ShellFolder$Invoker = ::sun::awt::shell::ShellFolder$Invoker;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $ShellFolderManager = ::sun::awt::shell::ShellFolderManager;

namespace sun {
	namespace awt {
		namespace shell {

$String* ShellFolder::COLUMN_NAME = nullptr;
$String* ShellFolder::COLUMN_SIZE = nullptr;
$String* ShellFolder::COLUMN_DATE = nullptr;
$ShellFolderManager* ShellFolder::shellFolderManager = nullptr;
$ShellFolder$Invoker* ShellFolder::invoker = nullptr;
$Comparator* ShellFolder::DEFAULT_COMPARATOR = nullptr;
$Comparator* ShellFolder::FILE_COMPARATOR = nullptr;

void ShellFolder::init$(ShellFolder* parent, $String* pathname) {
	$File::init$((pathname != nullptr) ? pathname : "ShellFolder"_s);
	$set(this, parent, parent);
}

bool ShellFolder::isFileSystem() {
	return (!$$nc(getPath())->startsWith("ShellFolder"_s));
}

$String* ShellFolder::getParent() {
	if (this->parent == nullptr && isFileSystem()) {
		return $File::getParent();
	}
	if (this->parent != nullptr) {
		return (this->parent->getPath());
	} else {
		return nullptr;
	}
}

$File* ShellFolder::getParentFile() {
	if (this->parent != nullptr) {
		return this->parent;
	} else if (isFileSystem()) {
		return $File::getParentFile();
	} else {
		return nullptr;
	}
}

$FileArray* ShellFolder::listFiles() {
	return listFiles(true);
}

$FileArray* ShellFolder::listFiles(bool includeHiddenFiles) {
	$useLocalObjectStack();
	$var($FileArray, files, $File::listFiles());
	if (!includeHiddenFiles) {
		$var($Vector, v, $new($Vector));
		int32_t nameCount = (files == nullptr) ? 0 : files->length;
		for (int32_t i = 0; i < nameCount; ++i) {
			if (!$nc($nc(files)->get(i))->isHidden()) {
				v->addElement(files->get(i));
			}
		}
		$assign(files, $cast($FileArray, v->toArray($$new($FileArray, v->size()))));
	}
	return files;
}

int32_t ShellFolder::compareTo($File* file2) {
	$useLocalObjectStack();
	if (file2 == nullptr || !($instanceOf(ShellFolder, file2)) || (($instanceOf(ShellFolder, file2)) && $cast(ShellFolder, file2)->isFileSystem())) {
		if (isFileSystem()) {
			return $File::compareTo(file2);
		} else {
			return -1;
		}
	} else if (isFileSystem()) {
		return 1;
	} else {
		return $$nc(getName())->compareTo($(file2->getName()));
	}
}

$Image* ShellFolder::getIcon(bool getLargeIcon) {
	return nullptr;
}

$Image* ShellFolder::getIcon(int32_t width, int32_t height) {
	return nullptr;
}

ShellFolder* ShellFolder::getShellFolder($File* file) {
	$init(ShellFolder);
	$useLocalObjectStack();
	if ($instanceOf(ShellFolder, file)) {
		return $cast(ShellFolder, file);
	}
	$init($LinkOption);
	if (!$Files::exists($($Paths::get($($nc(file)->getPath()), $$new($StringArray, 0))), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
		$throwNew($FileNotFoundException);
	}
	return $nc(ShellFolder::shellFolderManager)->createShellFolder(file);
}

$Object* ShellFolder::get($String* key) {
	$init(ShellFolder);
	return $nc(ShellFolder::shellFolderManager)->get(key);
}

bool ShellFolder::isComputerNode($File* dir) {
	$init(ShellFolder);
	return $nc(ShellFolder::shellFolderManager)->isComputerNode(dir);
}

bool ShellFolder::isFileSystemRoot($File* dir) {
	$init(ShellFolder);
	return $nc(ShellFolder::shellFolderManager)->isFileSystemRoot(dir);
}

$File* ShellFolder::getNormalizedFile($File* f) {
	$init(ShellFolder);
	$useLocalObjectStack();
	$var($File, canonical, $nc(f)->getCanonicalFile());
	if (f->equals(canonical)) {
		return canonical;
	}
	return $new($File, $($$nc(f->toURI())->normalize()));
}

void ShellFolder::sort($List* files) {
	$init(ShellFolder);
	if (files == nullptr || files->size() <= 1) {
		return;
	}
	invoke($$new($ShellFolder$1, files));
}

void ShellFolder::sortChildren($List* files) {
	invoke($$new($ShellFolder$2, this, files));
}

bool ShellFolder::isAbsolute() {
	bool var$0 = !isFileSystem();
	return (var$0 || $File::isAbsolute());
}

$File* ShellFolder::getAbsoluteFile() {
	return (isFileSystem() ? $File::getAbsoluteFile() : $cast($File, this));
}

bool ShellFolder::canRead() {
	return (isFileSystem() ? $File::canRead() : true);
}

bool ShellFolder::canWrite() {
	return (isFileSystem() ? $File::canWrite() : false);
}

bool ShellFolder::exists() {
	bool var$1 = !isFileSystem();
	bool var$0 = var$1 || isFileSystemRoot(this);
	return (var$0 || $File::exists());
}

bool ShellFolder::isDirectory() {
	return (isFileSystem() ? $File::isDirectory() : true);
}

bool ShellFolder::isFile() {
	return (isFileSystem() ? $File::isFile() : !isDirectory());
}

int64_t ShellFolder::lastModified() {
	return (isFileSystem() ? $File::lastModified() : 0);
}

int64_t ShellFolder::length() {
	return (isFileSystem() ? $File::length() : 0);
}

bool ShellFolder::createNewFile() {
	return (isFileSystem() ? $File::createNewFile() : false);
}

bool ShellFolder::delete$() {
	return (isFileSystem() ? $File::delete$() : false);
}

void ShellFolder::deleteOnExit() {
	if (isFileSystem()) {
		$File::deleteOnExit();
	} else {
	}
}

bool ShellFolder::mkdir() {
	return (isFileSystem() ? $File::mkdir() : false);
}

bool ShellFolder::mkdirs() {
	return (isFileSystem() ? $File::mkdirs() : false);
}

bool ShellFolder::renameTo($File* dest) {
	return (isFileSystem() ? $File::renameTo(dest) : false);
}

bool ShellFolder::setLastModified(int64_t time) {
	return (isFileSystem() ? $File::setLastModified(time) : false);
}

bool ShellFolder::setReadOnly() {
	return (isFileSystem() ? $File::setReadOnly() : false);
}

$String* ShellFolder::toString() {
	return (isFileSystem() ? $File::toString() : getDisplayName());
}

$ShellFolderColumnInfoArray* ShellFolder::getFolderColumns($File* dir) {
	$init(ShellFolder);
	$useLocalObjectStack();
	$var($ShellFolderColumnInfoArray, columns, nullptr);
	if ($instanceOf(ShellFolder, dir)) {
		$assign(columns, $cast(ShellFolder, dir)->getFolderColumns());
	}
	if (columns == nullptr) {
		$var($String, var$0, ShellFolder::COLUMN_NAME);
		$var($Integer, var$1, $Integer::valueOf(150));
		$var($String, var$2, ShellFolder::COLUMN_SIZE);
		$var($Integer, var$3, $Integer::valueOf(75));
		$var($String, var$4, ShellFolder::COLUMN_DATE);
		$var($Integer, var$5, $Integer::valueOf(130));
		$assign(columns, $new($ShellFolderColumnInfoArray, {
			$$new($ShellFolderColumnInfo, var$0, var$1, $($Integer::valueOf($SwingConstants::LEADING)), true, nullptr, ShellFolder::FILE_COMPARATOR),
			$$new($ShellFolderColumnInfo, var$2, var$3, $($Integer::valueOf($SwingConstants::RIGHT)), true, nullptr, ShellFolder::DEFAULT_COMPARATOR, true),
			$$new($ShellFolderColumnInfo, var$4, var$5, $($Integer::valueOf($SwingConstants::LEADING)), true, nullptr, ShellFolder::DEFAULT_COMPARATOR, true)
		}));
	}
	return columns;
}

$ShellFolderColumnInfoArray* ShellFolder::getFolderColumns() {
	return nullptr;
}

$Object* ShellFolder::getFolderColumnValue($File* file, int32_t column) {
	$init(ShellFolder);
	if ($instanceOf(ShellFolder, file)) {
		$var($Object, value, $cast(ShellFolder, file)->getFolderColumnValue(column));
		if (value != nullptr) {
			return value;
		}
	}
	if (file == nullptr || !file->exists()) {
		return nullptr;
	}
	{
		int64_t time = 0;
		switch (column) {
		case 0:
			return $of(file);
		case 1:
			return $of($nc(file)->isDirectory() ? ($Long*)nullptr : $Long::valueOf(file->length()));
		case 2:
			if (isFileSystemRoot(file)) {
				return nullptr;
			}
			time = $nc(file)->lastModified();
			return (time == 0) ? ($Object*)nullptr : $of($new($Date, time));
		default:
			return nullptr;
		}
	}
}

$Object* ShellFolder::getFolderColumnValue(int32_t column) {
	return nullptr;
}

$Object* ShellFolder::invoke($Callable* task) {
	$init(ShellFolder);
	try {
		return invoke(task, $RuntimeException::class$);
	} catch ($InterruptedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Object* ShellFolder::invoke($Callable* task, $Class* exceptionClass) {
	$init(ShellFolder);
	$useLocalObjectStack();
	try {
		return $nc(ShellFolder::invoker)->invoke(task);
	} catch ($Exception& e) {
		if ($instanceOf($RuntimeException, e)) {
			$throw($cast($RuntimeException, e));
		}
		if ($instanceOf($InterruptedException, e)) {
			$($Thread::currentThread())->interrupt();
			$throw($cast($InterruptedException, e));
		}
		if ($nc(exceptionClass)->isInstance(e)) {
			$throw($$cast($Throwable, exceptionClass->cast(e)));
		}
		$throwNew($RuntimeException, "Unexpected error"_s, e);
	}
	$shouldNotReachHere();
}

int32_t ShellFolder::compareTo(Object$* file2) {
	return this->compareTo($cast($File, file2));
}

void ShellFolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ShellFolder::COLUMN_NAME, "FileChooser.fileNameHeaderText"_s);
	$assignStatic(ShellFolder::COLUMN_SIZE, "FileChooser.fileSizeHeaderText"_s);
	$assignStatic(ShellFolder::COLUMN_DATE, "FileChooser.fileDateHeaderText"_s);
	$beforeCallerSensitive();
	{
		$var($String, managerClassName, $cast($String, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("Shell.shellFolderManager"_s)));
		$Class* managerClass = nullptr;
		try {
			managerClass = $Class::forName(managerClassName, false, nullptr);
			$load($ShellFolderManager);
			if (!$ShellFolderManager::class$->isAssignableFrom(managerClass)) {
				managerClass = nullptr;
			}
		} catch ($ClassNotFoundException& e) {
		} catch ($NullPointerException& e) {
		} catch ($SecurityException& e) {
		}
		if (managerClass == nullptr) {
			$load($ShellFolderManager);
			managerClass = $ShellFolderManager::class$;
		}
		try {
			$assignStatic(ShellFolder::shellFolderManager, $cast($ShellFolderManager, $$nc($nc(managerClass)->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($Error, $$str({"Could not instantiate Shell Folder Manager: "_s, $($nc(managerClass)->getName())}));
		}
		$assignStatic(ShellFolder::invoker, $nc(ShellFolder::shellFolderManager)->createInvoker());
	}
	$assignStatic(ShellFolder::DEFAULT_COMPARATOR, $new($ShellFolder$3));
	$assignStatic(ShellFolder::FILE_COMPARATOR, $new($ShellFolder$4));
}

ShellFolder::ShellFolder() {
}

$Class* ShellFolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COLUMN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShellFolder, COLUMN_NAME)},
		{"COLUMN_SIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShellFolder, COLUMN_SIZE)},
		{"COLUMN_DATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShellFolder, COLUMN_DATE)},
		{"parent", "Lsun/awt/shell/ShellFolder;", nullptr, $PROTECTED, $field(ShellFolder, parent)},
		{"shellFolderManager", "Lsun/awt/shell/ShellFolderManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, shellFolderManager)},
		{"invoker", "Lsun/awt/shell/ShellFolder$Invoker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, invoker)},
		{"DEFAULT_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, DEFAULT_COMPARATOR)},
		{"FILE_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/io/File;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ShellFolder, FILE_COMPARATOR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/ShellFolder;Ljava/lang/String;)V", nullptr, 0, $method(ShellFolder, init$, void, ShellFolder*, $String*)},
		{"canRead", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, canRead, bool)},
		{"canWrite", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, canWrite, bool)},
		{"compareTo", "(Ljava/io/File;)I", nullptr, $PUBLIC, $virtualMethod(ShellFolder, compareTo, int32_t, $File*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ShellFolder, compareTo, int32_t, Object$*)},
		{"createNewFile", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, createNewFile, bool), "java.io.IOException"},
		{"delete", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, delete$, bool)},
		{"deleteOnExit", "()V", nullptr, $PUBLIC, $virtualMethod(ShellFolder, deleteOnExit, void)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, exists, bool)},
		{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, get, $Object*, $String*)},
		{"getAbsoluteFile", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getAbsoluteFile, $File*)},
		{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShellFolder, getDisplayName, $String*)},
		{"getExecutableType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShellFolder, getExecutableType, $String*)},
		{"getFolderColumnValue", "(Ljava/io/File;I)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, getFolderColumnValue, $Object*, $File*, int32_t)},
		{"getFolderColumnValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getFolderColumnValue, $Object*, int32_t)},
		{"getFolderColumns", "(Ljava/io/File;)[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, getFolderColumns, $ShellFolderColumnInfoArray*, $File*)},
		{"getFolderColumns", "()[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getFolderColumns, $ShellFolderColumnInfoArray*)},
		{"getFolderType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShellFolder, getFolderType, $String*)},
		{"getIcon", "(Z)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getIcon, $Image*, bool)},
		{"getIcon", "(II)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getIcon, $Image*, int32_t, int32_t)},
		{"getLinkLocation", "()Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShellFolder, getLinkLocation, ShellFolder*), "java.io.FileNotFoundException"},
		{"getNormalizedFile", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, getNormalizedFile, $File*, $File*), "java.io.IOException"},
		{"getParent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getParent, $String*)},
		{"getParentFile", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, getParentFile, $File*)},
		{"getShellFolder", "(Ljava/io/File;)Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, getShellFolder, ShellFolder*, $File*), "java.io.FileNotFoundException"},
		{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(ShellFolder, invoke, $Object*, $Callable*)},
		{"invoke", "(Ljava/util/concurrent/Callable;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;E:Ljava/lang/Throwable;>(Ljava/util/concurrent/Callable<TT;>;Ljava/lang/Class<TE;>;)TT;^Ljava/lang/InterruptedException;^TE;", $PUBLIC | $STATIC, $staticMethod(ShellFolder, invoke, $Object*, $Callable*, $Class*), "java.lang.InterruptedException,java.lang.Throwable"},
		{"isAbsolute", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, isAbsolute, bool)},
		{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, isComputerNode, bool, $File*)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, isDirectory, bool)},
		{"isFile", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, isFile, bool)},
		{"isFileSystem", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, isFileSystem, bool)},
		{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolder, isFileSystemRoot, bool, $File*)},
		{"isLink", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShellFolder, isLink, bool)},
		{"lastModified", "()J", nullptr, $PUBLIC, $virtualMethod(ShellFolder, lastModified, int64_t)},
		{"length", "()J", nullptr, $PUBLIC, $virtualMethod(ShellFolder, length, int64_t)},
		{"listFiles", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, listFiles, $FileArray*)},
		{"listFiles", "(Z)[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, listFiles, $FileArray*, bool)},
		{"mkdir", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, mkdir, bool)},
		{"mkdirs", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, mkdirs, bool)},
		{"renameTo", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, renameTo, bool, $File*)},
		{"setLastModified", "(J)Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, setLastModified, bool, int64_t)},
		{"setReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ShellFolder, setReadOnly, bool)},
		{"sort", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/io/File;>;)V", $PUBLIC | $STATIC, $staticMethod(ShellFolder, sort, void, $List*)},
		{"sortChildren", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/io/File;>;)V", $PUBLIC, $virtualMethod(ShellFolder, sortChildren, void, $List*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ShellFolder, toString, $String*)},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ShellFolder, writeReplace, $Object*), "java.io.ObjectStreamException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.awt.shell.ShellFolder$4", nullptr, nullptr, 0},
		{"sun.awt.shell.ShellFolder$3", nullptr, nullptr, 0},
		{"sun.awt.shell.ShellFolder$2", nullptr, nullptr, 0},
		{"sun.awt.shell.ShellFolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.shell.ShellFolder",
		"java.io.File",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.shell.ShellFolder$Invoker,sun.awt.shell.ShellFolder$4,sun.awt.shell.ShellFolder$3,sun.awt.shell.ShellFolder$2,sun.awt.shell.ShellFolder$1"
	};
	$loadClass(ShellFolder, name, initialize, &classInfo$$, ShellFolder::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ShellFolder));
	});
	return class$;
}

$Class* ShellFolder::class$ = nullptr;

		} // shell
	} // awt
} // sun
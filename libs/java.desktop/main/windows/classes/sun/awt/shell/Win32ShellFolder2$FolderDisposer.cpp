#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer$1.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2$FolderDisposer$1 = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer$1;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$FolderDisposer::init$() {
}

void Win32ShellFolder2$FolderDisposer::dispose() {
	if (this->disposed) {
		return;
	}
	$ShellFolder::invoke($$new($Win32ShellFolder2$FolderDisposer$1, this));
	this->disposed = true;
}

Win32ShellFolder2$FolderDisposer::Win32ShellFolder2$FolderDisposer() {
}

$Class* Win32ShellFolder2$FolderDisposer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"absolutePIDL", "J", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, absolutePIDL)},
		{"pIShellFolder", "J", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, pIShellFolder)},
		{"relativePIDL", "J", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, relativePIDL)},
		{"disposed", "Z", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, disposed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Win32ShellFolder2$FolderDisposer, init$, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$FolderDisposer, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$FolderDisposer", "sun.awt.shell.Win32ShellFolder2", "FolderDisposer", $STATIC},
		{"sun.awt.shell.Win32ShellFolder2$FolderDisposer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$FolderDisposer",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$FolderDisposer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$FolderDisposer);
	});
	return class$;
}

$Class* Win32ShellFolder2$FolderDisposer::class$ = nullptr;

		} // shell
	} // awt
} // sun
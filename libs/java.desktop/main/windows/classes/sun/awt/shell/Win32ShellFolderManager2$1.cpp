#include <sun/awt/shell/Win32ShellFolderManager2$1.h>
#include <java/io/File.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolderManager2$1::init$($Win32ShellFolderManager2* this$0, $File* val$dir) {
	$set(this, this$0, this$0);
	$set(this, val$dir, val$dir);
}

$Object* Win32ShellFolderManager2$1::run() {
	return $of($nc(this->val$dir)->getAbsolutePath());
}

Win32ShellFolderManager2$1::Win32ShellFolderManager2$1() {
}

$Class* Win32ShellFolderManager2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolderManager2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$1, this$0)},
		{"val$dir", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$1, val$dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2;Ljava/io/File;)V", "()V", 0, $method(Win32ShellFolderManager2$1, init$, void, $Win32ShellFolderManager2*, $File*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolderManager2",
		"isComputerNode",
		"(Ljava/io/File;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolderManager2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolderManager2$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolderManager2"
	};
	$loadClass(Win32ShellFolderManager2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$1);
	});
	return class$;
}

$Class* Win32ShellFolderManager2$1::class$ = nullptr;

		} // shell
	} // awt
} // sun
#include <sun/awt/shell/Win32ShellFolder2$KnownLibraries.h>
#include <java/util/List.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$List* Win32ShellFolder2$KnownLibraries::INSTANCE = nullptr;

void Win32ShellFolder2$KnownLibraries::init$() {
}

void Win32ShellFolder2$KnownLibraries::clinit$($Class* clazz) {
	$assignStatic(Win32ShellFolder2$KnownLibraries::INSTANCE, $Win32ShellFolder2::getLibraries());
}

Win32ShellFolder2$KnownLibraries::Win32ShellFolder2$KnownLibraries() {
}

$Class* Win32ShellFolder2$KnownLibraries::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;", $STATIC | $FINAL, $staticField(Win32ShellFolder2$KnownLibraries, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Win32ShellFolder2$KnownLibraries, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$KnownLibraries", "sun.awt.shell.Win32ShellFolder2", "KnownLibraries", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$KnownLibraries",
		"java.lang.Object",
		nullptr,
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
	$loadClass(Win32ShellFolder2$KnownLibraries, name, initialize, &classInfo$$, Win32ShellFolder2$KnownLibraries::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$KnownLibraries);
	});
	return class$;
}

$Class* Win32ShellFolder2$KnownLibraries::class$ = nullptr;

		} // shell
	} // awt
} // sun
#include <sun/awt/shell/Win32ShellFolder2$19.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <sun/awt/shell/Win32ShellFolder2$KnownFolderDefinition.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Win32ShellFolder2$KnownFolderDefinitionArray = $Array<::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$KnownFolderDefinition = ::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$19::init$() {
}

$Object* Win32ShellFolder2$19::call() {
	$useLocalObjectStack();
	$var($Win32ShellFolder2$KnownFolderDefinitionArray, all, $Win32ShellFolder2::loadKnownFolders());
	$var($List, folders, $new($ArrayList));
	if (all != nullptr) {
		$var($Win32ShellFolder2$KnownFolderDefinitionArray, arr$, all);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Win32ShellFolder2$KnownFolderDefinition, kf, arr$->get(i$));
			{
				if ($nc(kf)->relativePath == nullptr || kf->parsingName == nullptr || kf->saveLocation == nullptr) {
					continue;
				}
				folders->add(kf);
			}
		}
	}
	return folders;
}

Win32ShellFolder2$19::Win32ShellFolder2$19() {
}

$Class* Win32ShellFolder2$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Win32ShellFolder2$19, init$, void)},
		{"call", "()Ljava/util/List;", "()Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;", $PUBLIC, $virtualMethod(Win32ShellFolder2$19, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getLibraries",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$19", nullptr, nullptr, 0},
		{"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition", "sun.awt.shell.Win32ShellFolder2", "KnownFolderDefinition", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$19",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$19);
	});
	return class$;
}

$Class* Win32ShellFolder2$19::class$ = nullptr;

		} // shell
	} // awt
} // sun
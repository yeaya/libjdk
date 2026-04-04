#include <sun/awt/shell/Win32ShellFolder2$KnownFolderDefinition.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$KnownFolderDefinition::init$() {
}

Win32ShellFolder2$KnownFolderDefinition::Win32ShellFolder2$KnownFolderDefinition() {
}

$Class* Win32ShellFolder2$KnownFolderDefinition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"guid", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, guid)},
		{"category", "I", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, category)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, name)},
		{"description", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, description)},
		{"parent", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, parent)},
		{"relativePath", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, relativePath)},
		{"parsingName", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, parsingName)},
		{"tooltip", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, tooltip)},
		{"localizedName", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, localizedName)},
		{"icon", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, icon)},
		{"security", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, security)},
		{"attributes", "J", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, attributes)},
		{"defenitionFlags", "I", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, defenitionFlags)},
		{"ftidType", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, ftidType)},
		{"path", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, path)},
		{"saveLocation", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, saveLocation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Win32ShellFolder2$KnownFolderDefinition, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition", "sun.awt.shell.Win32ShellFolder2", "KnownFolderDefinition", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition",
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
	$loadClass(Win32ShellFolder2$KnownFolderDefinition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$KnownFolderDefinition);
	});
	return class$;
}

$Class* Win32ShellFolder2$KnownFolderDefinition::class$ = nullptr;

		} // shell
	} // awt
} // sun
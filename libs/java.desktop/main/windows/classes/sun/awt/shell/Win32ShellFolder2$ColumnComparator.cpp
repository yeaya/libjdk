#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator.h>
#include <java/io/File.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator$1.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$ColumnComparator$1 = ::sun::awt::shell::Win32ShellFolder2$ColumnComparator$1;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$ColumnComparator::init$($Win32ShellFolder2* shellFolder, int32_t columnIdx) {
	$set(this, shellFolder, shellFolder);
	this->columnIdx = columnIdx;
}

int32_t Win32ShellFolder2$ColumnComparator::compare($File* o, $File* o1) {
	$useLocalObjectStack();
	$var($Integer, result, $cast($Integer, $ShellFolder::invoke($$new($Win32ShellFolder2$ColumnComparator$1, this, o, o1))));
	return result == nullptr ? 0 : result->intValue();
}

int32_t Win32ShellFolder2$ColumnComparator::compare(Object$* o, Object$* o1) {
	return this->compare($cast($File, o), $cast($File, o1));
}

Win32ShellFolder2$ColumnComparator::Win32ShellFolder2$ColumnComparator() {
}

$Class* Win32ShellFolder2$ColumnComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"shellFolder", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $FINAL, $field(Win32ShellFolder2$ColumnComparator, shellFolder)},
		{"columnIdx", "I", nullptr, $PRIVATE | $FINAL, $field(Win32ShellFolder2$ColumnComparator, columnIdx)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", nullptr, $PUBLIC, $method(Win32ShellFolder2$ColumnComparator, init$, void, $Win32ShellFolder2*, int32_t)},
		{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$ColumnComparator, compare, int32_t, $File*, $File*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Win32ShellFolder2$ColumnComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$ColumnComparator", "sun.awt.shell.Win32ShellFolder2", "ColumnComparator", $PRIVATE | $STATIC},
		{"sun.awt.shell.Win32ShellFolder2$ColumnComparator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$ColumnComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/File;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$ColumnComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$ColumnComparator);
	});
	return class$;
}

$Class* Win32ShellFolder2$ColumnComparator::class$ = nullptr;

		} // shell
	} // awt
} // sun
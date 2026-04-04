#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator$1.h>
#include <java/io/File.h>
#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$ColumnComparator = ::sun::awt::shell::Win32ShellFolder2$ColumnComparator;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$ColumnComparator$1::init$($Win32ShellFolder2$ColumnComparator* this$0, $File* val$o, $File* val$o1) {
	$set(this, this$0, this$0);
	$set(this, val$o, val$o);
	$set(this, val$o1, val$o1);
}

$Object* Win32ShellFolder2$ColumnComparator$1::call() {
	if ($instanceOf($Win32ShellFolder2, this->val$o) && $instanceOf($Win32ShellFolder2, this->val$o1)) {
		int64_t var$0 = $nc(this->this$0->shellFolder)->getIShellFolder();
		int64_t var$1 = $cast($Win32ShellFolder2, this->val$o)->getRelativePIDL();
		return $of($Integer::valueOf($Win32ShellFolder2::compareIDsByColumn(var$0, var$1, $cast($Win32ShellFolder2, this->val$o1)->getRelativePIDL(), this->this$0->columnIdx)));
	}
	return $of($Integer::valueOf(0));
}

Win32ShellFolder2$ColumnComparator$1::Win32ShellFolder2$ColumnComparator$1() {
}

$Class* Win32ShellFolder2$ColumnComparator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2$ColumnComparator;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$ColumnComparator$1, this$0)},
		{"val$o1", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$ColumnComparator$1, val$o1)},
		{"val$o", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$ColumnComparator$1, val$o)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2$ColumnComparator;Ljava/io/File;Ljava/io/File;)V", "()V", 0, $method(Win32ShellFolder2$ColumnComparator$1, init$, void, $Win32ShellFolder2$ColumnComparator*, $File*, $File*)},
		{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$ColumnComparator$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2$ColumnComparator",
		"compare",
		"(Ljava/io/File;Ljava/io/File;)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$ColumnComparator", "sun.awt.shell.Win32ShellFolder2", "ColumnComparator", $PRIVATE | $STATIC},
		{"sun.awt.shell.Win32ShellFolder2$ColumnComparator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$ColumnComparator$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$ColumnComparator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$ColumnComparator$1);
	});
	return class$;
}

$Class* Win32ShellFolder2$ColumnComparator$1::class$ = nullptr;

		} // shell
	} // awt
} // sun
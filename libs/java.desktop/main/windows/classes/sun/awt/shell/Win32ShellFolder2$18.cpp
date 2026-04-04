#include <sun/awt/shell/Win32ShellFolder2$18.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$ColumnComparator = ::sun::awt::shell::Win32ShellFolder2$ColumnComparator;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$18::init$($Win32ShellFolder2* this$0, $List* val$files) {
	$set(this, this$0, this$0);
	$set(this, val$files, val$files);
}

$Object* Win32ShellFolder2$18::call() {
	$Collections::sort(this->val$files, $$new($Win32ShellFolder2$ColumnComparator, this->this$0, 0));
	return nullptr;
}

Win32ShellFolder2$18::Win32ShellFolder2$18() {
}

$Class* Win32ShellFolder2$18::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$18, this$0)},
		{"val$files", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$18, val$files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Ljava/util/List;)V", "()V", 0, $method(Win32ShellFolder2$18, init$, void, $Win32ShellFolder2*, $List*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$18, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"sortChildren",
		"(Ljava/util/List;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$18", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$18",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$18);
	});
	return class$;
}

$Class* Win32ShellFolder2$18::class$ = nullptr;

		} // shell
	} // awt
} // sun
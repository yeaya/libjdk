#include <sun/awt/shell/ShellFolder$2.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef FILE_COMPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

void ShellFolder$2::init$($ShellFolder* this$0, $List* val$files) {
	$set(this, this$0, this$0);
	$set(this, val$files, val$files);
}

$Object* ShellFolder$2::call() {
	$init($ShellFolder);
	$Collections::sort(this->val$files, $ShellFolder::FILE_COMPARATOR);
	return nullptr;
}

ShellFolder$2::ShellFolder$2() {
}

$Class* ShellFolder$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/ShellFolder;", nullptr, $FINAL | $SYNTHETIC, $field(ShellFolder$2, this$0)},
		{"val$files", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ShellFolder$2, val$files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/ShellFolder;Ljava/util/List;)V", "()V", 0, $method(ShellFolder$2, init$, void, $ShellFolder*, $List*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ShellFolder$2, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.ShellFolder",
		"sortChildren",
		"(Ljava/util/List;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolder$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.ShellFolder$2",
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
		"sun.awt.shell.ShellFolder"
	};
	$loadClass(ShellFolder$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolder$2);
	});
	return class$;
}

$Class* ShellFolder$2::class$ = nullptr;

		} // shell
	} // awt
} // sun
#include <sun/awt/shell/ShellFolder$1.h>
#include <java/io/File.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef FILE_COMPARATOR

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

void ShellFolder$1::init$($List* val$files) {
	$set(this, val$files, val$files);
}

$Object* ShellFolder$1::call() {
	$useLocalObjectStack();
	$var($File, commonParent, nullptr);
	{
		$var($Iterator, i$, $nc(this->val$files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, file, $cast($File, i$->next()));
			{
				$var($File, parent, $nc(file)->getParentFile());
				if (parent == nullptr || !($instanceOf($ShellFolder, file))) {
					$assign(commonParent, nullptr);
					break;
				}
				if (commonParent == nullptr) {
					$assign(commonParent, parent);
				} else if (commonParent != parent && !commonParent->equals(parent)) {
					$assign(commonParent, nullptr);
					break;
				}
			}
		}
	}
	if ($instanceOf($ShellFolder, commonParent)) {
		$cast($ShellFolder, commonParent)->sortChildren(this->val$files);
	} else {
		$init($ShellFolder);
		$Collections::sort(this->val$files, $ShellFolder::FILE_COMPARATOR);
	}
	return nullptr;
}

ShellFolder$1::ShellFolder$1() {
}

$Class* ShellFolder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$files", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ShellFolder$1, val$files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "()V", 0, $method(ShellFolder$1, init$, void, $List*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ShellFolder$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.ShellFolder",
		"sort",
		"(Ljava/util/List;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.ShellFolder$1",
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
	$loadClass(ShellFolder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolder$1);
	});
	return class$;
}

$Class* ShellFolder$1::class$ = nullptr;

		} // shell
	} // awt
} // sun
#include <sun/awt/shell/ShellFolder$4.h>
#include <java/io/File.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

void ShellFolder$4::init$() {
}

int32_t ShellFolder$4::compare($File* f1, $File* f2) {
	$useLocalObjectStack();
	$var($ShellFolder, sf1, nullptr);
	$var($ShellFolder, sf2, nullptr);
	if ($instanceOf($ShellFolder, f1)) {
		$assign(sf1, $cast($ShellFolder, f1));
		if (sf1->isFileSystem()) {
			$assign(sf1, nullptr);
		}
	}
	if ($instanceOf($ShellFolder, f2)) {
		$assign(sf2, $cast($ShellFolder, f2));
		if (sf2->isFileSystem()) {
			$assign(sf2, nullptr);
		}
	}
	if (sf1 != nullptr && sf2 != nullptr) {
		return sf1->compareTo(sf2);
	} else if (sf1 != nullptr) {
		return -1;
	} else if (sf2 != nullptr) {
		return 1;
	} else {
		$var($String, name1, $nc(f1)->getName());
		$var($String, name2, $nc(f2)->getName());
		int32_t diff = $nc(name1)->compareToIgnoreCase(name2);
		if (diff != 0) {
			return diff;
		} else {
			return name1->compareTo(name2);
		}
	}
}

int32_t ShellFolder$4::compare(Object$* f1, Object$* f2) {
	return this->compare($cast($File, f1), $cast($File, f2));
}

ShellFolder$4::ShellFolder$4() {
}

$Class* ShellFolder$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShellFolder$4, init$, void)},
		{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC, $virtualMethod(ShellFolder$4, compare, int32_t, $File*, $File*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ShellFolder$4, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.ShellFolder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolder$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.ShellFolder$4",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/File;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.ShellFolder"
	};
	$loadClass(ShellFolder$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolder$4);
	});
	return class$;
}

$Class* ShellFolder$4::class$ = nullptr;

		} // shell
	} // awt
} // sun
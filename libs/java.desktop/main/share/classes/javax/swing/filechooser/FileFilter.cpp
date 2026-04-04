#include <javax/swing/filechooser/FileFilter.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace filechooser {

void FileFilter::init$() {
}

FileFilter::FileFilter() {
}

$Class* FileFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(FileFilter, init$, void)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileFilter, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileFilter, getDescription, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.filechooser.FileFilter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFilter);
	});
	return class$;
}

$Class* FileFilter::class$ = nullptr;

		} // filechooser
	} // swing
} // javax
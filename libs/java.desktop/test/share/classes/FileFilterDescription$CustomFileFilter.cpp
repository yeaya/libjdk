#include <FileFilterDescription$CustomFileFilter.h>
#include <FileFilterDescription.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

void FileFilterDescription$CustomFileFilter::init$() {
	$FileFilter::init$();
}

bool FileFilterDescription$CustomFileFilter::accept($File* f) {
	return false;
}

$String* FileFilterDescription$CustomFileFilter::getDescription() {
	return "CustomFileFilter"_s;
}

FileFilterDescription$CustomFileFilter::FileFilterDescription$CustomFileFilter() {
}

$Class* FileFilterDescription$CustomFileFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FileFilterDescription$CustomFileFilter, init$, void)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(FileFilterDescription$CustomFileFilter, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileFilterDescription$CustomFileFilter, getDescription, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FileFilterDescription$CustomFileFilter", "FileFilterDescription", "CustomFileFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FileFilterDescription$CustomFileFilter",
		"javax.swing.filechooser.FileFilter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FileFilterDescription"
	};
	$loadClass(FileFilterDescription$CustomFileFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFilterDescription$CustomFileFilter);
	});
	return class$;
}

$Class* FileFilterDescription$CustomFileFilter::class$ = nullptr;
#include <sun/awt/X11/FileDialogFilter.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void FileDialogFilter::init$($String* f) {
	$set(this, filter, f);
}

bool FileDialogFilter::accept($File* dir, $String* fileName) {
	$var($File, f, $new($File, dir, fileName));
	if (f->isDirectory()) {
		return true;
	} else {
		return matches(fileName, this->filter);
	}
}

bool FileDialogFilter::matches($String* input, $String* filter) {
	$var($String, regex, convert(filter));
	return $nc(input)->matches(regex);
}

$String* FileDialogFilter::convert($String* filter) {
	$var($String, regex, $str({"^"_s, filter, "$"_s}));
	$assign(regex, regex->replaceAll("\\."_s, "\\\\."_s));
	$assign(regex, regex->replaceAll("\\?"_s, "."_s));
	$assign(regex, regex->replaceAll("\\*"_s, ".*"_s));
	return regex;
}

FileDialogFilter::FileDialogFilter() {
}

$Class* FileDialogFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filter", "Ljava/lang/String;", nullptr, 0, $field(FileDialogFilter, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileDialogFilter, init$, void, $String*)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(FileDialogFilter, accept, bool, $File*, $String*)},
		{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(FileDialogFilter, convert, $String*, $String*)},
		{"matches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(FileDialogFilter, matches, bool, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.FileDialogFilter",
		"java.lang.Object",
		"java.io.FilenameFilter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileDialogFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileDialogFilter);
	});
	return class$;
}

$Class* FileDialogFilter::class$ = nullptr;

		} // X11
	} // awt
} // sun
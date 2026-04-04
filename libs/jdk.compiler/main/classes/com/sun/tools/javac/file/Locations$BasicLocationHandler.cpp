#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/Arrays.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Option = ::com::sun::tools::javac::main::Option;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Arrays = ::java::util::Arrays;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void Locations$BasicLocationHandler::init$($JavaFileManager$Location* location, $OptionArray* options) {
	$Locations$LocationHandler::init$();
	$set(this, location, location);
	$set(this, options, $nc(options)->length == 0 ? $EnumSet::noneOf($Option::class$) : $EnumSet::copyOf($($Arrays::asList(options))));
}

void Locations$BasicLocationHandler::setPathsForModule($String* moduleName, $Iterable* files) {
	$throwNew($UnsupportedOperationException, $$str({"not supported for "_s, this->location}));
}

$Path* Locations$BasicLocationHandler::checkSingletonDirectory($Iterable* paths) {
	$useLocalObjectStack();
	$var($Iterator, pathIter, $nc(paths)->iterator());
	if (!$nc(pathIter)->hasNext()) {
		$throwNew($IllegalArgumentException, "empty path for directory"_s);
	}
	$var($Path, path, $cast($Path, pathIter->next()));
	if (pathIter->hasNext()) {
		$throwNew($IllegalArgumentException, "path too long for directory"_s);
	}
	checkDirectory(path);
	return path;
}

$Path* Locations$BasicLocationHandler::checkDirectory($Path* path) {
	$useLocalObjectStack();
	$Objects::requireNonNull(path);
	if (!$Files::exists(path, $$new($LinkOptionArray, 0))) {
		$throwNew($FileNotFoundException, $$str({path, ": does not exist"_s}));
	}
	if (!$Files::isDirectory(path, $$new($LinkOptionArray, 0))) {
		$throwNew($IOException, $$str({path, ": not a directory"_s}));
	}
	return path;
}

bool Locations$BasicLocationHandler::isExplicit() {
	return this->explicit$;
}

Locations$BasicLocationHandler::Locations$BasicLocationHandler() {
}

$Class* Locations$BasicLocationHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"location", "Ljavax/tools/JavaFileManager$Location;", nullptr, $FINAL, $field(Locations$BasicLocationHandler, location)},
		{"options", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $FINAL, $field(Locations$BasicLocationHandler, options)},
		{"explicit", "Z", nullptr, 0, $field(Locations$BasicLocationHandler, explicit$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/tools/JavaFileManager$Location;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $PROTECTED | $TRANSIENT, $method(Locations$BasicLocationHandler, init$, void, $JavaFileManager$Location*, $OptionArray*)},
		{"checkDirectory", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PROTECTED, $virtualMethod(Locations$BasicLocationHandler, checkDirectory, $Path*, $Path*), "java.io.IOException"},
		{"checkSingletonDirectory", "(Ljava/lang/Iterable;)Ljava/nio/file/Path;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/nio/file/Path;", $PROTECTED, $virtualMethod(Locations$BasicLocationHandler, checkSingletonDirectory, $Path*, $Iterable*), "java.io.IOException"},
		{"isExplicit", "()Z", nullptr, 0, $virtualMethod(Locations$BasicLocationHandler, isExplicit, bool)},
		{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, $virtualMethod(Locations$BasicLocationHandler, setPathsForModule, void, $String*, $Iterable*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.file.Locations$LocationHandler", "com.sun.tools.javac.file.Locations", "LocationHandler", $PROTECTED | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.file.Locations$BasicLocationHandler",
		"com.sun.tools.javac.file.Locations$LocationHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.Locations"
	};
	$loadClass(Locations$BasicLocationHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$BasicLocationHandler);
	});
	return class$;
}

$Class* Locations$BasicLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com
#include <com/sun/tools/javac/file/Locations$OutputLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModuleTable = ::com::sun::tools::javac::file::Locations$ModuleTable;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void Locations$OutputLocationHandler::init$($Locations* this$0, $JavaFileManager$Location* location, $OptionArray* options) {
	$set(this, this$0, this$0);
	$Locations$BasicLocationHandler::init$(location, options);
}

bool Locations$OutputLocationHandler::handleOption($Option* option, $String* value) {
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	this->explicit$ = true;
	$set(this, outputDir, (value == nullptr) ? ($Path*)nullptr : this->this$0->getPath(value, $$new($StringArray, 0)));
	return true;
}

$Collection* Locations$OutputLocationHandler::getPaths() {
	return (this->outputDir == nullptr) ? ($Collection*)nullptr : $cast($Collection, $Collections::singleton(this->outputDir));
}

void Locations$OutputLocationHandler::setPaths($Iterable* paths) {
	if (paths == nullptr) {
		$set(this, outputDir, nullptr);
	} else {
		this->explicit$ = true;
		$set(this, outputDir, checkSingletonDirectory(paths));
	}
	$set(this, moduleTable, nullptr);
	this->listed = false;
}

$JavaFileManager$Location* Locations$OutputLocationHandler::getLocationForModule($String* name) {
	$useLocalObjectStack();
	if (this->moduleTable == nullptr) {
		$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	}
	$var($Locations$ModuleLocationHandler, l, $nc(this->moduleTable)->get(name));
	if (l == nullptr) {
		$var($Path, out, $nc(this->outputDir)->resolve(name));
		$var($Locations, var$0, this->this$0);
		$var($String, var$1, $str({$($nc(this->location)->getName()), "["_s, name, "]"_s}));
		$assign(l, $new($Locations$ModuleLocationHandler, var$0, this, var$1, name, $($Collections::singletonList(out)), true));
		$nc(this->moduleTable)->add(l);
	}
	return l;
}

void Locations$OutputLocationHandler::setPathsForModule($String* name, $Iterable* paths) {
	$useLocalObjectStack();
	$var($Path, out, checkSingletonDirectory(paths));
	if (this->moduleTable == nullptr) {
		$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	}
	$var($Locations$ModuleLocationHandler, l, $nc(this->moduleTable)->get(name));
	if (l == nullptr) {
		$var($Locations, var$0, this->this$0);
		$var($String, var$1, $str({$($nc(this->location)->getName()), "["_s, name, "]"_s}));
		$assign(l, $new($Locations$ModuleLocationHandler, var$0, this, var$1, name, $($Collections::singletonList(out)), true));
		$nc(this->moduleTable)->add(l);
	} else {
		$set(l, searchPath, $Collections::singletonList(out));
		$nc(this->moduleTable)->updatePaths(l);
	}
	this->explicit$ = true;
}

$JavaFileManager$Location* Locations$OutputLocationHandler::getLocationForModule($Path* file) {
	return (this->moduleTable == nullptr) ? ($JavaFileManager$Location*)nullptr : $cast($JavaFileManager$Location, this->moduleTable->get(file));
}

$Iterable* Locations$OutputLocationHandler::listLocationsForModules() {
	$useLocalObjectStack();
	if (!this->listed && this->outputDir != nullptr) {
		{
			$var($DirectoryStream, stream, $Files::newDirectoryStream(this->outputDir));
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($Iterator, i$, $nc(stream)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Path, p, $cast($Path, i$->next()));
						{
							getLocationForModule($($$nc($nc(p)->getFileName())->toString()));
						}
					}
				} catch ($Throwable& t$) {
					if (stream != nullptr) {
						try {
							stream->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (stream != nullptr) {
					stream->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		this->listed = true;
	}
	if (this->moduleTable == nullptr || this->moduleTable->isEmpty()) {
		return $Collections::emptySet();
	}
	return $Collections::singleton($($nc(this->moduleTable)->locations()));
}

bool Locations$OutputLocationHandler::contains($Path* file) {
	$useLocalObjectStack();
	if (this->moduleTable != nullptr) {
		return this->moduleTable->contains(file);
	} else {
		return (this->outputDir) != nullptr && $$nc($Locations::normalize(file))->startsWith($($Locations::normalize(this->outputDir)));
	}
}

Locations$OutputLocationHandler::Locations$OutputLocationHandler() {
}

$Class* Locations$OutputLocationHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$OutputLocationHandler, this$0)},
		{"outputDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Locations$OutputLocationHandler, outputDir)},
		{"moduleTable", "Lcom/sun/tools/javac/file/Locations$ModuleTable;", nullptr, $PRIVATE, $field(Locations$OutputLocationHandler, moduleTable)},
		{"listed", "Z", nullptr, $PRIVATE, $field(Locations$OutputLocationHandler, listed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/Locations;Ljavax/tools/JavaFileManager$Location;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $TRANSIENT, $method(Locations$OutputLocationHandler, init$, void, $Locations*, $JavaFileManager$Location*, $OptionArray*)},
		{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, $virtualMethod(Locations$OutputLocationHandler, contains, bool, $Path*), "java.io.IOException"},
		{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, $virtualMethod(Locations$OutputLocationHandler, getLocationForModule, $JavaFileManager$Location*, $String*)},
		{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, $virtualMethod(Locations$OutputLocationHandler, getLocationForModule, $JavaFileManager$Location*, $Path*)},
		{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0, $virtualMethod(Locations$OutputLocationHandler, getPaths, $Collection*)},
		{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(Locations$OutputLocationHandler, handleOption, bool, $Option*, $String*)},
		{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, $virtualMethod(Locations$OutputLocationHandler, listLocationsForModules, $Iterable*), "java.io.IOException"},
		{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, $virtualMethod(Locations$OutputLocationHandler, setPaths, void, $Iterable*), "java.io.IOException"},
		{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, $virtualMethod(Locations$OutputLocationHandler, setPathsForModule, void, $String*, $Iterable*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.Locations$OutputLocationHandler", "com.sun.tools.javac.file.Locations", "OutputLocationHandler", $PRIVATE},
		{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.Locations$OutputLocationHandler",
		"com.sun.tools.javac.file.Locations$BasicLocationHandler",
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
	$loadClass(Locations$OutputLocationHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$OutputLocationHandler);
	});
	return class$;
}

$Class* Locations$OutputLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com
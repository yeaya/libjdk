#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler$ModulePathIterator.h>
#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $IterableArray = $Array<::java::lang::Iterable>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModulePathLocationHandler$ModulePathIterator = ::com::sun::tools::javac::file::Locations$ModulePathLocationHandler$ModulePathIterator;
using $Locations$ModuleTable = ::com::sun::tools::javac::file::Locations$ModuleTable;
using $Locations$SimpleLocationHandler = ::com::sun::tools::javac::file::Locations$SimpleLocationHandler;
using $Option = ::com::sun::tools::javac::main::Option;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0 : public $Iterable {
	$class(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Locations$ModulePathLocationHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$listLocationsForModules$0();
	}
	Locations$ModulePathLocationHandler* inst$ = nullptr;
};
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/Locations$ModulePathLocationHandler;)V", nullptr, $PUBLIC, $method(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, init$, void, Locations$ModulePathLocationHandler*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0);
	});
	return class$;
}
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::class$ = nullptr;

class Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1 : public $Iterable {
	$class(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* explicitLocationsList, $Iterable* searchPathLocations) {
		$set(this, explicitLocationsList, explicitLocationsList);
		$set(this, searchPathLocations, searchPathLocations);
	}
	virtual $Iterator* iterator() override {
		 return Locations$ModulePathLocationHandler::lambda$listLocationsForModules$1(explicitLocationsList, searchPathLocations);
	}
	$Iterable* explicitLocationsList = nullptr;
	$Iterable* searchPathLocations = nullptr;
};
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"explicitLocationsList", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, explicitLocationsList)},
		{"searchPathLocations", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, searchPathLocations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, init$, void, $Iterable*, $Iterable*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1);
	});
	return class$;
}
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::class$ = nullptr;

class Locations$ModulePathLocationHandler$$Lambda$iterator$2 : public $Function {
	$class(Locations$ModulePathLocationHandler$$Lambda$iterator$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Iterable, inst$)->iterator();
	}
};
$Class* Locations$ModulePathLocationHandler$$Lambda$iterator$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Locations$ModulePathLocationHandler$$Lambda$iterator$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Locations$ModulePathLocationHandler$$Lambda$iterator$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$iterator$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Locations$ModulePathLocationHandler$$Lambda$iterator$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModulePathLocationHandler$$Lambda$iterator$2);
	});
	return class$;
}
$Class* Locations$ModulePathLocationHandler$$Lambda$iterator$2::class$ = nullptr;

void Locations$ModulePathLocationHandler::init$($Locations* this$0, $JavaFileManager$Location* location, $OptionArray* options) {
	$set(this, this$0, this$0);
	$Locations$SimpleLocationHandler::init$(this$0, location, options);
}

bool Locations$ModulePathLocationHandler::handleOption($Option* option, $String* value) {
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	setPaths(value == nullptr ? ($Iterable*)nullptr : $(this->this$0->getPathEntries(value)));
	return true;
}

$JavaFileManager$Location* Locations$ModulePathLocationHandler::getLocationForModule($String* moduleName) {
	initModuleLocations();
	return $nc(this->moduleTable)->get(moduleName);
}

$JavaFileManager$Location* Locations$ModulePathLocationHandler::getLocationForModule($Path* file) {
	initModuleLocations();
	return $nc(this->moduleTable)->get(file);
}

$Iterable* Locations$ModulePathLocationHandler::listLocationsForModules() {
	$useLocalObjectStack();
	$var($Set, explicitLocations, this->moduleTable != nullptr ? this->moduleTable->explicitLocations() : $Collections::emptySet());
	$var($Iterable, explicitLocationsList, !$nc(explicitLocations)->isEmpty() ? $Collections::singletonList(explicitLocations) : $Collections::emptyList());
	if (this->searchPath == nullptr) {
		return explicitLocationsList;
	}
	$var($Iterable, searchPathLocations, $new(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, this));
	return $new(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, explicitLocationsList, searchPathLocations);
}

bool Locations$ModulePathLocationHandler::contains($Path* file) {
	if (this->moduleTable == nullptr) {
		initModuleLocations();
	}
	return $nc(this->moduleTable)->contains(file);
}

void Locations$ModulePathLocationHandler::setPaths($Iterable* paths) {
	$useLocalObjectStack();
	if (paths != nullptr) {
		$var($Iterator, i$, paths->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				checkValidModulePathEntry(p);
			}
		}
	}
	$Locations$SimpleLocationHandler::setPaths(paths);
	$set(this, moduleTable, nullptr);
}

void Locations$ModulePathLocationHandler::setPathsForModule($String* name, $Iterable* paths) {
	$useLocalObjectStack();
	$var($List, checkedPaths, checkPaths(paths));
	initModuleLocations();
	$var($Locations$ModuleLocationHandler, l, $nc(this->moduleTable)->get(name));
	if (l == nullptr) {
		$assign(l, $new($Locations$ModuleLocationHandler, this->this$0, this, $$str({$($nc(this->location)->getName()), "["_s, name, "]"_s}), name, checkedPaths, true));
		$nc(this->moduleTable)->add(l);
	} else {
		$set(l, searchPath, checkedPaths);
		$nc(this->moduleTable)->updatePaths(l);
	}
	$nc(l)->explicit$ = true;
	this->explicit$ = true;
}

$List* Locations$ModulePathLocationHandler::checkPaths($Iterable* paths) {
	$useLocalObjectStack();
	$Objects::requireNonNull(paths);
	$var($List, validPaths, $new($ArrayList));
	{
		$var($Iterator, i$, paths->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				validPaths->add($(checkDirectory(p)));
			}
		}
	}
	return validPaths;
}

void Locations$ModulePathLocationHandler::initModuleLocations() {
	$useLocalObjectStack();
	if (this->moduleTable != nullptr) {
		return;
	}
	$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	{
		$var($Iterator, i$, $$nc(listLocationsForModules())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Set, set, $cast($Set, i$->next()));
			{
				$var($Iterator, i$, $nc(set)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JavaFileManager$Location, locn, $cast($JavaFileManager$Location, i$->next()));
					{
						$var($Locations$ModuleLocationHandler, moduleLocationHandler, nullptr);
						bool var$0 = $instanceOf($Locations$ModuleLocationHandler, locn);
						if (var$0) {
							$assign(moduleLocationHandler, $cast($Locations$ModuleLocationHandler, locn));
							var$0 = true;
						}
						if (var$0) {
							if (!$nc($nc(this->moduleTable)->nameMap)->containsKey($nc(moduleLocationHandler)->moduleName)) {
								this->moduleTable->add(moduleLocationHandler);
							}
						}
					}
				}
			}
		}
	}
}

void Locations$ModulePathLocationHandler::checkValidModulePathEntry($Path* p) {
	$useLocalObjectStack();
	if (!$Files::exists(p, $$new($LinkOptionArray, 0))) {
		return;
	}
	if ($Files::isDirectory(p, $$new($LinkOptionArray, 0))) {
		return;
	}
	$var($String, name, $$nc($nc(p)->getFileName())->toString());
	int32_t lastDot = $nc(name)->lastIndexOf("."_s);
	if (lastDot > 0) {
		$var($String, s43303$, name->substring(lastDot));
		int32_t tmp43303$ = -1;
		switch (s43303$->hashCode()) {
		case 0x0016832d:
			if (s43303$->equals(".jar"_s)) {
				tmp43303$ = 0;
			}
			break;
		case 0x02ba0f86:
			if (s43303$->equals(".jmod"_s)) {
				tmp43303$ = 1;
			}
			break;
		}
		switch (tmp43303$) {
		case 0:
		case 1:
			return;
		}
	}
	$throwNew($IllegalArgumentException, $(p->toString()));
}

bool Locations$ModulePathLocationHandler::isModuleName($String* name) {
	$useLocalObjectStack();
	int32_t next = 0;
	int32_t off = 0;
	while ((next = $nc(name)->indexOf(u'.', off)) != -1) {
		$var($String, id, name->substring(off, next));
		if (!$SourceVersion::isName(id)) {
			return false;
		}
		off = next + 1;
	}
	$var($String, last, name->substring(off));
	return $SourceVersion::isName(last);
}

$Iterator* Locations$ModulePathLocationHandler::lambda$listLocationsForModules$1($Iterable* explicitLocationsList, $Iterable* searchPathLocations) {
	$init(Locations$ModulePathLocationHandler);
	$useLocalObjectStack();
	$var($Iterable, var$0, $Arrays::asList($$new($IterableArray, {
		explicitLocationsList,
		searchPathLocations
	})));
	return $Iterators::createCompoundIterator(var$0, $$new(Locations$ModulePathLocationHandler$$Lambda$iterator$2));
}

$Iterator* Locations$ModulePathLocationHandler::lambda$listLocationsForModules$0() {
	return $new($Locations$ModulePathLocationHandler$ModulePathIterator, this);
}

Locations$ModulePathLocationHandler::Locations$ModulePathLocationHandler() {
}

$Class* Locations$ModulePathLocationHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0")) {
			return Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1")) {
			return Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$iterator$2")) {
			return Locations$ModulePathLocationHandler$$Lambda$iterator$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModulePathLocationHandler, this$0)},
		{"moduleTable", "Lcom/sun/tools/javac/file/Locations$ModuleTable;", nullptr, $PRIVATE, $field(Locations$ModulePathLocationHandler, moduleTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/Locations;Ljavax/tools/JavaFileManager$Location;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $TRANSIENT, $method(Locations$ModulePathLocationHandler, init$, void, $Locations*, $JavaFileManager$Location*, $OptionArray*)},
		{"checkPaths", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/util/List<Ljava/nio/file/Path;>;", $PRIVATE, $method(Locations$ModulePathLocationHandler, checkPaths, $List*, $Iterable*), "java.io.IOException"},
		{"checkValidModulePathEntry", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(Locations$ModulePathLocationHandler, checkValidModulePathEntry, void, $Path*)},
		{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, $virtualMethod(Locations$ModulePathLocationHandler, contains, bool, $Path*), "java.io.IOException"},
		{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $virtualMethod(Locations$ModulePathLocationHandler, getLocationForModule, $JavaFileManager$Location*, $String*)},
		{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $virtualMethod(Locations$ModulePathLocationHandler, getLocationForModule, $JavaFileManager$Location*, $Path*)},
		{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Locations$ModulePathLocationHandler, handleOption, bool, $Option*, $String*)},
		{"initModuleLocations", "()V", nullptr, $PRIVATE, $method(Locations$ModulePathLocationHandler, initModuleLocations, void)},
		{"isModuleName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(Locations$ModulePathLocationHandler, isModuleName, bool, $String*)},
		{"lambda$listLocationsForModules$0", "()Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(Locations$ModulePathLocationHandler, lambda$listLocationsForModules$0, $Iterator*)},
		{"lambda$listLocationsForModules$1", "(Ljava/lang/Iterable;Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Locations$ModulePathLocationHandler, lambda$listLocationsForModules$1, $Iterator*, $Iterable*, $Iterable*)},
		{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, $virtualMethod(Locations$ModulePathLocationHandler, listLocationsForModules, $Iterable*)},
		{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, $virtualMethod(Locations$ModulePathLocationHandler, setPaths, void, $Iterable*)},
		{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, $virtualMethod(Locations$ModulePathLocationHandler, setPathsForModule, void, $String*, $Iterable*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "com.sun.tools.javac.file.Locations", "ModulePathLocationHandler", $PRIVATE},
		{"com.sun.tools.javac.file.Locations$SimpleLocationHandler", "com.sun.tools.javac.file.Locations", "SimpleLocationHandler", $PRIVATE},
		{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$ModulePathIterator", "com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "ModulePathIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.Locations$ModulePathLocationHandler",
		"com.sun.tools.javac.file.Locations$SimpleLocationHandler",
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
	$loadClass(Locations$ModulePathLocationHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModulePathLocationHandler);
	});
	return class$;
}

$Class* Locations$ModulePathLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com
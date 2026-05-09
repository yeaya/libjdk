#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Path = ::java::nio::file::Path;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModuleTable$$Lambda$lambda$explicitLocations$0 : public $Predicate {
	$class(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		return Locations$ModuleTable::lambda$explicitLocations$0($cast($Map$Entry, e));
	}
};
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.Locations$ModuleTable$$Lambda$lambda$explicitLocations$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0);
	});
	return class$;
}
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::class$ = nullptr;

class Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1 : public $Function {
	$class(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		return $of(Locations$ModuleTable::lambda$explicitLocations$1($cast($Map$Entry, e)));
	}
};
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1);
	});
	return class$;
}
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::class$ = nullptr;

void Locations$ModuleTable::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$set(this, nameMap, $new($LinkedHashMap));
	$set(this, pathMap, $new($LinkedHashMap));
}

void Locations$ModuleTable::add($Locations$ModuleLocationHandler* h) {
	$useLocalObjectStack();
	this->nameMap->put($nc(h)->moduleName, h);
	{
		$var($Iterator, i$, $nc(h->searchPath)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				this->pathMap->put($($Locations::normalize(p)), h);
			}
		}
	}
}

void Locations$ModuleTable::updatePaths($Locations$ModuleLocationHandler* h) {
	$useLocalObjectStack();
	{
		$var($Iterator, iter, $$nc(this->pathMap->entrySet())->iterator());
		for (; $nc(iter)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, iter->next()));
			if ($equals($nc(e)->getValue(), h)) {
				iter->remove();
			}
		}
	}
	{
		$var($Iterator, i$, $nc($nc(h)->searchPath)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				this->pathMap->put($($Locations::normalize(p)), h);
			}
		}
	}
}

$Locations$ModuleLocationHandler* Locations$ModuleTable::get($String* name) {
	return $cast($Locations$ModuleLocationHandler, this->nameMap->get(name));
}

$Locations$ModuleLocationHandler* Locations$ModuleTable::get($Path* path$renamed) {
	$useLocalObjectStack();
	$var($Path, path, path$renamed);
	while (path != nullptr) {
		$var($Locations$ModuleLocationHandler, l, $cast($Locations$ModuleLocationHandler, this->pathMap->get(path)));
		if (l != nullptr) {
			return l;
		}
		$assign(path, path->getParent());
	}
	return nullptr;
}

void Locations$ModuleTable::clear() {
	this->nameMap->clear();
	this->pathMap->clear();
}

bool Locations$ModuleTable::isEmpty() {
	return this->nameMap->isEmpty();
}

bool Locations$ModuleTable::contains($Path* file) {
	return this->this$0->contains($(this->pathMap->keySet()), file);
}

$Set* Locations$ModuleTable::locations() {
	$useLocalObjectStack();
	return $Collections::unmodifiableSet($$cast($Set, $$nc($$nc(this->nameMap->values())->stream())->collect($($Collectors::toSet()))));
}

$Set* Locations$ModuleTable::explicitLocations() {
	$useLocalObjectStack();
	return $Collections::unmodifiableSet($$cast($Set, $$nc($$nc($$nc($$nc(this->nameMap->entrySet())->stream())->filter($$new(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0)))->map($$new(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1)))->collect($($Collectors::toSet()))));
}

$Locations$ModuleLocationHandler* Locations$ModuleTable::lambda$explicitLocations$1($Map$Entry* e) {
	return $cast($Locations$ModuleLocationHandler, $nc(e)->getValue());
}

bool Locations$ModuleTable::lambda$explicitLocations$0($Map$Entry* e) {
	return $nc(($$cast($Locations$ModuleLocationHandler, $nc(e)->getValue())))->explicit$;
}

Locations$ModuleTable::Locations$ModuleTable() {
}

$Class* Locations$ModuleTable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.file.Locations$ModuleTable$$Lambda$lambda$explicitLocations$0")) {
			return Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1")) {
			return Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModuleTable, this$0)},
		{"nameMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;>;", $PRIVATE | $FINAL, $field(Locations$ModuleTable, nameMap)},
		{"pathMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;>;", $PRIVATE | $FINAL, $field(Locations$ModuleTable, pathMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, $PRIVATE, $method(Locations$ModuleTable, init$, void, $Locations*)},
		{"add", "(Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;)V", nullptr, 0, $virtualMethod(Locations$ModuleTable, add, void, $Locations$ModuleLocationHandler*)},
		{"clear", "()V", nullptr, 0, $virtualMethod(Locations$ModuleTable, clear, void)},
		{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, $virtualMethod(Locations$ModuleTable, contains, bool, $Path*), "java.io.IOException"},
		{"explicitLocations", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", 0, $virtualMethod(Locations$ModuleTable, explicitLocations, $Set*)},
		{"get", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;", nullptr, 0, $virtualMethod(Locations$ModuleTable, get, $Locations$ModuleLocationHandler*, $String*)},
		{"get", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;", nullptr, 0, $virtualMethod(Locations$ModuleTable, get, $Locations$ModuleLocationHandler*, $Path*)},
		{"isEmpty", "()Z", nullptr, 0, $virtualMethod(Locations$ModuleTable, isEmpty, bool)},
		{"lambda$explicitLocations$0", "(Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Locations$ModuleTable, lambda$explicitLocations$0, bool, $Map$Entry*)},
		{"lambda$explicitLocations$1", "(Ljava/util/Map$Entry;)Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Locations$ModuleTable, lambda$explicitLocations$1, $Locations$ModuleLocationHandler*, $Map$Entry*)},
		{"locations", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", 0, $virtualMethod(Locations$ModuleTable, locations, $Set*)},
		{"updatePaths", "(Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;)V", nullptr, 0, $virtualMethod(Locations$ModuleTable, updatePaths, void, $Locations$ModuleLocationHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.Locations$ModuleTable", "com.sun.tools.javac.file.Locations", "ModuleTable", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.Locations$ModuleTable",
		"java.lang.Object",
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
	$loadClass(Locations$ModuleTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$ModuleTable);
	});
	return class$;
}

$Class* Locations$ModuleTable::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com
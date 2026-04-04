#include <com/sun/tools/javac/code/ModuleFinder$ModuleLocationIterator.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <java/io/IOException.h>
#include <java/lang/Iterable.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef MODULE_PATH
#undef MODULE_SOURCE_PATH
#undef SYSTEM_MODULES
#undef UPGRADE_MODULE_PATH

using $StandardLocationArray = $Array<::javax::tools::StandardLocation>;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void ModuleFinder$ModuleLocationIterator::init$($ModuleFinder* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, next$, nullptr);
	$init($StandardLocation);
	$set(this, outerIter, $$nc($Arrays::asList($$new($StandardLocationArray, {
		$StandardLocation::MODULE_SOURCE_PATH,
		$StandardLocation::UPGRADE_MODULE_PATH,
		$StandardLocation::SYSTEM_MODULES,
		$StandardLocation::MODULE_PATH
	})))->iterator());
	$set(this, innerIter, nullptr);
}

bool ModuleFinder$ModuleLocationIterator::hasNext() {
	$useLocalObjectStack();
	while (this->next$ == nullptr) {
		while (this->innerIter == nullptr || !this->innerIter->hasNext()) {
			if ($nc(this->outerIter)->hasNext()) {
				$set(this, outer, $cast($StandardLocation, this->outerIter->next()));
				try {
					$set(this, innerIter, $$nc($nc(this->this$0->fileManager)->listLocationsForModules(this->outer))->iterator());
				} catch ($IOException& e) {
					$nc($System::err)->println($$str({"error listing module locations for "_s, this->outer, ": "_s, e}));
				}
			} else {
				return false;
			}
		}
		if ($nc(this->innerIter)->hasNext()) {
			$set(this, next$, $cast($Set, this->innerIter->next()));
		}
	}
	return true;
}

$Object* ModuleFinder$ModuleLocationIterator::next() {
	hasNext();
	if (this->next$ != nullptr) {
		$var($Set, result, this->next$);
		$set(this, next$, nullptr);
		return result;
	}
	$throwNew($NoSuchElementException);
}

ModuleFinder$ModuleLocationIterator::ModuleFinder$ModuleLocationIterator() {
}

$Class* ModuleFinder$ModuleLocationIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleFinder$ModuleLocationIterator, this$0)},
		{"outer", "Ljavax/tools/StandardLocation;", nullptr, 0, $field(ModuleFinder$ModuleLocationIterator, outer)},
		{"next", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", 0, $field(ModuleFinder$ModuleLocationIterator, next$)},
		{"outerIter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/tools/StandardLocation;>;", 0, $field(ModuleFinder$ModuleLocationIterator, outerIter)},
		{"innerIter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, $field(ModuleFinder$ModuleLocationIterator, innerIter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/ModuleFinder;)V", nullptr, 0, $method(ModuleFinder$ModuleLocationIterator, init$, void, $ModuleFinder*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$ModuleLocationIterator, hasNext, bool)},
		{"next", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", $PUBLIC, $virtualMethod(ModuleFinder$ModuleLocationIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.ModuleFinder$ModuleLocationIterator", "com.sun.tools.javac.code.ModuleFinder", "ModuleLocationIterator", 0},
		{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.ModuleFinder$ModuleLocationIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.ModuleFinder"
	};
	$loadClass(ModuleFinder$ModuleLocationIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$ModuleLocationIterator);
	});
	return class$;
}

$Class* ModuleFinder$ModuleLocationIterator::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com
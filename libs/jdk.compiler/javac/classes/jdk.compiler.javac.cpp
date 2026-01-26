#include <jdk.compiler.javac.h>

#include <jdk.compiler.h>
#include <java.base.h>
#include <java.compiler.h>
#include <jdk.zipfs.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <Javac.h>

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$compiler$javac_classes_[] = {
	$classEntry("Javac", ::Javac)
};

void jdk$compiler$javac$PreloadClass() {
	int32_t length = $lengthOf(_jdk$compiler$javac_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$compiler$javac_classes_[i];
		if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, false);
		}
	}
}

void jdk$compiler$javac$PreinitClass() {
	int32_t length = $lengthOf(_jdk$compiler$javac_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$compiler$javac_classes_[i];
		if ($hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, true);
		}
	}
}

void jdk$compiler$javac$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$compiler$javac$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		jdk$compiler$javac$PreinitClass();
	}
}

$StringArray* jdk$compiler$javac$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$compiler$javac$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$compiler$javac_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$compiler$javac_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$compiler$javac$GetResource($String* name) {
	return nullptr;
}

const char* _jdk$compiler$javac_args_[] = {
	"--add-exports",
	"jdk.compiler/com.sun.tools.javac=ALL-UNNAMED",
	"--add-exports",
	"jdk.compiler/com.sun.tools.javac.main=ALL-UNNAMED",
	nullptr
};

void jdk$compiler$javac::init() {
	::jdk$compiler::init();
	::java$base::init();
	::java$compiler::init();
	::jdk$zipfs::init();
	::java::lang::Library lib = {
		"jdk.compiler.javac", "17.35", "",
		nullptr,
		jdk$compiler$javac$LibEventAction,
		jdk$compiler$javac$GetPackages,
		jdk$compiler$javac$GetClassEntry,
		jdk$compiler$javac$GetResource,
		_jdk$compiler$javac_args_
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	jdk$compiler$javac::init();
}
#endif
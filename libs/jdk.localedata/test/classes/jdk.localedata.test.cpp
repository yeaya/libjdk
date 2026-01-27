#include <jdk.localedata.test.h>

#include <jdk.localedata.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <Bug8132125.h>
#include <Bug8139572.h>
#include <ContextMonthNamesTest.h>
#include <FormatLocale.h>
#include <HijrahConfigCheck.h>
#include <nontestng/java/time/chrono/Bug8178823.h>

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$localedata$test_classes_[] = {
	$classEntry("Bug8132125", ::Bug8132125),
	$classEntry("Bug8139572", ::Bug8139572),
	$classEntry("ContextMonthNamesTest", ::ContextMonthNamesTest),
	$classEntry("FormatLocale", ::FormatLocale),
	$classEntry("HijrahConfigCheck", ::HijrahConfigCheck),
	$classEntry("nontestng.java.time.chrono.Bug8178823", ::nontestng::java::time::chrono::Bug8178823)
};

const char* _jdk$localedata$test_packages_[] = {
	"nontestng.java.time.chrono"
};

void jdk$localedata$test$PreloadClass() {
	int32_t length = $lengthOf(_jdk$localedata$test_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$localedata$test_classes_[i];
		if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, false);
		}
	}
}

void jdk$localedata$test$PreinitClass() {
	int32_t length = $lengthOf(_jdk$localedata$test_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$localedata$test_classes_[i];
		if ($hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, true);
		}
	}
}

void jdk$localedata$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$localedata$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		jdk$localedata$test$PreinitClass();
	}
}

$StringArray* jdk$localedata$test$GetPackages() {
	int32_t length = $lengthOf(_jdk$localedata$test_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$localedata$test_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$localedata$test$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$localedata$test_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$localedata$test_classes_[mid];
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

$bytes* jdk$localedata$test$GetResource($String* name) {
	return nullptr;
}

void jdk$localedata$test::init() {
	::jdk$localedata::init();
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.localedata.test", "17.35", "",
		nullptr,
		jdk$localedata$test$LibEventAction,
		jdk$localedata$test$GetPackages,
		jdk$localedata$test$GetClassEntry,
		jdk$localedata$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	jdk$localedata$test::init();
}
#endif
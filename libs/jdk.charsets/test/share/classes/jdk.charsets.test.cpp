#include <jdk.charsets.test.h>

#include <jdk.charsets.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <CharsetContainmentTest.h>
#include <CurrencyFormat.h>
#include <JapaneseTest.h>
#include <KoreanTest.h>
#include <LargeMessageFormat.h>
#include <NonGregorianFormatTest.h>
#include <SystemInAvailable.h>
#include <TestPeruCurrencyFormat.h>
#include <TestWrite.h>
#include <bug4117335.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$charsets$test_classes_[] = {
	$classEntry("CharsetContainmentTest", ::CharsetContainmentTest),
	$classEntry("CurrencyFormat", ::CurrencyFormat),
	$classEntry("JapaneseTest", ::JapaneseTest),
	$classEntry("KoreanTest", ::KoreanTest),
	$classEntry("LargeMessageFormat", ::LargeMessageFormat),
	$classEntry("NonGregorianFormatTest", ::NonGregorianFormatTest),
	$classEntry("SystemInAvailable", ::SystemInAvailable),
	$classEntry("TestPeruCurrencyFormat", ::TestPeruCurrencyFormat),
	$classEntry("TestWrite", ::TestWrite),
	$classEntry("bug4117335", ::bug4117335)
};

void jdk$charsets$test$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_jdk$charsets$test_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$charsets$test_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void jdk$charsets$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$charsets$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$charsets$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$charsets$test$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$charsets$test_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$charsets$test_classes_[mid];
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

$bytes* jdk$charsets$test$GetResource($String* name) {
	return nullptr;
}

void jdk$charsets$test::init() {
	::jdk$charsets::init();
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.charsets.test", "17.35", "",
		nullptr,
		jdk$charsets$test$LibEventAction,
		jdk$charsets$test$GetPackages,
		jdk$charsets$test$GetClassEntry,
		jdk$charsets$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}
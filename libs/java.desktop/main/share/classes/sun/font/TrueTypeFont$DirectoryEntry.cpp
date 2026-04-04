#include <sun/font/TrueTypeFont$DirectoryEntry.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void TrueTypeFont$DirectoryEntry::init$() {
}

TrueTypeFont$DirectoryEntry::TrueTypeFont$DirectoryEntry() {
}

$Class* TrueTypeFont$DirectoryEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tag", "I", nullptr, 0, $field(TrueTypeFont$DirectoryEntry, tag)},
		{"offset", "I", nullptr, 0, $field(TrueTypeFont$DirectoryEntry, offset)},
		{"length", "I", nullptr, 0, $field(TrueTypeFont$DirectoryEntry, length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TrueTypeFont$DirectoryEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.TrueTypeFont$DirectoryEntry", "sun.font.TrueTypeFont", "DirectoryEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.TrueTypeFont$DirectoryEntry",
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
		"sun.font.TrueTypeFont"
	};
	$loadClass(TrueTypeFont$DirectoryEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrueTypeFont$DirectoryEntry);
	});
	return class$;
}

$Class* TrueTypeFont$DirectoryEntry::class$ = nullptr;

	} // font
} // sun
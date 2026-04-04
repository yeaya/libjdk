#include <com/sun/tools/javac/util/UnsharedNameTable$HashEntry.h>
#include <com/sun/tools/javac/util/UnsharedNameTable$NameImpl.h>
#include <com/sun/tools/javac/util/UnsharedNameTable.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $UnsharedNameTable$NameImpl = ::com::sun::tools::javac::util::UnsharedNameTable$NameImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void UnsharedNameTable$HashEntry::init$($UnsharedNameTable$NameImpl* referent) {
	$WeakReference::init$(referent);
}

UnsharedNameTable$HashEntry::UnsharedNameTable$HashEntry() {
}

$Class* UnsharedNameTable$HashEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Lcom/sun/tools/javac/util/UnsharedNameTable$HashEntry;", nullptr, 0, $field(UnsharedNameTable$HashEntry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/UnsharedNameTable$NameImpl;)V", nullptr, 0, $method(UnsharedNameTable$HashEntry, init$, void, $UnsharedNameTable$NameImpl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.UnsharedNameTable$HashEntry", "com.sun.tools.javac.util.UnsharedNameTable", "HashEntry", $STATIC},
		{"com.sun.tools.javac.util.UnsharedNameTable$NameImpl", "com.sun.tools.javac.util.UnsharedNameTable", "NameImpl", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.UnsharedNameTable$HashEntry",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Lcom/sun/tools/javac/util/UnsharedNameTable$NameImpl;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.UnsharedNameTable"
	};
	$loadClass(UnsharedNameTable$HashEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsharedNameTable$HashEntry);
	});
	return class$;
}

$Class* UnsharedNameTable$HashEntry::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
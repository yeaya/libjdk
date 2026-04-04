#include <com/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$InterimProvidesDirective::init$($Name* service, $List* impls) {
	$set(this, service, service);
	$set(this, impls, impls);
}

ClassReader$InterimProvidesDirective::ClassReader$InterimProvidesDirective() {
}

$Class* ClassReader$InterimProvidesDirective::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"service", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(ClassReader$InterimProvidesDirective, service)},
		{"impls", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC | $FINAL, $field(ClassReader$InterimProvidesDirective, impls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;)V", $PUBLIC, $method(ClassReader$InterimProvidesDirective, init$, void, $Name*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective", "com.sun.tools.javac.jvm.ClassReader", "InterimProvidesDirective", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective",
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
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$InterimProvidesDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$InterimProvidesDirective);
	});
	return class$;
}

$Class* ClassReader$InterimProvidesDirective::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
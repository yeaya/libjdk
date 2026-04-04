#include <com/sun/tools/javac/jvm/ClassReader$InterimUsesDirective.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

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

void ClassReader$InterimUsesDirective::init$($Name* service) {
	$set(this, service, service);
}

ClassReader$InterimUsesDirective::ClassReader$InterimUsesDirective() {
}

$Class* ClassReader$InterimUsesDirective::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"service", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(ClassReader$InterimUsesDirective, service)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(ClassReader$InterimUsesDirective, init$, void, $Name*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective", "com.sun.tools.javac.jvm.ClassReader", "InterimUsesDirective", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective",
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
	$loadClass(ClassReader$InterimUsesDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$InterimUsesDirective);
	});
	return class$;
}

$Class* ClassReader$InterimUsesDirective::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
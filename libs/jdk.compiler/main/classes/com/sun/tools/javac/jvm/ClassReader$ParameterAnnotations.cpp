#include <com/sun/tools/javac/jvm/ClassReader$ParameterAnnotations.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$ParameterAnnotations::init$() {
}

void ClassReader$ParameterAnnotations::add($List* newAnnotations) {
	if (this->proxies == nullptr) {
		$set(this, proxies, newAnnotations);
	} else {
		$set(this, proxies, this->proxies->prependList(newAnnotations));
	}
}

ClassReader$ParameterAnnotations::ClassReader$ParameterAnnotations() {
}

$Class* ClassReader$ParameterAnnotations::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"proxies", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;", 0, $field(ClassReader$ParameterAnnotations, proxies)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassReader$ParameterAnnotations, init$, void)},
		{"add", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;)V", 0, $virtualMethod(ClassReader$ParameterAnnotations, add, void, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations", "com.sun.tools.javac.jvm.ClassReader", "ParameterAnnotations", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations",
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
	$loadClass(ClassReader$ParameterAnnotations, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$ParameterAnnotations);
	});
	return class$;
}

$Class* ClassReader$ParameterAnnotations::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
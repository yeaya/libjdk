#include <com/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <jcpp.h>

using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$TypeAnnotationProxy::init$($ClassReader$CompoundAnnotationProxy* compound, $TypeAnnotationPosition* position) {
	$set(this, compound, compound);
	$set(this, position, position);
}

ClassReader$TypeAnnotationProxy::ClassReader$TypeAnnotationProxy() {
}

$Class* ClassReader$TypeAnnotationProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"compound", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, $FINAL, $field(ClassReader$TypeAnnotationProxy, compound)},
		{"position", "Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $FINAL, $field(ClassReader$TypeAnnotationProxy, position)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", nullptr, $PUBLIC, $method(ClassReader$TypeAnnotationProxy, init$, void, $ClassReader$CompoundAnnotationProxy*, $TypeAnnotationPosition*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy", "com.sun.tools.javac.jvm.ClassReader", "TypeAnnotationProxy", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy",
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
	$loadClass(ClassReader$TypeAnnotationProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$TypeAnnotationProxy);
	});
	return class$;
}

$Class* ClassReader$TypeAnnotationProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
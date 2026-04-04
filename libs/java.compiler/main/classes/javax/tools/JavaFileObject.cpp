#include <javax/tools/JavaFileObject.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace javax {
	namespace tools {

$Class* JavaFileObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaFileObject, getAccessLevel, $Modifier*)},
		{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaFileObject, getKind, $JavaFileObject$Kind*)},
		{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaFileObject, getNestingKind, $NestingKind*)},
		{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaFileObject, isNameCompatible, bool, $String*, $JavaFileObject$Kind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.JavaFileObject$Kind", "javax.tools.JavaFileObject", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.JavaFileObject",
		nullptr,
		"javax.tools.FileObject",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.tools.JavaFileObject$Kind"
	};
	$loadClass(JavaFileObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaFileObject);
	});
	return class$;
}

$Class* JavaFileObject::class$ = nullptr;

	} // tools
} // javax
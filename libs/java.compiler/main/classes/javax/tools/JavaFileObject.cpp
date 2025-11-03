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
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace javax {
	namespace tools {

$MethodInfo _JavaFileObject_MethodInfo_[] = {
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavaFileObject_InnerClassesInfo_[] = {
	{"javax.tools.JavaFileObject$Kind", "javax.tools.JavaFileObject", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavaFileObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.JavaFileObject",
	nullptr,
	"javax.tools.FileObject",
	nullptr,
	_JavaFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_JavaFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.JavaFileObject$Kind"
};

$Object* allocate$JavaFileObject($Class* clazz) {
	return $of($alloc(JavaFileObject));
}

$Class* JavaFileObject::load$($String* name, bool initialize) {
	$loadClass(JavaFileObject, name, initialize, &_JavaFileObject_ClassInfo_, allocate$JavaFileObject);
	return class$;
}

$Class* JavaFileObject::class$ = nullptr;

	} // tools
} // javax
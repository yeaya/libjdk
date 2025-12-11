#include <javax/tools/Diagnostic.h>

#include <java/util/Locale.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <jcpp.h>

#undef NOPOS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

$FieldInfo _Diagnostic_FieldInfo_[] = {
	{"NOPOS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Diagnostic, NOPOS)},
	{}
};

$MethodInfo _Diagnostic_MethodInfo_[] = {
	{"getCode", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnNumber", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getEndPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getKind", "()Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getSource", "()Ljava/lang/Object;", "()TS;", $PUBLIC | $ABSTRACT},
	{"getStartPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Diagnostic_InnerClassesInfo_[] = {
	{"javax.tools.Diagnostic$Kind", "javax.tools.Diagnostic", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Diagnostic_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.Diagnostic",
	nullptr,
	nullptr,
	_Diagnostic_FieldInfo_,
	_Diagnostic_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Diagnostic_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.Diagnostic$Kind"
};

$Object* allocate$Diagnostic($Class* clazz) {
	return $of($alloc(Diagnostic));
}

$Class* Diagnostic::load$($String* name, bool initialize) {
	$loadClass(Diagnostic, name, initialize, &_Diagnostic_ClassInfo_, allocate$Diagnostic);
	return class$;
}

$Class* Diagnostic::class$ = nullptr;

	} // tools
} // javax
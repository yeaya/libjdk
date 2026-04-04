#include <com/sun/tools/javac/comp/Attr$TargetInfo.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Attr$TargetInfo::init$($Attr* this$0, $Type* target, $Type* descriptor) {
	$set(this, this$0, this$0);
	$set(this, target, target);
	$set(this, descriptor, descriptor);
}

Attr$TargetInfo::Attr$TargetInfo() {
}

$Class* Attr$TargetInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$TargetInfo, this$0)},
		{"target", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Attr$TargetInfo, target)},
		{"descriptor", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Attr$TargetInfo, descriptor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Attr$TargetInfo, init$, void, $Attr*, $Type*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$TargetInfo", "com.sun.tools.javac.comp.Attr", "TargetInfo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$TargetInfo",
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
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$TargetInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$TargetInfo);
	});
	return class$;
}

$Class* Attr$TargetInfo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
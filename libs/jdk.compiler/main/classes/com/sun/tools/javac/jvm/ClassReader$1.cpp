#include <com/sun/tools/javac/jvm/ClassReader$1.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$1::init$($ClassReader* this$0, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym) {
	$set(this, this$0, this$0);
	$Type$ClassType::init$(outer, typarams, tsym);
	this->completed = false;
}

$Type* ClassReader$1::getEnclosingType() {
	$useLocalObjectStack();
	if (!this->completed) {
		this->completed = true;
		$nc(this->tsym)->apiComplete();
		$var($Type, enclosingType, $nc($nc(this->tsym)->type)->getEnclosingType());
		if (!$equals(enclosingType, $Type::noType)) {
			$var($List, typeArgs, $$nc($Type$ClassType::getEnclosingType())->allparams());
			$var($List, typeParams, $nc(enclosingType)->allparams());
			int32_t var$0 = $nc(typeParams)->length();
			if (var$0 != $nc(typeArgs)->length()) {
				$Type$ClassType::setEnclosingType($($nc(this->this$0->types)->erasure(enclosingType)));
			} else {
				$Type$ClassType::setEnclosingType($($nc(this->this$0->types)->subst(enclosingType, typeParams, typeArgs)));
			}
		} else {
			$Type$ClassType::setEnclosingType($Type::noType);
		}
	}
	return $Type$ClassType::getEnclosingType();
}

void ClassReader$1::setEnclosingType($Type* outer) {
	$throwNew($UnsupportedOperationException);
}

ClassReader$1::ClassReader$1() {
}

$Class* ClassReader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$1, this$0)},
		{"completed", "Z", nullptr, 0, $field(ClassReader$1, completed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(ClassReader$1, init$, void, $ClassReader*, $Type*, $List*, $Symbol$TypeSymbol*)},
		{"getEnclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(ClassReader$1, getEnclosingType, $Type*)},
		{"setEnclosingType", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $virtualMethod(ClassReader$1, setEnclosingType, void, $Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.ClassReader",
		"classSigToType",
		"()Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$1",
		"com.sun.tools.javac.code.Type$ClassType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ClassReader$1));
	});
	return class$;
}

$Class* ClassReader$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
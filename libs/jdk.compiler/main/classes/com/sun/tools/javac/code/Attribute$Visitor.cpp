#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <jcpp.h>

using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Class* Attribute$Visitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute$Visitor, visitArray, void, $Attribute$Array*)},
		{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute$Visitor, visitClass, void, $Attribute$Class*)},
		{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute$Visitor, visitCompound, void, $Attribute$Compound*)},
		{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute$Visitor, visitConstant, void, $Attribute$Constant*)},
		{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute$Visitor, visitEnum, void, $Attribute$Enum*)},
		{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute$Visitor, visitError, void, $Attribute$Error*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.Attribute$Visitor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Attribute"
	};
	$loadClass(Attribute$Visitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute$Visitor);
	});
	return class$;
}

$Class* Attribute$Visitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com